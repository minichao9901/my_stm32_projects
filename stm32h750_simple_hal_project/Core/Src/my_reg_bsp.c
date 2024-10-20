#include "stm32h7xx_hal.h"
#include "stm32h750_typedefs.h"

void Xil_Out32(uint32_t reg, uint32_t val)
{
	*(uint32_t *)reg=val;
}

uint32_t Xil_In32(uint32_t reg)
{
	return *(uint32_t *)reg;
}

void delay_us(uint32_t nus)
{
  register uint32_t ticks;
  register uint32_t told,tnow,tcnt=0;
  register uint32_t reload=SysTick->LOAD;
  ticks=nus*(SystemCoreClock/1000000);
  told=SysTick->VAL;
  while(1)
  {
    tnow=SysTick->VAL;
    if(tnow!=told)
    {
      if(tnow<told)tcnt+=told-tnow;
      else tcnt+=reload-tnow+told;
      told=tnow;
      if(tcnt>=ticks)break;
    }
  }
}

void delay_ms(uint32_t nms)
{
  while(nms--){
    delay_us(1000);
  }
}

/***** rccc *****/
void my_rcc_init()
{
	MyFlash->ACR.LATENCY=4;

	MyRCC->CR.HSEON=1;
	while(MyRCC->CR.HSERDY==0);

	MyRCC->D1CFGR.HPRE=8;
	MyRCC->D1CFGR.D1PPRE=4;
	MyRCC->D2CFGR.D2PPRE2=4;
	MyRCC->D2CFGR.D2PPRE1=4;
	MyRCC->D3CFGR.D3PPRE=4;


	MyRCC->PLLCKSELR.DIVM1=5;
	MyRCC->PLLCKSELR.PLLSRC=2;
	MyRCC->PLLCFGR.PLL1RGE=2;
	MyRCC->PLLCFGR.PLL1FRACEN=1;
	MyRCC->PLL1DIVR.DIVN1=159;

	MyRCC->CR.PLL1ON=1;
	while(MyRCC->CR.PLL1RDY==0);

	MyRCC->CFGR.SW=3;

	MyRCC->AHB4ENR.GPIOAEN=1;
	MyRCC->AHB4ENR.GPIOBEN=1;
	MyRCC->AHB4ENR.GPIOCEN=1;
	MyRCC->AHB4ENR.GPIODEN=1;
	MyRCC->AHB4ENR.GPIOEEN=1;
	MyRCC->AHB4ENR.GPIOFEN=1;
	MyRCC->AHB4ENR.GPIOGEN=1;
	MyRCC->AHB4ENR.GPIOHEN=1;
	MyRCC->AHB4ENR.GPIOIEN=1;
	MyRCC->AHB4ENR.GPIOJEN=1;
	MyRCC->AHB4ENR.GPIOKEN=1;

	MyRCC->APB1LENR.UART4EN=1;
	MyRCC->APB4ENR.SYSCFGEN=1;

	SystemCoreClock=400000000;
	HAL_InitTick(uwTickPrio);
}

/***** led *****/
void my_led_init()
{
  MyGPIOC->MODER.MODE15=1;
  MyGPIOI->MODER.MODE8=1;
}
void my_led_blink()
{
	my_led_init();

	while(1){
    MyGPIOC->ODR.OD15=1;
		delay_ms(500);
    MyGPIOI->ODR.OD8=1;
		delay_ms(500);
    MyGPIOC->ODR.OD15=0;
		delay_ms(500);
    MyGPIOI->ODR.OD8=0;
		delay_ms(500);
	}
}

/***** uart *****/
void my_uart4_init()
{
	MyGPIOA->MODER.MODE0=2;
	MyGPIOA->AFRL.AFSEL0=8;
	MyGPIOI->MODER.MODE9=2;
	MyGPIOI->AFRH.AFSEL9=8;

	MyUART4->CR3.RXFTCFG=2;
	MyUART4->CR3.TXFTCFG=2;
	MyUART4->BRR.val=868; /*100MHz/115200=868*/

	MyUART4->CR1.TE=1;
	MyUART4->CR1.RE=1;
	MyUART4->CR1.FIFOEN=1;
	MyUART4->CR1.UE=1;
}

void my_uart4_send()
{
	my_uart4_init();

	while(1){
		while(MyUART4->ISR.TC==0){}
		MyUART4->TDR.TDR='a';
		MyUART4->TDR.TDR='\n';
		HAL_Delay(500);
	}
}

int __io_putchar(int ch)
{
	while(MyUART4->ISR.TC==0){}
	MyUART4->TDR.TDR=ch;
	return ch;
}

