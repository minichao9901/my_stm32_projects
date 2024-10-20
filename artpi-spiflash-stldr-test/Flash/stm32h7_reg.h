#include <stdint.h>

//note: union bit-field is lsb-->msb

/*****************************************************************************************/
// RCC
/*****************************************************************************************/
typedef struct
{
	__IO union {
		struct {
            uint32_t RESERVED3:14;
            uint32_t D1CKRDY:1;
            uint32_t D2CKRDY:1;
            uint32_t HSEON:1;
            uint32_t HSERDY:1;
            uint32_t RESERVED2:6;
            uint32_t PLL1ON:1;
            uint32_t PLL1RDY:1;
            uint32_t PLL2ON:1;
            uint32_t PLL2RDY:1;
            uint32_t PLL3ON:1;
            uint32_t PLL3RDY:1;
            uint32_t RESERVED1:2;
        };
        uint32_t val;
    } CR;
 //__IO uint32_t CR;             /*!< RCC clock control register,                                              Address offset: 0x00  */

 __IO uint32_t HSICFGR;        /*!< HSI Clock Calibration Register,                                          Address offset: 0x04  */
 __IO uint32_t CRRCR;          /*!< Clock Recovery RC  Register,                                             Address offset: 0x08  */
 __IO uint32_t CSICFGR;        /*!< CSI Clock Calibration Register,                                          Address offset: 0x0C  */

 __IO union {
	 struct {
         uint32_t SW:3;
         uint32_t SWS:3;
         uint32_t RESERVED1:26;
     };
     uint32_t val;
 } CFGR;
 //__IO uint32_t CFGR;           /*!< RCC clock configuration register,                                        Address offset: 0x10  */

 uint32_t     RESERVED1;       /*!< Reserved,                                                                Address offset: 0x14  */

 __IO union {
	 struct {
         uint32_t HPRE:4;
         uint32_t D1PPRE:3;
         uint32_t RESERVED2:1;
         uint32_t D1CPRE:4;
         uint32_t RESERVED1:20;
     };
     uint32_t val;
 } D1CFGR;
 //__IO uint32_t D1CFGR;         /*!< RCC Domain 1 configuration register,                                     Address offset: 0x18  */

 __IO union {
	 struct {
         uint32_t RESERVED3:4;
         uint32_t D2PPRE1:3;
         uint32_t RESERVED2:1;
         uint32_t D2PPRE2:3;
         uint32_t RESERVED1:21;
     };
     uint32_t val;
 } D2CFGR;
 //__IO uint32_t D2CFGR;         /*!< RCC Domain 2 configuration register,                                     Address offset: 0x1C  */

 __IO union {
	 struct {
         uint32_t RESERVED2:4;
         uint32_t D3PPRE:3;
         uint32_t RESERVED1:25;
     };
     uint32_t val;
 } D3CFGR;
 //__IO uint32_t D3CFGR;         /*!< RCC Domain 3 configuration register,                                     Address offset: 0x20  */

 uint32_t     RESERVED2;       /*!< Reserved,                                                                Address offset: 0x24  */

 __IO union {
	 struct {
         uint32_t PLLSRC:2;
         uint32_t RESERVED4:2;
         uint32_t DIVM1:6;
         uint32_t RESERVED3:2;
         uint32_t DIVM2:6;
         uint32_t RESERVED2:2;
         uint32_t DIVM3:6;
         uint32_t RESERVED1:6;
     };
     uint32_t val;
 } PLLCKSELR;
 //__IO uint32_t PLLCKSELR;      /*!< RCC PLLs Clock Source Selection Register,                                Address offset: 0x28  */

 __IO union {
	 struct {
         uint32_t PLL1FRACEN:1;
         uint32_t PLL1VCOSEL:1;
         uint32_t PLL1RGE:2;
         uint32_t PLL2FRACEN:1;
         uint32_t PLL2VCOSEL:1;
         uint32_t PLL2RGE:2;
         uint32_t PLL3FRACEN:1;
         uint32_t PLL3VCOSEL:1;
         uint32_t PLL3RGE:2;
         uint32_t RESERVED1:20;
     };
     uint32_t val;
 } PLLCFGR;
 //__IO uint32_t PLLCFGR;        /*!< RCC PLLs  Configuration Register,                                        Address offset: 0x2C  */

 __IO union {
	 struct {
         uint32_t DIVN1:9;
         uint32_t DIVP1:7;
         uint32_t DIVQ1:7;
         uint32_t RESERVED2:1;
         uint32_t DIVR1:7;
         uint32_t RESERVED1:1;
     };
     uint32_t val;
 } PLL1DIVR;
 //__IO uint32_t PLL1DIVR;       /*!< RCC PLL1 Dividers Configuration Register,                                Address offset: 0x30  */

 __IO uint32_t PLL1FRACR;      /*!< RCC PLL1 Fractional Divider Configuration Register,                      Address offset: 0x34  */

 __IO union {
	 struct {
         uint32_t DIVN2:9;
         uint32_t DIVP2:7;
         uint32_t DIVQ2:7;
         uint32_t RESERVED2:1;
         uint32_t DIVR2:7;
         uint32_t RESERVED1:1;
     };
     uint32_t val;
 } PLL2DIVR;
 //__IO uint32_t PLL2DIVR;       /*!< RCC PLL2 Dividers Configuration Register,                                Address offset: 0x38  */

 __IO uint32_t PLL2FRACR;      /*!< RCC PLL2 Fractional Divider Configuration Register,                      Address offset: 0x3C  */

 __IO union {
	 struct {
         uint32_t DIVN3:9;
         uint32_t DIVP3:7;
         uint32_t DIVQ3:7;
         uint32_t RESERVED2:1;
         uint32_t DIVR3:7;
         uint32_t RESERVED1:1;
     };
     uint32_t val;
 } PLL3DIVR;
 //__IO uint32_t PLL3DIVR;       /*!< RCC PLL3 Dividers Configuration Register,                                Address offset: 0x40  */

 __IO uint32_t PLL3FRACR;      /*!< RCC PLL3 Fractional Divider Configuration Register,                      Address offset: 0x44  */
 uint32_t      RESERVED3;      /*!< Reserved,                                                                Address offset: 0x48  */
 __IO uint32_t  D1CCIPR;       /*!< RCC Domain 1 Kernel Clock Configuration Register                         Address offset: 0x4C  */
 __IO uint32_t  D2CCIP1R;      /*!< RCC Domain 2 Kernel Clock Configuration Register                         Address offset: 0x50  */
 __IO uint32_t  D2CCIP2R;      /*!< RCC Domain 2 Kernel Clock Configuration Register                         Address offset: 0x54  */
 __IO uint32_t  D3CCIPR;       /*!< RCC Domain 3 Kernel Clock Configuration Register                         Address offset: 0x58  */
 uint32_t      RESERVED4;      /*!< Reserved,                                                                Address offset: 0x5C  */
 __IO uint32_t  CIER;          /*!< RCC Clock Source Interrupt Enable Register                               Address offset: 0x60  */
 __IO uint32_t  CIFR;          /*!< RCC Clock Source Interrupt Flag Register                                 Address offset: 0x64  */
 __IO uint32_t  CICR;          /*!< RCC Clock Source Interrupt Clear Register                                Address offset: 0x68  */
 uint32_t     RESERVED5;       /*!< Reserved,                                                                Address offset: 0x6C  */
 __IO uint32_t  BDCR;          /*!< RCC Vswitch Backup Domain Control Register,                              Address offset: 0x70  */
 __IO uint32_t  CSR;           /*!< RCC clock control & status register,                                     Address offset: 0x74  */
 uint32_t     RESERVED6;       /*!< Reserved,                                                                Address offset: 0x78  */

 __IO union {
	 struct {
         uint32_t RESERVED2:14;
         uint32_t QSPIRST:1;
         uint32_t RESERVED1:17;
     };
     uint32_t val;
 } AHB3RSTR;
 //__IO uint32_t AHB3RSTR;       /*!< RCC AHB3 peripheral reset register,                                      Address offset: 0x7C  */

 __IO uint32_t AHB1RSTR;       /*!< RCC AHB1 peripheral reset register,                                      Address offset: 0x80  */
 __IO uint32_t AHB2RSTR;       /*!< RCC AHB2 peripheral reset register,                                      Address offset: 0x84  */
 __IO uint32_t AHB4RSTR;       /*!< RCC AHB4 peripheral reset register,                                      Address offset: 0x88  */
 __IO uint32_t APB3RSTR;       /*!< RCC APB3 peripheral reset register,                                      Address offset: 0x8C  */
 __IO uint32_t APB1LRSTR;      /*!< RCC APB1 peripheral reset Low Word register,                             Address offset: 0x90  */
 __IO uint32_t APB1HRSTR;      /*!< RCC APB1 peripheral reset High Word register,                            Address offset: 0x94  */
 __IO uint32_t APB2RSTR;       /*!< RCC APB2 peripheral reset register,                                      Address offset: 0x98  */
 __IO uint32_t APB4RSTR;       /*!< RCC APB4 peripheral reset register,                                      Address offset: 0x9C  */
 __IO uint32_t GCR;            /*!< RCC RCC Global Control  Register,                                        Address offset: 0xA0  */
 uint32_t     RESERVED8;       /*!< Reserved,                                                                Address offset: 0xA4  */
 __IO uint32_t D3AMR;          /*!< RCC Domain 3 Autonomous Mode Register,                                   Address offset: 0xA8  */
 uint32_t     RESERVED11[9];    /*!< Reserved, 0xAC-0xCC                                                      Address offset: 0xAC  */
 __IO uint32_t RSR;            /*!< RCC Reset status register,                                               Address offset: 0xD0  */

 __IO union {
	 struct {
         uint32_t RESERVED2:12;
         uint32_t FMCEN:1;
         uint32_t RESERVED1:1;
         uint32_t QSPIEN:1;
         uint32_t RESERVED0:17;
     };
     uint32_t val;
 } AHB3ENR;
 //__IO uint32_t AHB3ENR;        /*!< RCC AHB3 peripheral clock  register,                                     Address offset: 0xD4  */

 __IO uint32_t AHB1ENR;        /*!< RCC AHB1 peripheral clock  register,                                     Address offset: 0xD8  */
 __IO uint32_t AHB2ENR;        /*!< RCC AHB2 peripheral clock  register,                                     Address offset: 0xDC  */

 __IO union {
	 struct {
         uint32_t GPIOAEN:1;
         uint32_t GPIOBEN:1;
         uint32_t GPIOCEN:1;
         uint32_t GPIODEN:1;
         uint32_t GPIOEEN:1;
         uint32_t GPIOFEN:1;
         uint32_t GPIOGEN:1;
         uint32_t GPIOHEN:1;
         uint32_t GPIOIEN:1;
         uint32_t GPIOJEN:1;
         uint32_t GPIOKEN:1;
         uint32_t RESERVED1:21;
     };
     uint32_t val;
 } AHB4ENR;
 //__IO uint32_t AHB4ENR;        /*!< RCC AHB4 peripheral clock  register,                                     Address offset: 0xE0  */

 __IO union {
	 struct {
         uint32_t RESERVED1:3;
         uint32_t LTDCEN:1;
         uint32_t RESERVED2:28;
     };
     uint32_t val;
 } APB3ENR;
 //__IO uint32_t APB3ENR;        /*!< RCC APB3 peripheral clock  register,                                     Address offset: 0xE4  */

 __IO union {
	 struct {
         uint32_t RESERVED2:19;
         uint32_t UART4EN:1;
         uint32_t RESERVED1:12;
     };
     uint32_t val;
 } APB1LENR;
 //__IO uint32_t APB1LENR;       /*!< RCC APB1 peripheral clock  Low Word register,                            Address offset: 0xE8  */

 __IO uint32_t APB1HENR;       /*!< RCC APB1 peripheral clock  High Word register,                           Address offset: 0xEC  */
 __IO uint32_t APB2ENR;        /*!< RCC APB2 peripheral clock  register,                                     Address offset: 0xF0  */

 __IO union {
	 struct {
         uint32_t RESERVED2:1;
         uint32_t SYSCFGEN:1;
         uint32_t RESERVED1:30;
     };
     uint32_t val;
 } APB4ENR;
 //__IO uint32_t APB4ENR;        /*!< RCC APB4 peripheral clock  register,                                     Address offset: 0xF4  */

 uint32_t      RESERVED12;      /*!< Reserved,                                                                Address offset: 0xF8  */
 __IO uint32_t AHB3LPENR;      /*!< RCC AHB3 peripheral sleep clock  register,                               Address offset: 0xFC  */
 __IO uint32_t AHB1LPENR;      /*!< RCC AHB1 peripheral sleep clock  register,                               Address offset: 0x100 */
 __IO uint32_t AHB2LPENR;      /*!< RCC AHB2 peripheral sleep clock  register,                               Address offset: 0x104 */
 __IO uint32_t AHB4LPENR;      /*!< RCC AHB4 peripheral sleep clock  register,                               Address offset: 0x108 */
 __IO uint32_t APB3LPENR;      /*!< RCC APB3 peripheral sleep clock  register,                               Address offset: 0x10C */
 __IO uint32_t APB1LLPENR;     /*!< RCC APB1 peripheral sleep clock  Low Word register,                      Address offset: 0x110 */
 __IO uint32_t APB1HLPENR;     /*!< RCC APB1 peripheral sleep clock  High Word register,                     Address offset: 0x114 */
 __IO uint32_t APB2LPENR;      /*!< RCC APB2 peripheral sleep clock  register,                               Address offset: 0x118 */
 __IO uint32_t APB4LPENR;      /*!< RCC APB4 peripheral sleep clock  register,                               Address offset: 0x11C */
 uint32_t     RESERVED13[4];   /*!< Reserved, 0x120-0x12C                                                    Address offset: 0x120 */

} MyRCC_TypeDef;

