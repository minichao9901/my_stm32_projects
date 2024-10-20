#ifndef __W25Q64_H
#define __W25Q64_H
#include"stm32f1_init.h"

//指令表
#define W25X_WriteEnable		0x06 
#define W25X_WriteDisable		0x04 
#define W25X_ReadStatusReg1		0x05 
#define W25X_ReadStatusReg2		0x35 
#define W25X_ReadStatusReg3		0x15 
#define W25X_WriteStatusReg1    0x01 
#define W25X_WriteStatusReg2    0x31 
#define W25X_WriteStatusReg3    0x11 
#define W25X_ReadData			0x03 
#define W25X_FastReadData		0x0B 
#define W25X_FastReadDual		0x3B 
#define W25X_PageProgram		0x02 
#define W25X_BlockErase			0xD8 
#define W25X_SectorErase		0x20 
#define W25X_ChipErase			0xC7 
#define W25X_PowerDown			0xB9 
#define W25X_ReleasePowerDown	0xAB 
#define W25X_DeviceID			0xAB 
#define W25X_ManufactDeviceID	0x90 
#define W25X_JedecDeviceID		0x9F 
#define W25X_Enable4ByteAddr    0xB7
#define W25X_Exit4ByteAddr      0xE9

void W25QXX_Write_Page(unsigned char* pBuffer,unsigned int WriteAddr,unsigned short NumByteToWrite);
unsigned int spi_flash_read_ID(void);
void W25QXX_Wait_Busy(void);
unsigned char W25QXX_ReadSR(unsigned char regno);
void W25QXX_Read(unsigned char* pBuffer,unsigned int ReadAddr,unsigned short NumByteToRead);
void W25QXX_Erase_Sector(unsigned int Dst_Addr);
void W25QXX_Write_Disable(void);
void W25QXX_Write_Enable(void);
void W25QXX_Write_buf(unsigned char*buf,unsigned int addr,unsigned int num);
unsigned char W25QXX_ReadSR(unsigned char regno);
#endif