/***** sdram *****/
void my_fmc_init()
{
	MyRCC->AHB3ENR.FMCEN=1;

	MyRCC->AHB4ENR.GPIOAEN=1;
	MyRCC->AHB4ENR.GPIOBEN=1;
	MyRCC->AHB4ENR.GPIOCEN=1;
	MyRCC->AHB4ENR.GPIODEN=1;
	MyRCC->AHB4ENR.GPIOEEN=1;
	MyRCC->AHB4ENR.GPIOFEN=1;
	MyRCC->AHB4ENR.GPIOGEN=1;
	MyRCC->AHB4ENR.GPIOHEN=1;
	MyRCC->AHB4ENR.GPIOIEN=1;
	MyRCC->AHB4ENR.GPIOJEN=1;
	MyRCC->AHB4ENR.GPIOKEN=1;

	//PE
	     MyGPIOE->MODER.MODE0=2;
	MyGPIOE->OSPEEDR.OSPEED0=3;
	       MyGPIOE->AFRL.AFSEL0=12;

	     MyGPIOE->MODER.MODE1=2;
	MyGPIOE->OSPEEDR.OSPEED1=3;
	       MyGPIOE->AFRL.AFSEL1=12;

	     MyGPIOE->MODER.MODE7=2;
	MyGPIOE->OSPEEDR.OSPEED7=3;
	       MyGPIOE->AFRL.AFSEL7=12;

	     MyGPIOE->MODER.MODE8=2;
	MyGPIOE->OSPEEDR.OSPEED8=3;
	       MyGPIOE->AFRH.AFSEL8=12;

	     MyGPIOE->MODER.MODE9=2;
	MyGPIOE->OSPEEDR.OSPEED9=3;
	       MyGPIOE->AFRH.AFSEL9=12;

	     MyGPIOE->MODER.MODE10=2;
	MyGPIOE->OSPEEDR.OSPEED10=3;
	       MyGPIOE->AFRH.AFSEL10=12;

	     MyGPIOE->MODER.MODE11=2;
	MyGPIOE->OSPEEDR.OSPEED11=3;
	       MyGPIOE->AFRH.AFSEL11=12;

	     MyGPIOE->MODER.MODE12=2;
	MyGPIOE->OSPEEDR.OSPEED12=3;
	       MyGPIOE->AFRH.AFSEL12=12;

	     MyGPIOE->MODER.MODE13=2;
	MyGPIOE->OSPEEDR.OSPEED13=3;
	       MyGPIOE->AFRH.AFSEL13=12;

	     MyGPIOE->MODER.MODE14=2;
	MyGPIOE->OSPEEDR.OSPEED14=3;
	       MyGPIOE->AFRH.AFSEL14=12;

	     MyGPIOE->MODER.MODE15=2;
	MyGPIOE->OSPEEDR.OSPEED15=3;
	       MyGPIOE->AFRH.AFSEL15=12;

	//PG
	     MyGPIOG->MODER.MODE0=2;
	MyGPIOG->OSPEEDR.OSPEED0=3;
	       MyGPIOG->AFRL.AFSEL0=12;

	     MyGPIOG->MODER.MODE1=2;
	MyGPIOG->OSPEEDR.OSPEED1=3;
	       MyGPIOG->AFRL.AFSEL1=12;

	     MyGPIOG->MODER.MODE2=2;
	MyGPIOG->OSPEEDR.OSPEED2=3;
	       MyGPIOG->AFRL.AFSEL2=12;

	     MyGPIOG->MODER.MODE4=2;
	MyGPIOG->OSPEEDR.OSPEED4=3;
	       MyGPIOG->AFRL.AFSEL4=12;

	     MyGPIOG->MODER.MODE5=2;
	MyGPIOG->OSPEEDR.OSPEED5=3;
	       MyGPIOG->AFRL.AFSEL5=12;

	     MyGPIOG->MODER.MODE8=2;
	MyGPIOG->OSPEEDR.OSPEED8=3;
	       MyGPIOG->AFRH.AFSEL8=12;

	     MyGPIOG->MODER.MODE15=2;
	MyGPIOG->OSPEEDR.OSPEED15=3;
	       MyGPIOG->AFRH.AFSEL15=12;

	//PD
	     MyGPIOD->MODER.MODE0=2;
	MyGPIOD->OSPEEDR.OSPEED0=3;
	       MyGPIOD->AFRL.AFSEL0=12;

	     MyGPIOD->MODER.MODE1=2;
	MyGPIOD->OSPEEDR.OSPEED1=3;
	       MyGPIOD->AFRL.AFSEL1=12;

	     MyGPIOD->MODER.MODE8=2;
	MyGPIOD->OSPEEDR.OSPEED8=3;
	       MyGPIOD->AFRH.AFSEL8=12;

	     MyGPIOD->MODER.MODE9=2;
	MyGPIOD->OSPEEDR.OSPEED9=3;
	       MyGPIOD->AFRH.AFSEL9=12;

	     MyGPIOD->MODER.MODE10=2;
	MyGPIOD->OSPEEDR.OSPEED10=3;
	       MyGPIOD->AFRH.AFSEL10=12;

	     MyGPIOD->MODER.MODE14=2;
	MyGPIOD->OSPEEDR.OSPEED14=3;
	       MyGPIOD->AFRH.AFSEL14=12;

	     MyGPIOD->MODER.MODE15=2;
	MyGPIOD->OSPEEDR.OSPEED15=3;
	       MyGPIOD->AFRH.AFSEL15=12;

	//PF
	     MyGPIOF->MODER.MODE0=2;
	MyGPIOF->OSPEEDR.OSPEED0=3;
	       MyGPIOF->AFRL.AFSEL0=12;

	     MyGPIOF->MODER.MODE1=2;
	MyGPIOF->OSPEEDR.OSPEED1=3;
	       MyGPIOF->AFRL.AFSEL1=12;

	     MyGPIOF->MODER.MODE2=2;
	MyGPIOF->OSPEEDR.OSPEED2=3;
	       MyGPIOF->AFRL.AFSEL2=12;

	     MyGPIOF->MODER.MODE3=2;
	MyGPIOF->OSPEEDR.OSPEED3=3;
	       MyGPIOF->AFRL.AFSEL3=12;

	     MyGPIOF->MODER.MODE4=2;
	MyGPIOF->OSPEEDR.OSPEED4=3;
	       MyGPIOF->AFRL.AFSEL4=12;

	     MyGPIOF->MODER.MODE5=2;
	MyGPIOF->OSPEEDR.OSPEED5=3;
	       MyGPIOF->AFRL.AFSEL5=12;

	     MyGPIOF->MODER.MODE11=2;
	MyGPIOF->OSPEEDR.OSPEED11=3;
	       MyGPIOF->AFRH.AFSEL11=12;

	     MyGPIOF->MODER.MODE12=2;
	MyGPIOF->OSPEEDR.OSPEED12=3;
	       MyGPIOF->AFRH.AFSEL12=12;

	     MyGPIOF->MODER.MODE13=2;
	MyGPIOF->OSPEEDR.OSPEED13=3;
	       MyGPIOF->AFRH.AFSEL13=12;

	     MyGPIOF->MODER.MODE14=2;
	MyGPIOF->OSPEEDR.OSPEED14=3;
	       MyGPIOF->AFRH.AFSEL14=12;

	     MyGPIOF->MODER.MODE15=2;
	MyGPIOF->OSPEEDR.OSPEED15=3;
	       MyGPIOF->AFRH.AFSEL15=12;

	//PC
	     MyGPIOC->MODER.MODE2=2;
	MyGPIOC->OSPEEDR.OSPEED2=3;
	       MyGPIOC->AFRL.AFSEL2=12;

	     MyGPIOC->MODER.MODE3=2;
	MyGPIOC->OSPEEDR.OSPEED3=3;
	       MyGPIOC->AFRL.AFSEL3=12;

	//PH
	     MyGPIOH->MODER.MODE5=2;
	MyGPIOH->OSPEEDR.OSPEED5=3;
	       MyGPIOH->AFRL.AFSEL5=12;
}