#define MyRCC_BASE 0x58024400
#define MyRCC ((volatile MyRCC_TypeDef *)(MyRCC_BASE))



/*****************************************************************************************/
// FLASH
/*****************************************************************************************/
typedef struct
{
	__IO union {
		 struct {
	         uint32_t LATENCY:3;
	         uint32_t RESERVED1:29;
	     };
	     uint32_t val;
	 } ACR;
  //__IO uint32_t ACR;             /*!< FLASH access control register,                            Address offset: 0x00  */

  __IO uint32_t KEYR1;           /*!< Flash Key Register for bank1,                             Address offset: 0x04  */
  __IO uint32_t OPTKEYR;         /*!< Flash Option Key Register,                                Address offset: 0x08  */
  __IO uint32_t CR1;             /*!< Flash Control Register for bank1,                         Address offset: 0x0C  */
  __IO uint32_t SR1;             /*!< Flash Status Register for bank1,                          Address offset: 0x10  */
  __IO uint32_t CCR1;            /*!< Flash Control Register for bank1,                         Address offset: 0x14  */
  __IO uint32_t OPTCR;           /*!< Flash Option Control Register,                            Address offset: 0x18  */
  __IO uint32_t OPTSR_CUR;       /*!< Flash Option Status Current Register,                     Address offset: 0x1C  */
  __IO uint32_t OPTSR_PRG;       /*!< Flash Option Status to Program Register,                  Address offset: 0x20  */
  __IO uint32_t OPTCCR;          /*!< Flash Option Clear Control Register,                      Address offset: 0x24  */
  __IO uint32_t PRAR_CUR1;       /*!< Flash Current Protection Address Register for bank1,      Address offset: 0x28  */
  __IO uint32_t PRAR_PRG1;       /*!< Flash Protection Address to Program Register for bank1,   Address offset: 0x2C  */
  __IO uint32_t SCAR_CUR1;       /*!< Flash Current Secure Address Register for bank1,          Address offset: 0x30  */
  __IO uint32_t SCAR_PRG1;       /*!< Flash Secure Address to Program Register for bank1,       Address offset: 0x34  */
  __IO uint32_t WPSN_CUR1;       /*!< Flash Current Write Protection Register on bank1,         Address offset: 0x38  */
  __IO uint32_t WPSN_PRG1;       /*!< Flash Write Protection to Program Register on bank1,      Address offset: 0x3C  */
  __IO uint32_t BOOT_CUR;        /*!< Flash Current Boot Address for Pelican Core Register,     Address offset: 0x40  */
  __IO uint32_t BOOT_PRG;        /*!< Flash Boot Address to Program for Pelican Core Register,  Address offset: 0x44  */
  uint32_t      RESERVED0[2];    /*!< Reserved, 0x48 to 0x4C                                                          */
  __IO uint32_t CRCCR1;          /*!< Flash CRC Control register For Bank1 Register ,           Address offset: 0x50  */
  __IO uint32_t CRCSADD1;        /*!< Flash CRC Start Address Register for Bank1 ,              Address offset: 0x54  */
  __IO uint32_t CRCEADD1;        /*!< Flash CRC End Address Register for Bank1 ,                Address offset: 0x58  */
  __IO uint32_t CRCDATA;         /*!< Flash CRC Data Register for Bank1 ,                       Address offset: 0x5C  */
  __IO uint32_t ECC_FA1;         /*!< Flash ECC Fail Address For Bank1 Register ,               Address offset: 0x60  */
  uint32_t      RESERVED1[40];   /*!< Reserved, 0x64 to 0x100                                                         */
  __IO uint32_t KEYR2;           /*!< Flash Key Register for bank2,                             Address offset: 0x104 */
  uint32_t      RESERVED2;       /*!< Reserved, 0x108                                                                 */
  __IO uint32_t CR2;             /*!< Flash Control Register for bank2,                         Address offset: 0x10C */
  __IO uint32_t SR2;             /*!< Flash Status Register for bank2,                          Address offset: 0x110 */
  __IO uint32_t CCR2;            /*!< Flash Status Register for bank2,                          Address offset: 0x114 */
  uint32_t      RESERVED3[4];    /*!< Reserved, 0x118 to 0x124                                                        */
  __IO uint32_t PRAR_CUR2;       /*!< Flash Current Protection Address Register for bank2,      Address offset: 0x128 */
  __IO uint32_t PRAR_PRG2;       /*!< Flash Protection Address to Program Register for bank2,   Address offset: 0x12C */
  __IO uint32_t SCAR_CUR2;       /*!< Flash Current Secure Address Register for bank2,          Address offset: 0x130 */
  __IO uint32_t SCAR_PRG2;       /*!< Flash Secure Address Register for bank2,                  Address offset: 0x134 */
  __IO uint32_t WPSN_CUR2;       /*!< Flash Current Write Protection Register on bank2,         Address offset: 0x138 */
  __IO uint32_t WPSN_PRG2;       /*!< Flash Write Protection to Program Register on bank2,      Address offset: 0x13C */
  uint32_t      RESERVED4[4];    /*!< Reserved, 0x140 to 0x14C                                                        */
  __IO uint32_t CRCCR2;          /*!< Flash CRC Control register For Bank2 Register ,           Address offset: 0x150 */
  __IO uint32_t CRCSADD2;        /*!< Flash CRC Start Address Register for Bank2 ,              Address offset: 0x154 */
  __IO uint32_t CRCEADD2;        /*!< Flash CRC End Address Register for Bank2 ,                Address offset: 0x158 */
  __IO uint32_t CRCDATA2;        /*!< Flash CRC Data Register for Bank2 ,                       Address offset: 0x15C */
  __IO uint32_t ECC_FA2;         /*!< Flash ECC Fail Address For Bank2 Register ,               Address offset: 0x160 */
} MyFLASH_TypeDef;

