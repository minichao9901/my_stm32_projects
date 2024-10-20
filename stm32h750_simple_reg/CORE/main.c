#include <string.h>

//static void MPU_Config(void);

extern void my_rcc_init();
extern void my_led_init();
extern void my_led_blink();
extern void my_uart4_init();
extern void my_uart4_send();
extern void my_sdram_init();
extern void ex_sdram_write_test_32b();
extern void qspi_init();
extern void qspi_mmap_mode_init();
extern void qspi_mmap_test();
extern void qspi_indirect_mode_test();
extern void my_ltdc_init();
extern void my_ltdc_init_fine();
extern void test_two_layers();
int main(void)
{
//  MPU_Config();

  my_rcc_init();
  my_led_init();
  my_uart4_init();
  my_sdram_init();
  qspi_mmap_mode_init();
  my_ltdc_init();
//  my_ltdc_init_fine();

//  my_led_blink();
//  my_uart4_send();
//  ex_sdram_write_test_32b();
//  qspi_mmap_test();
//  qspi_indirect_mode_test();
//  test_two_layers();
  while (1)
  {
	  printf("hello world!\n");
  }
}

//void MPU_Config(void)
//{
//  MPU_Region_InitTypeDef MPU_InitStruct = {0};
//
//  /* Disables the MPU */
//  HAL_MPU_Disable();
//
//  /** Initializes and configures the Region and the memory to be protected
//  */
//  MPU_InitStruct.Enable = MPU_REGION_ENABLE;
//  MPU_InitStruct.Number = MPU_REGION_NUMBER0;
//  MPU_InitStruct.BaseAddress = 0x0;
//  MPU_InitStruct.Size = MPU_REGION_SIZE_4GB;
//  MPU_InitStruct.SubRegionDisable = 0x87;
//  MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
//  MPU_InitStruct.AccessPermission = MPU_REGION_NO_ACCESS;
//  MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_DISABLE;
//  MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
//  MPU_InitStruct.IsCacheable = MPU_ACCESS_NOT_CACHEABLE;
//  MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
//
//  HAL_MPU_ConfigRegion(&MPU_InitStruct);
//
//  MPU_InitStruct.Enable = MPU_REGION_ENABLE;
//  MPU_InitStruct.Number = MPU_REGION_NUMBER1;
//  MPU_InitStruct.BaseAddress = 0xC0000000;
//  MPU_InitStruct.Size = MPU_REGION_SIZE_16MB;
//  MPU_InitStruct.SubRegionDisable = 0x0;
//  MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL1;
//  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
//  MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;
//  MPU_InitStruct.IsShareable = MPU_ACCESS_NOT_SHAREABLE;
//  MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
//  MPU_InitStruct.IsBufferable = MPU_ACCESS_BUFFERABLE;
//
//  HAL_MPU_ConfigRegion(&MPU_InitStruct);
//
//  MPU_InitStruct.Enable = MPU_REGION_ENABLE;
//  MPU_InitStruct.Number = MPU_REGION_NUMBER2;
//  MPU_InitStruct.BaseAddress = 0x90000000;
//  MPU_InitStruct.Size = MPU_REGION_SIZE_8MB;
//  MPU_InitStruct.SubRegionDisable = 0x0;
//  MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL1;
//  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
//  MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;
//  MPU_InitStruct.IsShareable = MPU_ACCESS_NOT_SHAREABLE;
//  MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
//  MPU_InitStruct.IsBufferable = MPU_ACCESS_BUFFERABLE;
//
//  HAL_MPU_ConfigRegion(&MPU_InitStruct);
//  /* Enables the MPU */
//  HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
//
//}