void my_sdram_init()
{
	my_fmc_init();

	MyFMC->BCR1.FMCEN=1; /*fmc_en=1*/

	MyFMC->SDCR1.val=0x1959;
	MyFMC->SDTR1.val=0x11f5571;
	MyFMC->SDCMR.val=0x11;  /*cmd_clk enable*/
	MyFMC->SDCMR.val=0x12;  /*cmd_pall*/
	MyFMC->SDCMR.val=0xf3;  /*cmd autorefresh*/
	MyFMC->SDCMR.val=0x44014; /*cmd load_mode*/
	MyFMC->SDRTR.val=0x54a;   /*programRefreshRate*/
}

void ex_sdram_write_test_32b()
{

	uint16_t wr_len=32;
	uint32_t wr_startVal=0x12345678;

	uint32_t Bank5_SDRAM_ADDR=((uint32_t)(0XC0000000)); //SDRAM开始地址
	uint32_t *ptr1=(uint32_t *)Bank5_SDRAM_ADDR;
	while(wr_len--){
		*ptr1=wr_startVal;
		ptr1++;
		wr_startVal++;
	}
}

/***** qspi *****/
struct
{
	__IO union {
		 struct {
	         uint32_t INSTRUCTION:8;
	         uint32_t IMODE:2;
	         uint32_t ADMODE:2;
	         uint32_t ADSIZE:2;
	         uint32_t ABMODE:2;
	         uint32_t ABSIZE:2;
	         uint32_t DCYC:5;
	         uint32_t RESERVED1:1;
	         uint32_t DMODE:2;
	         uint32_t FMODE:2;
	         uint32_t SIOO:1;
	         uint32_t FRCM:1;
	         uint32_t DHHC:1;
	         uint32_t DDRM:1;
	     };
	     uint32_t val;
	 };
} ccr_reg;