#define MyFLASH_BASE 0x52002000
#define MyFLASH ((volatile MyFLASH_TypeDef *)(MyFLASH_BASE))


/*****************************************************************************************/
// GPIO
/*****************************************************************************************/
typedef struct
{
	__IO union {
		 struct {
	         uint32_t MODE0:2;
	         uint32_t MODE1:2;
	         uint32_t MODE2:2;
	         uint32_t MODE3:2;
	         uint32_t MODE4:2;
	         uint32_t MODE5:2;
	         uint32_t MODE6:2;
	         uint32_t MODE7:2;
	         uint32_t MODE8:2;
	         uint32_t MODE9:2;
	         uint32_t MODE10:2;
	         uint32_t MODE11:2;
	         uint32_t MODE12:2;
	         uint32_t MODE13:2;
	         uint32_t MODE14:2;
	         uint32_t MODE15:2;
	     } ;
	     uint32_t val;
	 } MODER;
	__IO union {
		 struct {
	         uint32_t OT0:1;
	         uint32_t OT1:1;
	         uint32_t OT2:1;
	         uint32_t OT3:1;
	         uint32_t OT4:1;
	         uint32_t OT5:1;
	         uint32_t OT6:1;
	         uint32_t OT7:1;
	         uint32_t OT8:1;
	         uint32_t OT9:1;
	         uint32_t OT10:1;
	         uint32_t OT11:1;
	         uint32_t OT12:1;
	         uint32_t OT13:1;
	         uint32_t OT14:1;
	         uint32_t OT15:1;
	         uint32_t RESERVED1:16;
	     };
	     uint32_t val;
	 } OTYPER;
	__IO union {
		 struct {
	         uint32_t OSPEEDR0:2;
	         uint32_t OSPEEDR1:2;
	         uint32_t OSPEEDR2:2;
	         uint32_t OSPEEDR3:2;
	         uint32_t OSPEEDR4:2;
	         uint32_t OSPEEDR5:2;
	         uint32_t OSPEEDR6:2;
	         uint32_t OSPEEDR7:2;
	         uint32_t OSPEEDR8:2;
	         uint32_t OSPEEDR9:2;
	         uint32_t OSPEEDR10:2;
	         uint32_t OSPEEDR11:2;
	         uint32_t OSPEEDR12:2;
	         uint32_t OSPEEDR13:2;
	         uint32_t OSPEEDR14:2;
	         uint32_t OSPEEDR15:2;
	     };
	     uint32_t val;
	 } OSPEEDR;
	__IO union {
		 struct {
	         uint32_t PUPDR0:2;
	         uint32_t PUPDR1:2;
	         uint32_t PUPDR2:2;
	         uint32_t PUPDR3:2;
	         uint32_t PUPDR4:2;
	         uint32_t PUPDR5:2;
	         uint32_t PUPDR6:2;
	         uint32_t PUPDR7:2;
	         uint32_t PUPDR8:2;
	         uint32_t PUPDR9:2;
	         uint32_t PUPDR10:2;
	         uint32_t PUPDR11:2;
	         uint32_t PUPDR12:2;
	         uint32_t PUPDR13:2;
	         uint32_t PUPDR14:2;
	         uint32_t PUPDR15:2;
	     };
	     uint32_t val;
	 } PUPDR;
	__IO union {
		 struct {
	         uint32_t IDR0:1;
	         uint32_t IDR1:1;
	         uint32_t IDR2:1;
	         uint32_t IDR3:1;
	         uint32_t IDR4:1;
	         uint32_t IDR5:1;
	         uint32_t IDR6:1;
	         uint32_t IDR7:1;
	         uint32_t IDR8:1;
	         uint32_t IDR9:1;
	         uint32_t IDR10:1;
	         uint32_t IDR11:1;
	         uint32_t IDR12:1;
	         uint32_t IDR13:1;
	         uint32_t IDR14:1;
	         uint32_t IDR15:1;
	         uint32_t RESERVED1:16;
	     };
	     uint32_t val;
	 } IDR;
	__IO union {
		 struct {
	         uint32_t ODR0:1;
	         uint32_t ODR1:1;
	         uint32_t ODR2:1;
	         uint32_t ODR3:1;
	         uint32_t ODR4:1;
	         uint32_t ODR5:1;
	         uint32_t ODR6:1;
	         uint32_t ODR7:1;
	         uint32_t ODR8:1;
	         uint32_t ODR9:1;
	         uint32_t ODR10:1;
	         uint32_t ODR11:1;
	         uint32_t ODR12:1;
	         uint32_t ODR13:1;
	         uint32_t ODR14:1;
	         uint32_t ODR15:1;
	         uint32_t RESERVED1:16;
	     };
	     uint32_t val;
	 } ODR;
	__IO union {
		 struct {
	         uint32_t BS0:1;
	         uint32_t BS1:1;
	         uint32_t BS2:1;
	         uint32_t BS3:1;
	         uint32_t BS4:1;
	         uint32_t BS5:1;
	         uint32_t BS6:1;
	         uint32_t BS7:1;
	         uint32_t BS8:1;
	         uint32_t BS9:1;
	         uint32_t BS10:1;
	         uint32_t BS11:1;
	         uint32_t BS12:1;
	         uint32_t BS13:1;
	         uint32_t BS14:1;
	         uint32_t BS15:1;
	         uint32_t BR0:1;
	         uint32_t BR1:1;
	         uint32_t BR2:1;
	         uint32_t BR3:1;
	         uint32_t BR4:1;
	         uint32_t BR5:1;
	         uint32_t BR6:1;
	         uint32_t BR7:1;
	         uint32_t BR8:1;
	         uint32_t BR9:1;
	         uint32_t BR10:1;
	         uint32_t BR11:1;
	         uint32_t BR12:1;
	         uint32_t BR13:1;
	         uint32_t BR14:1;
	         uint32_t BR15:1;
	     };
	     uint32_t val;
	 } BSRR;
	__IO union {
		 struct {
	         uint32_t LCK0:1;
	         uint32_t LCK1:1;
	         uint32_t LCK2:1;
	         uint32_t LCK3:1;
	         uint32_t LCK4:1;
	         uint32_t LCK5:1;
	         uint32_t LCK6:1;
	         uint32_t LCK7:1;
	         uint32_t LCK8:1;
	         uint32_t LCK9:1;
	         uint32_t LCK10:1;
	         uint32_t LCK11:1;
	         uint32_t LCK12:1;
	         uint32_t LCK13:1;
	         uint32_t LCK14:1;
	         uint32_t LCK15:1;
	         uint32_t LCKK:1;
	         uint32_t RESERVED1:15;
	     };
	     uint32_t val;
	 } LCKR;
	__IO union {
		 struct {
	         uint32_t AFR0:4;
	         uint32_t AFR1:4;
	         uint32_t AFR2:4;
	         uint32_t AFR3:4;
	         uint32_t AFR4:4;
	         uint32_t AFR5:4;
	         uint32_t AFR6:4;
	         uint32_t AFR7:4;
	     };
	     uint32_t val;
	 } AFRL;
	__IO union {
		 struct {
	         uint32_t AFR8:4;
	         uint32_t AFR9:4;
	         uint32_t AFR10:4;
	         uint32_t AFR11:4;
	         uint32_t AFR12:4;
	         uint32_t AFR13:4;
	         uint32_t AFR14:4;
	         uint32_t AFR15:4;
	     };
	     uint32_t val;
	 } AFRH;
  //__IO uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
  //__IO uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
  //__IO uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
  //__IO uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
  //__IO uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
  //__IO uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
  //__IO uint32_t BSRR;     /*!< GPIO port bit set/reset,               Address offset: 0x18      */
  //__IO uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
  //__IO uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} MyGPIO_TypeDef;

#define MyGPIO_BASE 0x58020000
#define MyGPIOA ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE))
#define MyGPIOB ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x0400))
#define MyGPIOC ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x0800))
#define MyGPIOD ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x0c00))
#define MyGPIOE ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x1000))
#define MyGPIOF ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x1400))
#define MyGPIOG ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x1800))
#define MyGPIOH ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x1c00))
#define MyGPIOI ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x2000))
#define MyGPIOJ ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x2400))
#define MyGPIOK ((volatile MyGPIO_TypeDef *)(MyGPIO_BASE+0x2800))




/*****************************************************************************************/
// USART
/*****************************************************************************************/
typedef struct
{
	__IO union {
		 struct {
	         uint32_t UE:1;
	         uint32_t UESM:1;
	         uint32_t RE:1;
	         uint32_t TE:1;
	         uint32_t IDLEIE:1;
	         uint32_t RXNEIE:1;
	         uint32_t TCIE:1;
	         uint32_t TXEIE:1;
	         uint32_t PEIE:1;
	         uint32_t RESERVED1:20;
	         uint32_t FIFOEN:1;
	         uint32_t TXFEIE:1;
	         uint32_t RXFFIE:1;
	     };
	     uint32_t val;
	 } CR1;
  //__IO uint32_t CR1;    /*!< USART Control register 1,                 Address offset: 0x00 */
  __IO uint32_t CR2;    /*!< USART Control register 2,                 Address offset: 0x04 */

	__IO union {
		 struct {
	         uint32_t RESERVED1:23;
	         uint32_t TXFTIE:1;
	         uint32_t RESERVED2:1;
	         uint32_t RXFTCFG:3;
	         uint32_t RXFTIE:1;
	         uint32_t TXFTCFG:3;
	     };
	     uint32_t val;
	 } CR3;
  //__IO uint32_t CR3;    /*!< USART Control register 3,                 Address offset: 0x08 */

	__IO union {
		 struct {
	         uint32_t BRR:16;
	         uint32_t RESERVED1:16;
	     };
	     uint32_t val;
	 } BRR;
  //__IO uint32_t BRR;    /*!< USART Baud rate register,                 Address offset: 0x0C */

  __IO uint32_t GTPR;   /*!< USART Guard time and prescaler register,  Address offset: 0x10 */
  __IO uint32_t RTOR;   /*!< USART Receiver Time Out register,         Address offset: 0x14 */
  __IO uint32_t RQR;    /*!< USART Request register,                   Address offset: 0x18 */

	__IO union {
		 struct {
	         uint32_t RESERVED1:4;
	         uint32_t IDLE:1;
	         uint32_t RXNE:1;
	         uint32_t TC:1;
	         uint32_t TXE:1;
	         uint32_t RESERVED2:15;
	         uint32_t TXFE:1;
	         uint32_t RXFF:1;
	         uint32_t TCBGT:1;
	         uint32_t RXFT:1;
	         uint32_t TXFT:1;
	         uint32_t RESERVED3:4;
	     };
	     uint32_t val;
	 } ISR;
 //__IO uint32_t ISR;    /*!< USART Interrupt and status register,      Address offset: 0x1C */

  __IO uint32_t ICR;    /*!< USART Interrupt flag Clear register,      Address offset: 0x20 */
  __IO uint32_t RDR;    /*!< USART Receive Data register,              Address offset: 0x24 */
  __IO uint32_t TDR;    /*!< USART Transmit Data register,             Address offset: 0x28 */
  __IO uint32_t PRESC;  /*!< USART clock Prescaler register,           Address offset: 0x2C */
} MyUSART_TypeDef;

#define MyUART4_BASE 0x40004c00
#define MyUART4 ((volatile MyUSART_TypeDef *)(MyUART4_BASE))



/*****************************************************************************************/
// QUADSPI
/*****************************************************************************************/
typedef struct
{
	__IO union {
		 struct {
	         uint32_t EN:1;
	         uint32_t ABORT:1;
	         uint32_t RESERVED1:1;
	         uint32_t TCEN:1;
	         uint32_t SSHIFT:1;
	         uint32_t RESERVED2:1;
	         uint32_t DFM:1;
	         uint32_t FSEL:1;
	         uint32_t FTHRES:5;
	         uint32_t RESERVED3:3;
	         uint32_t TEIE:1;
	         uint32_t TCIE:1;
	         uint32_t FTIE:1;
	         uint32_t SMIE:1;
	         uint32_t TOIE:1;
	         uint32_t RESERVED4:1;
	         uint32_t APMS:1;
	         uint32_t PMM:1;
	         uint32_t PRESCALER:8;
	     };
	     uint32_t val;
	 } CR;
	__IO union {
		 struct {
	         uint32_t CKMODE:1;
	         uint32_t RESERVED1:7;
	         uint32_t CSHT:3;
	         uint32_t RESERVED2:5;
	         uint32_t FSIZE:5;
	         uint32_t RESERVED3:11;
	     };
	     uint32_t val;
	 } DCR;
	__IO union {
		 struct {
	         uint32_t TEF:1;
	         uint32_t TCF:1;
	         uint32_t FTF:1;
	         uint32_t SMF:1;
	         uint32_t TOF:1;
	         uint32_t BUSY:1;
	         uint32_t RESERVED1:2;
	         uint32_t FLEVEL:7;
	         uint32_t RESERVED2:17;
	     };
	     uint32_t val;
	 } SR;
	__IO union {
		 struct {
	         uint32_t CTEF:1;
	         uint32_t CTCF:1;
	         uint32_t RESERVED1:1;
	         uint32_t CSMF:1;
	         uint32_t CTOF:1;
	         uint32_t RESERVED2:27;
	     };
	     uint32_t val;
	 } FCR;
	__IO uint32_t DLR;      /*!< QUADSPI Data Length register,                       Address offset: 0x10 */

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
	 } CCR;
	__IO uint32_t AR;       /*!< QUADSPI Address register,                           Address offset: 0x18 */
	__IO uint32_t ABR;      /*!< QUADSPI Alternate Bytes register,                   Address offset: 0x1C */

	__IO union {
		 struct {
	         uint32_t byte0:8;
	         uint32_t byte1:8;
	         uint32_t byte2:8;
	         uint32_t byte3:8;
	     };
		 struct {
	         uint32_t lb:16;
	         uint32_t hb:16;
	     };
	     uint32_t val;
	 } DR;
	__IO uint32_t PSMKR;    /*!< QUADSPI Polling Status Mask register,               Address offset: 0x24 */
	__IO uint32_t PSMAR;    /*!< QUADSPI Polling Status Match register,              Address offset: 0x28 */

	__IO union {
		 struct {
	         uint32_t INTERVAL:16;
	         uint32_t RESERVED1:16;
	     };
	     uint32_t val;
	 } PIR;
	__IO union {
		 struct {
	         uint32_t TIMEOUT:16;
	         uint32_t RESERVED1:16;
	     };
	     uint32_t val;
	 } LPTR;

//  __IO uint32_t CR;       /*!< QUADSPI Control register,                           Address offset: 0x00 */
//  __IO uint32_t DCR;      /*!< QUADSPI Device Configuration register,              Address offset: 0x04 */
//  __IO uint32_t SR;       /*!< QUADSPI Status register,                            Address offset: 0x08 */
//  __IO uint32_t FCR;      /*!< QUADSPI Flag Clear register,                        Address offset: 0x0C */
//  __IO uint32_t DLR;      /*!< QUADSPI Data Length register,                       Address offset: 0x10 */
//  __IO uint32_t CCR;      /*!< QUADSPI Communication Configuration register,       Address offset: 0x14 */
//  __IO uint32_t AR;       /*!< QUADSPI Address register,                           Address offset: 0x18 */
//  __IO uint32_t ABR;      /*!< QUADSPI Alternate Bytes register,                   Address offset: 0x1C */
//  __IO uint32_t DR;       /*!< QUADSPI Data register,                              Address offset: 0x20 */
//  __IO uint32_t PSMKR;    /*!< QUADSPI Polling Status Mask register,               Address offset: 0x24 */
//  __IO uint32_t PSMAR;    /*!< QUADSPI Polling Status Match register,              Address offset: 0x28 */
//  __IO uint32_t PIR;      /*!< QUADSPI Polling Interval register,                  Address offset: 0x2C */
//  __IO uint32_t LPTR;     /*!< QUADSPI Low Power Timeout register,                 Address offset: 0x30 */
} MyQUADSPI_TypeDef;

