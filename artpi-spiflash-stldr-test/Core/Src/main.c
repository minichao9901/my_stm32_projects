#include "main.h"
#include <string.h>
//#include "Loader_Src.h"


//extern void my_rcc_init();
//extern void my_led_init();
//extern void my_led_blink();
//extern void my_uart4_init();
//extern void my_uart4_send();
//extern void my_sdram_init();
//extern void ex_sdram_write_test_32b();
//extern void qspi_init();
//extern void qspi_mmap_mode_init();
//extern void qspi_mmap_test();
//extern void qspi_indirect_mode_test();
//extern void my_ltdc_init();
//extern void my_ltdc_init_fine();
//extern void test_two_layers();

uint8_t aTxBuffer[128]="hello world! hello world!\n";
uint8_t aRxBuffer[128];
int main(void)
{
 // my_rcc_init();
	extern void Init();
	extern int Write (uint32_t Address, uint32_t Size, uint8_t* buffer);
	extern int Read (uint32_t Address, uint32_t Size, uint8_t* buffer);
	Init();

	Write(0x70000000,128, aTxBuffer);
  Read(0x70000000, 128, aRxBuffer);
  while (1)
  {
  }
}