void qspi_init()
{
	MyRCC->AHB3ENR.QSPIEN=1;
	MyRCC->AHB4ENR.GPIOGEN=1;
	MyRCC->AHB4ENR.GPIOFEN=1;

	//PG6
	MyGPIOG->MODER.MODE6=2;
	MyGPIOG->OSPEEDR.OSPEED6=3;
	MyGPIOG->AFRL.AFSEL6=10;

	//PF6,7,10
	MyGPIOF->MODER.MODE6=2;
	MyGPIOF->OSPEEDR.OSPEED6=3;
	MyGPIOF->AFRL.AFSEL6=9;

	MyGPIOF->MODER.MODE7=2;
	MyGPIOF->OSPEEDR.OSPEED7=3;
	MyGPIOF->AFRL.AFSEL7=9;

	MyGPIOF->MODER.MODE10=2;
	MyGPIOF->OSPEEDR.OSPEED10=3;
	MyGPIOF->AFRH.AFSEL10=9;

	//PF8,9
	MyGPIOF->MODER.MODE8=2;
	MyGPIOF->OSPEEDR.OSPEED8=3;
	MyGPIOF->AFRH.AFSEL8=10;

	MyGPIOF->MODER.MODE9=2;
	MyGPIOF->OSPEEDR.OSPEED9=3;
	MyGPIOF->AFRH.AFSEL9=10;

	//QSPI_RST
	MyRCC->AHB3RSTR.QSPIRST=1;
	MyRCC->AHB3RSTR.QSPIRST=0;
	while(MyQUADSPI->SR.BUSY==1);


	MyQUADSPI->CR.SSHIFT=1;
	MyQUADSPI->CR.FTHRES=3;
	MyQUADSPI->CR.PRESCALER=1;
	MyQUADSPI->DCR.CKMODE=1;
	MyQUADSPI->DCR.CSHT=4;
	MyQUADSPI->DCR.FSIZE=22; /*2^(22+1)=8MB*/
	MyQUADSPI->CR.EN=1;
}

void qspi_mmap_mode_init()
{
	qspi_init();

	while(MyQUADSPI->SR.BUSY==1);
	ccr_reg.val=0;
	ccr_reg.IMODE=1;
	ccr_reg.INSTRUCTION=0x38;
	MyQUADSPI->CCR.val=ccr_reg.val; /*this register should write at once*/
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;

	while(MyQUADSPI->SR.BUSY==1);
	ccr_reg.val=0;
	ccr_reg.IMODE=1;
	ccr_reg.INSTRUCTION=0x06;
	MyQUADSPI->CCR.val=ccr_reg.val;
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;

	/*this command miss, also can work*/
	while(MyQUADSPI->SR.BUSY==1);
	ccr_reg.val=0;
	ccr_reg.IMODE=3;
	ccr_reg.DMODE=3;
	ccr_reg.INSTRUCTION=0xc0;
	MyQUADSPI->DLR.val=0;
	MyQUADSPI->CCR.val=ccr_reg.val;
	while(MyQUADSPI->SR.FTF==0);
//	MyQUADSPI->DR.byte0=3<<4;          //注意，这2个操作实际上是不等价。bit-field操作涉及read-modify-write的过程，而强制指针转化则不会
	*(__IO uint8_t *)&MyQUADSPI->DR=3<<4;
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;

	while(MyQUADSPI->SR.BUSY==1);
	MyQUADSPI->ABR.val=0;
        ccr_reg.val=0;
	ccr_reg.IMODE=3;
	ccr_reg.ADMODE=3;
	ccr_reg.ADSIZE=2;
	ccr_reg.ABMODE=3;
	ccr_reg.ABSIZE=0;
	ccr_reg.DCYC=6;
	ccr_reg.DMODE=3;
	ccr_reg.FMODE=3;
	ccr_reg.INSTRUCTION=0xeb;
	MyQUADSPI->CCR.val=ccr_reg.val;

	//设置QSPI FLASH空间的MPU保护
	SCB->SHCSR&=~(1<<16);			//禁止MemManage
	MPU->CTRL&=~(1<<0);				//禁止MPU
	MPU->RNR=0;						//设置保护区域编号为0(1~7可以给其他内存用)
	MPU->RBAR=0X90000000;			//基地址为0X9000 000,即QSPI的起始地址
	MPU->RASR=0X0303002D;			//设置相关保护参数(禁止共用,允许cache,允许缓冲),详见MPU实验的解析
	MPU->CTRL=(1<<2)|(1<<0);		//使能PRIVDEFENA,使能MPU
	SCB->SHCSR|=1<<16;				//使能MemManage
}