#define MyQSPI_BASE 0x52005000
#define MyQSPI ((volatile MyQUADSPI_TypeDef *)(MyQSPI_BASE))


/*****************************************************************************************/
// LTDC
/*****************************************************************************************/
typedef struct {
  uint32_t      RESERVED0[2];  /*!< Reserved, 0x00-0x04                                                       */
  
__IO union {
     struct {
         uint32_t VSH:11;
         uint32_t RESERVED1:5;
         uint32_t HSW:12;
         uint32_t RESERVED2:4;
     };
     uint32_t val;
 } SSCR;
 //__IO uint32_t SSCR;          /*!< < LTDC Synchronization Size Configuration Register,    Address offset: 0x08  */

  
__IO union {
     struct {
         uint32_t AVBP:11;
         uint32_t RESERVED1:5;
         uint32_t AHBP:12;
         uint32_t RESERVED2:4;
     };
     uint32_t val;
 } BPCR;
 //__IO uint32_t BPCR;          /*!< < LTDC Back Porch Configuration Register,              Address offset: 0x0C  */

  
__IO union {
     struct {
         uint32_t AAH:11;
         uint32_t RESERVED1:5;
         uint32_t AAV:12;
         uint32_t RESERVED2:4;
     };
     uint32_t val;
 } AWCR;
 //__IO uint32_t AWCR;          /*!< < LTDC Active Width Configuration Register,            Address offset: 0x10  */

  
__IO union {
     struct {
         uint32_t TOTALH:11;
         uint32_t RESERVED1:5;
         uint32_t TOTALW:12;
         uint32_t RESERVED2:4;
     };
     uint32_t val;
 } TWCR;
 //__IO uint32_t TWCR;          /*!< < LTDC Total Width Configuration Register,             Address offset: 0x14  */

  
__IO union {
     struct {
         uint32_t LTDCEN:1;
         uint32_t RESERVED1:3;
         uint32_t DBW:3;
         uint32_t RESERVED2:1;
         uint32_t DGW:3;
         uint32_t RESERVED3:1;
         uint32_t DRW:3;
         uint32_t RESERVED4:1;
         uint32_t DEN:1;
         uint32_t RESERVED5:11;
         uint32_t PCPOL:1;
         uint32_t DEPOL:1;
         uint32_t VSPOL:1;
         uint32_t HSPOL:1;
     };
     uint32_t val;
 } GCR;
 //__IO uint32_t GCR;          /*!< < LTDC Global Control Register,                        Address offset: 0x18  */

  uint32_t      RESERVED1[2];  /*!< Reserved, 0x1C-0x20                                                       */
  
__IO union {
     struct {
         uint32_t IMR:1;
         uint32_t VBR:1;
         uint32_t RESERVED2:30;
     };
     uint32_t val;
 } SRCR;
 //__IO uint32_t SRCR;          /*!< < LTDC Shadow Reload Configuration Register,           Address offset: 0x24  */

  uint32_t      RESERVED2[1];  /*!< Reserved, 0x28                                                            */
  
__IO union {
     struct {
         uint32_t BCBLUE:8;
         uint32_t BCGREEN:8;
         uint32_t BCRED:8;
         uint32_t RESERVED3:8;
     };
     uint32_t val;
 } BCCR;
 //__IO uint32_t BCCR;          /*!< < LTDC Background Color Configuration Register,        Address offset: 0x2C  */

  uint32_t      RESERVED3[1];  /*!< Reserved, 0x30                                                            */
  
__IO union {
     struct {
         uint32_t LIE:1;
         uint32_t FUIE:1;
         uint32_t TERRIE:1;
         uint32_t RRIE:1;
         uint32_t RESERVED1:28;
     };
     uint32_t val;
 } IER;
 //__IO uint32_t IER;          /*!< < LTDC Interrupt Enable Register,                      Address offset: 0x34  */

  
__IO union {
     struct {
         uint32_t LIF:1;
         uint32_t FUIF:1;
         uint32_t TERRIF:1;
         uint32_t RRIF:1;
         uint32_t RESERVED1:28;
     };
     uint32_t val;
 } ISR;
 //__IO uint32_t ISR;          /*!< < LTDC Interrupt Status Register,                      Address offset: 0x38  */

  
__IO union {
     struct {
         uint32_t CLIF:1;
         uint32_t CFUIF:1;
         uint32_t CTERRIF:1;
         uint32_t CRRIF:1;
         uint32_t RESERVED1:28;
     };
     uint32_t val;
 } ICR;
 //__IO uint32_t ICR;          /*!< < LTDC Interrupt Clear Register,                       Address offset: 0x3C  */

  
__IO union {
     struct {
         uint32_t RESERVED0:3;
         uint32_t BCRED:11;
         uint32_t RESERVED1:18;
     };
     uint32_t val;
 } LIPCR;
 //__IO uint32_t LIPCR;          /*!< < LTDC Line Interrupt Position Configuration Register, Address offset: 0x40  */

  
__IO union {
     struct {
         uint32_t CYPOS:16;
         uint32_t CSPOS:16;
     };
     uint32_t val;
 } CPSR;
 //__IO uint32_t CPSR;          /*!< < LTDC Current Position Status Register,               Address offset: 0x44  */

  
__IO union {
     struct {
         uint32_t VDES:1;
         uint32_t HDES:1;
         uint32_t VSYNCS:1;
         uint32_t HSYNCS:1;
         uint32_t RESERVED1:28;
     };
     uint32_t val;
 } CDSR;
 //__IO uint32_t CDSR;          /*!< < LTDC Current Display Status Register,                 Address offset: 0x48  */

} MyLTDC_TypeDef;

