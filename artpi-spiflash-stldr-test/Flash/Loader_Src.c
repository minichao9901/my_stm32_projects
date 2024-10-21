#include "stm32h750xx.h"
#include"stm32f1_init.h"
#include"w25q64.h"
#define UART_RXNE_MASK (1<<5)
#define UART_TXE_MASK (1<<7)

#define ADDRESS_OFFSET	((uint32_t)0x70000000U)

static void uart_send_ch(char ch)
{
//    while((USART1->SR&UART_TXE_MASK)!=UART_TXE_MASK);
//    USART1->DR=ch;
	__NOP();
}
static void user_printf(char *str)
{
//    unsigned int i;
//    for(i=0;str[i]!=0;i++)
//    uart_send_ch(str[i]);
	__NOP();
}

uint32_t CheckSum(uint32_t StartAddress, uint32_t Size, uint32_t InitVal)
{
  uint8_t missalignementAddress = StartAddress%4;
  uint8_t missalignementSize = Size ;
	int cnt;
	uint32_t Val;
  uint8_t value;
	
  StartAddress-=StartAddress%4;
  Size += (Size%4==0)?0:4-(Size%4);
  user_printf("CheckSum\r\n");
  for(cnt=0; cnt<Size ; cnt+=4)
  {
    W25QXX_Read(&value, StartAddress ,1);
    Val = value;
    W25QXX_Read(&value, StartAddress + 1,1);
    Val+= value<<8;
    W25QXX_Read(&value, StartAddress + 2,1);
    Val+= value<<16;
    W25QXX_Read(&value, StartAddress + 3,1);
    Val+= value<<24;
    if(missalignementAddress)
    {
      switch (missalignementAddress)
      {
        case 1:
          InitVal += (uint8_t) (Val>>8 & 0xff);
          InitVal += (uint8_t) (Val>>16 & 0xff);
          InitVal += (uint8_t) (Val>>24 & 0xff);
          missalignementAddress-=1;
          break;
        case 2:
          InitVal += (uint8_t) (Val>>16 & 0xff);
          InitVal += (uint8_t) (Val>>24 & 0xff);
          missalignementAddress-=2;
          break;
        case 3:   
          InitVal += (uint8_t) (Val>>24 & 0xff);
          missalignementAddress-=3;
          break;
      }  
    }
    else if((Size-missalignementSize)%4 && (Size-cnt) <=4)
    {
      switch (Size-missalignementSize)
      {
        case 1:
          InitVal += (uint8_t) Val;
          InitVal += (uint8_t) (Val>>8 & 0xff);
          InitVal += (uint8_t) (Val>>16 & 0xff);
          missalignementSize-=1;
          break;
        case 2:
          InitVal += (uint8_t) Val;
          InitVal += (uint8_t) (Val>>8 & 0xff);
          missalignementSize-=2;
          break;
        case 3:   
          InitVal += (uint8_t) Val;
          missalignementSize-=3;
          break;
      } 
    }
    else
    {
      InitVal += (uint8_t) Val;
      InitVal += (uint8_t) (Val>>8 & 0xff);
      InitVal += (uint8_t) (Val>>16 & 0xff);
      InitVal += (uint8_t) (Val>>24 & 0xff);
    }
    StartAddress+=4;
  }
  
  return (InitVal);
}

int MassErase (void)
{  
  user_printf("MassErase\r\n");
  // sFLASH_EraseBulk();
  return 1;	
}

int Read (uint32_t Address, uint32_t Size, uint8_t* buffer)
{ 
	//Address -= ADDRESS_OFFSET;
  user_printf("Read\r\n");
  W25QXX_Read(buffer, Address, Size);
  SPI2_ReadWrites(0x00);
  return 1;
} 

int SectorErase (uint32_t EraseStartAddress ,uint32_t EraseEndAddress)
{   
  //EraseStartAddress -= ADDRESS_OFFSET;
  //EraseEndAddress -= ADDRESS_OFFSET;
  user_printf("SectorErase\r\n");   
  EraseStartAddress = EraseStartAddress -  EraseStartAddress%0x1000;
  while (EraseEndAddress>=EraseStartAddress)
  {
    W25QXX_Erase_Sector(EraseStartAddress);
    EraseStartAddress += 0x10000;
  }
  return 1;	
}

uint64_t Verify (uint32_t MemoryAddr, uint32_t RAMBufferAddr, uint32_t Size, uint32_t missalignement)
{
	//MemoryAddr -= ADDRESS_OFFSET;
  uint32_t InitVal = 0;
  uint32_t VerifiedData = 0;
  uint8_t TmpBuffer = 0x00;
	uint64_t checksum;
  Size*=4;
  user_printf("Verify\r\n");
  checksum = CheckSum((uint32_t)MemoryAddr + (missalignement & 0xf), Size - ((missalignement >> 16) & 0xF), InitVal);
  
  while (Size>VerifiedData)
  {
    W25QXX_Read(&TmpBuffer, MemoryAddr+VerifiedData, 1);
         
    if (TmpBuffer != *((uint8_t*)RAMBufferAddr+VerifiedData))
      return ((checksum<<32) + MemoryAddr+VerifiedData);
        
    VerifiedData++;  
  }
       
  return (checksum<<32);
}

int Write (uint32_t Address, uint32_t Size, uint8_t* buffer)
{
	//Address -= ADDRESS_OFFSET;
  user_printf("Write\r\n");
  W25QXX_Write_buf(buffer, Address, Size);
  return 1;
}
char num2str(unsigned int num)
{
  char ch;
  switch(num&0x0f)
  {
    case 0:ch='0';break;
    case 1:ch='1';break;
    case 2:ch='2';break;
    case 3:ch='3';break;
    case 4:ch='4';break;
    case 5:ch='5';break;
    case 6:ch='6';break;
    case 7:ch='7';break;
    case 8:ch='8';break;
    case 9:ch='9';break;
    case 10:ch='a';break;
    case 11:ch='b';break;
    case 12:ch='c';break;
    case 13:ch='d';break;
    case 14:ch='e';break;
    case 15:ch='f';break;
    default: ch=' ';break;
  } 
  return ch;
} 
void short2str(unsigned int num,char buf[])
{
  buf[0]='0';
  buf[1]='x';
  buf[2]=num2str((num>>20)&0x0f);
  buf[3]=num2str((num>>16)&0x0f);
  buf[4]=num2str((num>>12)&0x0f);
  buf[5]=num2str((num>>8)&0x0f);
  buf[6]=num2str((num>>4)&0x0f);
  buf[7]=num2str((num>>0)&0x0f);
  buf[8]=0;
}
static void w25q64_check()
{
  unsigned int temp;
  char buf[9];
  temp=spi_flash_read_ID();
  short2str(temp,buf);
  user_printf("获得w25q64 ID ");
  user_printf(buf);
  user_printf("\r\n");
  if(temp==0xef4018)
  {
    user_printf("W25Q64已挂载\r\n");
  }
  else
  {
    user_printf("W25Q64未挂载\r\n");
  }
  
}

int Init(void)
{
  Stm32_Clock_Init();
  gpio_init();
  USART1_Init();
  SPI2_INIT();
  w25q64_check();
  user_printf("Init finish\r\n");
  return 1;
  /* USER CODE END 3 */
}