void qspi_mmap_test()
{
	for(int i=0; i<16; i++){
		uint32_t reg=Xil_In32(0x90000000+4*i);
		printf("%x\n", reg);
	}

	while(1);
}

/***** qspi-indirect *****/
void write_command(uint8_t cmd)
{
	while(MyQUADSPI->SR.BUSY==1);
	MyQUADSPI->CCR.val=0x100|cmd;
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;
}

void write_command_read_data(uint8_t cmd, uint32_t len, uint8_t *pdata)
{
	while(MyQUADSPI->SR.BUSY==1);
	MyQUADSPI->DLR.val=len-1;
	MyQUADSPI->CCR.val=0x1200100|cmd;
	//HAL_Delay(1);

	MyQUADSPI->CCR.val=0x5200100|cmd;
	int i=0;
	while(len--){
		while(MyQUADSPI->SR.FTF==0 && MyQUADSPI->SR.TCF==0);
		pdata[i++]=*((__IO uint8_t *)&MyQUADSPI->DR);
	}
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;
}

void write_command_addr(uint8_t cmd, uint32_t addr)
{
	while(MyQUADSPI->SR.BUSY==1);
	MyQUADSPI->CCR.val=0x2500|cmd;
	MyQUADSPI->AR.val=addr;
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;
}

void write_command_addr_write_data(uint8_t cmd, uint32_t addr, uint32_t len, uint8_t *pdata)
{
	while(MyQUADSPI->SR.BUSY==1);
	MyQUADSPI->DLR.val=len-1;
	MyQUADSPI->CCR.val= 0x3202500|cmd;
	MyQUADSPI->AR.val=addr;
	//HAL_Delay(1);

	int i=0;
	while(len--){
		while(MyQUADSPI->SR.FTF==0);
		*((__IO uint8_t *)&MyQUADSPI->DR)=pdata[i++];
	}
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;
}

void write_command_addr_read_data(uint8_t cmd, uint32_t addr, uint32_t len, uint8_t *pdata)
{
	while(MyQUADSPI->SR.BUSY==1);
	MyQUADSPI->DLR.val=len-1;
	MyQUADSPI->CCR.val= 0x3402500|cmd;
	MyQUADSPI->AR.val=addr;
	//HAL_Delay(1);

	MyQUADSPI->CCR.val=0x7402500|cmd;
	MyQUADSPI->AR.val=addr; /*must have to start xfer*/
	int i=0;
	while(len--){
		while(MyQUADSPI->SR.FTF==0 && MyQUADSPI->SR.TCF==0);
		pdata[i++]=*((__IO uint8_t *)&MyQUADSPI->DR);
	}
	while(MyQUADSPI->SR.TCF==0);
	MyQUADSPI->FCR.CTCF=1;
}


uint8_t aTxBuffer[] = "****QSPI communication based on IT****";
#define BUFFERSIZE sizeof(aTxBuffer)/sizeof(*aTxBuffer)
uint8_t aRxBuffer[BUFFERSIZE];

void qspi_indirect_mode_test()
{
	qspi_init();

	write_command_read_data(0x90, 8, aRxBuffer);
	write_command(0x06);
	write_command_addr(0xd8,0x1000);
	HAL_Delay(1000);
	write_command(0x06);
	write_command_addr_write_data(0x32,0x1000,BUFFERSIZE, aTxBuffer);
	HAL_Delay(1000);
	write_command_addr_read_data(0x6b,0x1000,BUFFERSIZE, aRxBuffer);

	while(1);
}