#define MyLTDC_BASE 0x50001000
#define MyLTDC ((volatile MyLTDC_TypeDef *)(MyLTDC_BASE))


typedef struct
{
  
__IO union {
     struct {
         uint32_t LEN:1;
         uint32_t COLKEN:1;
         uint32_t RESERVED1:2;
         uint32_t CLUTEN:1;
         uint32_t RESERVED2:27;
     };
     uint32_t val;
 } CR;
 //__IO uint32_t CR;          /*!< < LTDC Layerx Control Register                                  Address offset: 0x84  */

  
__IO union {
     struct {
         uint32_t WHSTPOS:12;
         uint32_t RESERVED1:4;
         uint32_t WHSPPOS:12;
         uint32_t RESERVED2:4;
     };
     uint32_t val;
 } WHPCR;
 //__IO uint32_t WHPCR;          /*!< < LTDC Layerx Window Horizontal Position Configuration Register Address offset: 0x88  */

  
__IO union {
     struct {
         uint32_t WVSTPOS:12;
         uint32_t RESERVED1:4;
         uint32_t WVSPPOS:12;
         uint32_t RESERVED2:4;
     };
     uint32_t val;
 } WVPCR;
 //__IO uint32_t WVPCR;          /*!< < LTDC Layerx Window Vertical Position Configuration Register   Address offset: 0x8C  */

  
__IO union {
     struct {
         uint32_t CKBLUE:8;
         uint32_t CKGREEN:8;
         uint32_t CKRED:8;
         uint32_t RESERVED1:8;
     };
     uint32_t val;
 } CKCR;
 //__IO uint32_t CKCR;          /*!< < LTDC Layerx Color Keying Configuration Register               Address offset: 0x90  */

  
__IO union {
     struct {
         uint32_t PF:3;
         uint32_t RESERVED1:29;
     };
     uint32_t val;
 } PFCR;
 //__IO uint32_t PFCR;          /*!< < LTDC Layerx Pixel Format Configuration Register               Address offset: 0x94  */

  
__IO union {
     struct {
         uint32_t CONSTA:8;
         uint32_t RESERVED1:24;
     };
     uint32_t val;
 } CACR;
 //__IO uint32_t CACR;          /*!< < LTDC Layerx Constant Alpha Configuration Register             Address offset: 0x98  */

  
__IO union {
     struct {
         uint32_t DCBLUE:8;
         uint32_t DCGREEN:8;
         uint32_t DCRED:8;
         uint32_t DCALPHA:8;
     };
     uint32_t val;
 } DCCR;
 //__IO uint32_t DCCR;          /*!< < LTDC Layerx Default Color Configuration Register              Address offset: 0x9C  */

  
__IO union {
     struct {
         uint32_t BF2:3;
         uint32_t RESERVED1:5;
         uint32_t BF1:3;
         uint32_t RESERVED2:21;
     };
     uint32_t val;
 } BFCR;
 //__IO uint32_t BFCR;          /*!< < LTDC Layerx Blending Factors Configuration Register           Address offset: 0xA0  */

  uint32_t      RESERVED0[2];  /*!< Reserved */
  
 __IO uint32_t CFBAR;          /*!< < LTDC Layerx Color Frame Buffer Address Register               Address offset: 0xAC  */

  
__IO union {
     struct {
         uint32_t CFBLL:13;
         uint32_t RESERVED1:3;
         uint32_t CFBP:13;
         uint32_t RESERVED2:3;
     };
     uint32_t val;
 } CFBLR;
 //__IO uint32_t CFBLR;          /*!< < LTDC Layerx Color Frame Buffer Length Register                Address offset: 0xB0  */

  
__IO union {
     struct {
         uint32_t CFBLNBR:11;
         uint32_t RESERVED1:21;
     };
     uint32_t val;
 } CFBLNR;
 //__IO uint32_t CFBLNR;          /*!< < LTDC Layerx ColorFrame Buffer Line Number Register            Address offset: 0xB4  */

  uint32_t      RESERVED1[3];  /*!< Reserved */
  
__IO union {
     struct {
         uint32_t BLUE:8;
         uint32_t GREEN:8;
         uint32_t RED:8;
         uint32_t CLUTADD:8;
     };
     uint32_t val;
 } CLUTWR;
 //__IO uint32_t CLUTWR;          /*!< < LTDC Layerx CLUT Write Register                               Address offset: 0x144  */


} MyLTDC_Layer_TypeDef;

#define MyLTDC_Layer1_BASE (0x50001000+0x0084)
#define MyLTDC_Layer2_BASE (0x50001000+0x0104)
#define MyLTDC_Layer1 ((volatile MyLTDC_Layer_TypeDef *)(MyLTDC_Layer1_BASE))
#define MyLTDC_Layer2 ((volatile MyLTDC_Layer_TypeDef *)(MyLTDC_Layer2_BASE))