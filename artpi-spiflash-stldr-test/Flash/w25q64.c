#include"w25q64.h"
#include "stm32h7_reg.h"
static void CS(unsigned char data)
{
	MyGPIOA->MODER.MODE4=1;
	MyGPIOA->ODR.ODR4=data;
}
void W25QXX_Write_Page(unsigned char* pBuffer,unsigned int WriteAddr,unsigned short NumByteToWrite)
{
 	unsigned short i;  
    W25QXX_Write_Enable();                  //SET WEL 
	CS(0);                            //使能器件   
    SPI2_ReadWrites(W25X_PageProgram);   //发送写页命令   
    SPI2_ReadWrites((unsigned char)((WriteAddr)>>16)); //发送24bit地址    
    SPI2_ReadWrites((unsigned char)((WriteAddr)>>8));   
    SPI2_ReadWrites((unsigned char)WriteAddr);   
    for(i=0;i<NumByteToWrite;i++)SPI2_ReadWrites(pBuffer[i]);//循环写数  
	  CS(1);                            //取消片选 
	  W25QXX_Wait_Busy();					   //等待写入结束
}
void W25QXX_Erase_Sector(unsigned int Dst_Addr)   
{  
	//监视falsh擦除情况,测试用   
 	//printf("fe:%x\r\n",Dst_Addr);	  

    W25QXX_Write_Enable();                  //SET WEL 	 
    W25QXX_Wait_Busy();   
  	CS(0);                           //使能器件   
    SPI2_ReadWrites(W25X_SectorErase);   //发送扇区擦除指令 
    SPI2_ReadWrites((unsigned char)((Dst_Addr)>>16));  //发送24bit地址    
    SPI2_ReadWrites((unsigned char)((Dst_Addr)>>8));   
    SPI2_ReadWrites((unsigned char)Dst_Addr);  
	CS(1);                           //取消片选     	      
    W25QXX_Wait_Busy();   				    //等待擦除完成
}

#define PAGE_SIZE 4096
void W25QXX_Write_buf(unsigned char*buf,unsigned int addr,unsigned int num)
{
  while (num)
  {
    if(num>=PAGE_SIZE)
    {
      W25QXX_Write_Page(buf,addr,PAGE_SIZE);
      addr+=PAGE_SIZE;
      num-=PAGE_SIZE;
      buf+=PAGE_SIZE;
    }
    else
    {
      W25QXX_Write_Page(buf,addr,num);
      num=0;
    }
    
  }
  
} 
unsigned char W25QXX_ReadSR(unsigned char regno)   
{  
	unsigned char byte=0,command=0; 
    switch(regno)
    {
        case 1:
            command=W25X_ReadStatusReg1;    //读状态寄存器1指令
            break;
        case 2:
            command=W25X_ReadStatusReg2;    //读状态寄存器2指令
            break;
        case 3:
            command=W25X_ReadStatusReg3;    //读状态寄存器3指令
            break;
        default:
            command=W25X_ReadStatusReg1;    
            break;
    }    
	CS(0);                           //使能器件   
	SPI2_ReadWrites(command);            //发送读取状态寄存器命令    
	byte=SPI2_ReadWrites(0Xff);          //读取一个字节  
	CS(1);                           //取消片选     
	return byte;   
}
void W25QXX_Wait_Busy(void)   
{   
	while((W25QXX_ReadSR(1)&0x01)==0x01);   // 等待BUSY位清空
} 
void W25QXX_Write_Enable(void)   
{
	CS(0);                            //使能器件   
    SPI2_ReadWrites(W25X_WriteEnable);   //发送写使能  
	CS(1);                            //取消片选     	      
} 
//W25QXX写禁止	
//将WEL清零  
void W25QXX_Write_Disable(void)   
{  
	CS(0);                            //使能器件   
    SPI2_ReadWrites(W25X_WriteDisable);  //发送写禁止指令    
	CS(1);                            //取消片选     	      
}
void W25QXX_Read(unsigned char* pBuffer,unsigned int ReadAddr,unsigned short NumByteToRead)   
{ 
 	unsigned short i;   										    
	CS(0);                            //使能器件   
    SPI2_ReadWrites(W25X_ReadData);      //发送读取命令  
    SPI2_ReadWrites((unsigned char)((ReadAddr)>>16));   //发送24bit地址    
    SPI2_ReadWrites((unsigned char)((ReadAddr)>>8));   
    SPI2_ReadWrites((unsigned char)ReadAddr);   
    for(i=0;i<NumByteToRead;i++)
	{ 
        pBuffer[i]=SPI2_ReadWrites(0XFF);    //循环读数  
    }
	CS(1); 				    	      
}
unsigned int spi_flash_read_ID(void)
{
  unsigned int temp, temp0, temp1, temp2;

  CS(0);

  SPI2_ReadWrites(W25X_JedecDeviceID);

  temp0 = SPI2_ReadWrites(0X00);
  temp1 = SPI2_ReadWrites(0X00);
  temp2 = SPI2_ReadWrites(0X00);

  CS(1);

  temp = (temp0 << 16) | (temp1 << 8) | temp2;

  return temp;
}