/***** ltdc *****/
void my_ltdc_io_init()
{
	MyRCC->AHB4ENR.GPIOAEN=1;
	MyRCC->AHB4ENR.GPIOBEN=1;
	MyRCC->AHB4ENR.GPIOCEN=1;
	MyRCC->AHB4ENR.GPIODEN=1;
	MyRCC->AHB4ENR.GPIOEEN=1;
	MyRCC->AHB4ENR.GPIOFEN=1;
	MyRCC->AHB4ENR.GPIOGEN=1;
	MyRCC->AHB4ENR.GPIOHEN=1;
	MyRCC->AHB4ENR.GPIOIEN=1;
	MyRCC->AHB4ENR.GPIOJEN=1;
	MyRCC->AHB4ENR.GPIOKEN=1;

	//PK
	     MyGPIOK->MODER.MODE0=2;
	MyGPIOK->OSPEEDR.OSPEED0=3;
	       MyGPIOK->AFRL.AFSEL0=14;

	     MyGPIOK->MODER.MODE1=2;
	MyGPIOK->OSPEEDR.OSPEED1=3;
	       MyGPIOK->AFRL.AFSEL1=14;

	     MyGPIOK->MODER.MODE2=2;
	MyGPIOK->OSPEEDR.OSPEED2=3;
	       MyGPIOK->AFRL.AFSEL2=14;

	     MyGPIOK->MODER.MODE3=2;
	MyGPIOK->OSPEEDR.OSPEED3=3;
	       MyGPIOK->AFRL.AFSEL3=14;

	     MyGPIOK->MODER.MODE4=2;
	MyGPIOK->OSPEEDR.OSPEED4=3;
	       MyGPIOK->AFRL.AFSEL4=14;

	     MyGPIOK->MODER.MODE5=2;
	MyGPIOK->OSPEEDR.OSPEED5=3;
	       MyGPIOK->AFRL.AFSEL5=14;

	     MyGPIOK->MODER.MODE6=2;
	MyGPIOK->OSPEEDR.OSPEED6=3;
	       MyGPIOK->AFRL.AFSEL6=14;

	     MyGPIOK->MODER.MODE7=2;
	MyGPIOK->OSPEEDR.OSPEED7=3;
	       MyGPIOK->AFRL.AFSEL7=14;

	//PJ
	     MyGPIOJ->MODER.MODE0=2;
	MyGPIOJ->OSPEEDR.OSPEED0=3;
	       MyGPIOJ->AFRL.AFSEL0=14;

	     MyGPIOJ->MODER.MODE1=2;
	MyGPIOJ->OSPEEDR.OSPEED1=3;
	       MyGPIOJ->AFRL.AFSEL1=14;

	     MyGPIOJ->MODER.MODE2=2;
	MyGPIOJ->OSPEEDR.OSPEED2=3;
	       MyGPIOJ->AFRL.AFSEL2=14;

	     MyGPIOJ->MODER.MODE3=2;
	MyGPIOJ->OSPEEDR.OSPEED3=3;
	       MyGPIOJ->AFRL.AFSEL3=14;

	     MyGPIOJ->MODER.MODE4=2;
	MyGPIOJ->OSPEEDR.OSPEED4=3;
	       MyGPIOJ->AFRL.AFSEL4=14;

	     MyGPIOJ->MODER.MODE5=2;
	MyGPIOJ->OSPEEDR.OSPEED5=3;
	       MyGPIOJ->AFRL.AFSEL5=14;

	     MyGPIOJ->MODER.MODE6=2;
	MyGPIOJ->OSPEEDR.OSPEED6=3;
	       MyGPIOJ->AFRL.AFSEL6=14;

	     MyGPIOJ->MODER.MODE7=2;
	MyGPIOJ->OSPEEDR.OSPEED7=3;
	       MyGPIOJ->AFRL.AFSEL7=14;

	     MyGPIOJ->MODER.MODE8=2;
	MyGPIOJ->OSPEEDR.OSPEED8=3;
	       MyGPIOJ->AFRH.AFSEL8=14;

	     MyGPIOJ->MODER.MODE9=2;
	MyGPIOJ->OSPEEDR.OSPEED9=3;
	       MyGPIOJ->AFRH.AFSEL9=14;


	     MyGPIOJ->MODER.MODE10=2;
	MyGPIOJ->OSPEEDR.OSPEED10=3;
	       MyGPIOJ->AFRH.AFSEL10=14;


	     MyGPIOJ->MODER.MODE11=2;
	MyGPIOJ->OSPEEDR.OSPEED11=3;
	       MyGPIOJ->AFRH.AFSEL11=14;


	     MyGPIOJ->MODER.MODE12=2;
	MyGPIOJ->OSPEEDR.OSPEED12=3;
	       MyGPIOJ->AFRH.AFSEL12=14;


	     MyGPIOJ->MODER.MODE13=2;
	MyGPIOJ->OSPEEDR.OSPEED13=3;
	       MyGPIOJ->AFRH.AFSEL13=14;


	     MyGPIOJ->MODER.MODE14=2;
	MyGPIOJ->OSPEEDR.OSPEED14=3;
	       MyGPIOJ->AFRH.AFSEL14=14;


	     MyGPIOJ->MODER.MODE15=2;
	MyGPIOJ->OSPEEDR.OSPEED15=3;
	       MyGPIOJ->AFRH.AFSEL15=14;

//PI
	     MyGPIOI->MODER.MODE12=2;
	MyGPIOI->OSPEEDR.OSPEED12=3;
	       MyGPIOI->AFRH.AFSEL12=14;

	     MyGPIOI->MODER.MODE13=2;
	MyGPIOI->OSPEEDR.OSPEED13=3;
	       MyGPIOI->AFRH.AFSEL13=14;


	     MyGPIOI->MODER.MODE14=2;
	MyGPIOI->OSPEEDR.OSPEED14=3;
	       MyGPIOI->AFRH.AFSEL14=14;


	     MyGPIOI->MODER.MODE15=2;
	MyGPIOI->OSPEEDR.OSPEED15=3;
	       MyGPIOI->AFRH.AFSEL15=14;
}

void lcd_back_on()
{
	MyGPIOD->MODER.MODE4=1;
	MyGPIOD->ODR.OD4=1;
}


void my_ltdc_init()
{
	//PLL3-config
	MyRCC->PLLCKSELR.DIVM3=5;
	MyRCC->PLLCFGR.PLL3FRACEN=1;
	MyRCC->PLLCFGR.PLL3RGE=2;
	MyRCC->PLL3DIVR.DIVN3=100-1;
	MyRCC->PLL3DIVR.DIVR3=25-1;
	MyRCC->CR.PLL3ON=1;
	while(MyRCC->CR.PLL3RDY==0);

	my_ltdc_io_init();
	lcd_back_on();

	MyRCC->APB3ENR.LTDCEN=1;
	LTDC->GCR = 0x2220;
	LTDC->SSCR = 0x2f0002;
	LTDC->BPCR = 0x870022;
	LTDC->AWCR = 0x3a70202;
	LTDC->TWCR = 0x3cf020f;

	LTDC->IER = 0x6;
//	LTDC->CPSR = 0x34201c0;
//	LTDC->CDSR = 0x0;
	LTDC->GCR = 0x2221;

	LTDC_Layer1->CR = 0x1;
	LTDC_Layer1->WHPCR = 0x3a70088;
	LTDC_Layer1->WVPCR = 0x2020023;
	LTDC_Layer1->PFCR = 0x1;
	LTDC_Layer1->DCCR = 0xff0000;
	LTDC_Layer1->BFCR = 0x405;
	LTDC_Layer1->CFBAR = 0x90200000;
	LTDC_Layer1->CFBLR = 0x9600967;
	LTDC_Layer1->CFBLNR = 0x1e0;
	LTDC->SRCR = 0x1;
}




int hsw=48;
int hbp=88;
int hact=800;
int hfp=40;

int vsw=3;
int vbp=32;
int vact=480;
int vfp=13;

int bytes=3;


void my_ltdc_init_fine()
{
	//PLL3-config
	MyRCC->PLLCKSELR.DIVM3=5;
	MyRCC->PLLCFGR.PLL3FRACEN=1;
	MyRCC->PLLCFGR.PLL3RGE=2;
	MyRCC->PLL3DIVR.DIVN3=100-1;
	MyRCC->PLL3DIVR.DIVR3=25-1;
	MyRCC->CR.PLL3ON=1;
	while(MyRCC->CR.PLL3RDY==0);

	my_ltdc_io_init();
	lcd_back_on();
	MyRCC->APB3ENR.LTDCEN=1;

	/********************/
	int avbp=vsw+vbp-1;
	int ahbp=hsw+hbp-1;
	int aah=vsw+vbp+vact-1;
	int aav=hsw+hbp+hact-1;
	int toth=vsw+vbp+vact+vfp-1;
	int totw=hsw+hbp+hact+hfp-1;

	int xpos=0, xsize=hact;
	int ypos=0, ysize=vact;

	int lay1_xstart=ahbp+1+xpos;
	int lay1_xend=ahbp+xpos+xsize;
	int lay1_ystart=avbp+1+ypos;
	int lay1_yend=avbp+ypos+ysize;
	int screen_bytes=hact*bytes;
	int image_bytes=xsize*bytes;
	/********************/


	//LTDC
	MyLTDC->GCR.LTDCEN = 0;
	MyLTDC->SSCR.VSH = vsw-1;
	MyLTDC->SSCR.HSW = hsw-1;
	MyLTDC->BPCR.AVBP = avbp;
	MyLTDC->BPCR.AHBP = ahbp;
	MyLTDC->AWCR.AAH = aah;
	MyLTDC->AWCR.AAV = aav;
	MyLTDC->TWCR.TOTALH = toth;
	MyLTDC->TWCR.TOTALW = totw;
	MyLTDC->IER.FUIE = 1;
	MyLTDC->IER.TERRIE = 1;
	MyLTDC->GCR.LTDCEN = 1;

	//Layer
	MyLTDC->L1CR.LEN = 1;
	MyLTDC->L1WHPCR.val = lay1_xstart+(lay1_xend<<16); /*cannot use bit-field*/
	MyLTDC->L1WVPCR.val = lay1_ystart+(lay1_yend<<16); /*cannot use bit-field*/

	MyLTDC->L1PFCR.PF = 0x1; /*RGB888*/
	MyLTDC->L1DCCR.val=0x00000000;  /*cannot use bit-field*/
	MyLTDC->L1BFCR.BF2 = 0x5;
	MyLTDC->L1BFCR.BF1 = 0x4;
	MyLTDC->L1CACR.CONSTA = 255;
	MyLTDC->L1CFBAR.val = 0x90000000;
	MyLTDC->L1CFBLR.val = (image_bytes+7)+(screen_bytes<<16);  /*cannot use bit-field*/
	MyLTDC->L1CFBLNR.CFBLNBR = ysize;
	MyLTDC->SRCR.IMR = 0x1;
}


void set_layer1(uint32_t frame_addr, int xpos, int ypos, int xsize, int ysize)
{
	int avbp=vsw+vbp-1;
	int ahbp=hsw+hbp-1;

	int lay1_xstart=ahbp+1+xpos;
	int lay1_xend=ahbp+xpos+xsize;
	int lay1_ystart=avbp+1+ypos;
	int lay1_yend=avbp+ypos+ysize;
	int screen_bytes=hact*bytes;
	int image_bytes=xsize*bytes;

	//Layer
	MyLTDC->L1CR.LEN = 1;
	MyLTDC->L1WHPCR.val = lay1_xstart+(lay1_xend<<16); /*cannot use bit-field*/
	MyLTDC->L1WVPCR.val = lay1_ystart+(lay1_yend<<16); /*cannot use bit-field*/

	MyLTDC->L1PFCR.PF = 0x1; /*RGB888*/
	MyLTDC->L1DCCR.val=0x00000000;  /*cannot use bit-field*/
	MyLTDC->L1BFCR.BF2 = 0x5;
	MyLTDC->L1BFCR.BF1 = 0x4;
	MyLTDC->L1CACR.CONSTA = 128;
	MyLTDC->L1CFBAR.val = frame_addr;
	MyLTDC->L1CFBLR.val = (image_bytes+7)+(screen_bytes<<16);  /*cannot use bit-field*/
	MyLTDC->L1CFBLNR.CFBLNBR = ysize;
	MyLTDC->SRCR.IMR = 0x1;
}

void set_layer2(uint32_t frame_addr, int xpos, int ypos, int xsize, int ysize)
{
	int avbp=vsw+vbp-1;
	int ahbp=hsw+hbp-1;

	int lay2_xstart=ahbp+1+xpos;
	int lay2_xend=ahbp+xpos+xsize;
	int lay2_ystart=avbp+1+ypos;
	int lay2_yend=avbp+ypos+ysize;
	int screen_bytes=hact*bytes;
	int image_bytes=xsize*bytes;

	//Layer
	MyLTDC->L2CR.LEN = 1;
	MyLTDC->L2WHPCR.val = lay2_xstart+(lay2_xend<<16); /*cannot use bit-field*/
	MyLTDC->L2WVPCR.val = lay2_ystart+(lay2_yend<<16); /*cannot use bit-field*/

	MyLTDC->L2PFCR.PF = 0x1; /*RGB888*/
	MyLTDC->L2DCCR.val=0x00000000;   /*cannot use bit-field*/
	MyLTDC->L2BFCR.BF2 = 0x5;
	MyLTDC->L2BFCR.BF1 = 0x4;
	MyLTDC->L2CACR.CONSTA = 128;
	MyLTDC->L2CFBAR.val = frame_addr;
	MyLTDC->L2CFBLR.val = (image_bytes+7)+(screen_bytes<<16);  /*cannot use bit-field*/
	MyLTDC->L2CFBLNR.CFBLNBR = ysize;
	MyLTDC->SRCR.IMR = 0x1;
}

void test_two_layers()
{
	set_layer1(0x90400000,0,0,240,240);
	delay_ms(1000);
	set_layer2(0x90500000,120,120,240,240);
	delay_ms(1000);
}

