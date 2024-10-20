# Toolchain configuration
CC := arm-none-eabi-gcc
ASM := arm-none-eabi-gcc  # Assembler is the same as the compiler for GCC
SIZE := arm-none-eabi-size
OBJDUMP := arm-none-eabi-objdump
OBJCOPY := arm-none-eabi-objcopy

# Project settings
TARGET := artpi_test2.stldr
MAPFILE := $(TARGET:.stldr=.map)

# Source files (include all relevant source files)
C_SRCS := $(wildcard Core/Src/*.c) \
          $(wildcard Drivers/STM32H7xx_HAL_Driver/Src/*.c) \
          $(wildcard Flash/*.c)


# Object files
C_OBJS := $(C_SRCS:%.c=%.o)

# Include directories
INC_DIRS := -ICore/Inc -IDrivers/STM32H7xx_HAL_Driver/Inc \
            -IDrivers/STM32H7xx_HAL_Driver/Inc/Legacy \
            -IDrivers/CMSIS/Device/ST/STM32H7xx/Include \
            -IDrivers/CMSIS/Include \
            -IFlash \

# Macro definitions
DEFINES := -DDEBUG -DUSE_HAL_DRIVER -DSTM32H750xx

# Compilation options
CFLAGS := -mcpu=cortex-m7 -std=gnu11 -g3 $(DEFINES) $(INC_DIRS) \
          -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage \
          -MMD -MP --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb

# Linker options
LDFLAGS := -mcpu=cortex-m7 -T"STM32_FLASH.ld" --specs=nosys.specs \
           -Wl,-Map=$(MAPFILE) -Wl,--gc-sections -static --specs=nano.specs \
           -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group

# Default target
all: $(TARGET)

# Linking target
$(TARGET): $(C_OBJS)
	$(CC) $^ $(LDFLAGS) -o $(TARGET)
	$(SIZE) $(TARGET)

# Linking target for BIN
%.bin: %.elf
	$(OBJCOPY) -O binary $< $@

# Dependency files
-include $(C_OBJS:.o=.d)

# Compile C source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Assemble assembly source files
#%.o: %.s
#	$(ASM) $(CFLAGS) -x assembler-with-cpp -c $< -o $@

# Clean target
clean:
	rm -f $(C_OBJS) $(TARGET) $(MAPFILE) artpi_reg_project.list
	find . -name "*.o"|xargs rm -rf
	find . -name "*.d"|xargs rm -rf
	find . -name "*.su"|xargs rm -rf

# List target
list: $(TARGET)
	$(OBJDUMP) -h -S $(TARGET) > $(TARGET:.stldr=.list)

.PHONY: all clean list


ext_load_path=/home/xujc/STMicroelectronics/STM32Cube/STM32CubeProgrammer/bin/ExternalLoader
stprog_path=/home/xujc/STMicroelectronics/STM32Cube/STM32CubeProgrammer/bin

1:
	readelf -a  $(TARGET) > log; \
	head -100 log; \
	cp $(TARGET) $(ext_load_path); \
	ls -la $(ext_load_path)/$(TARGET)
		
2:
	$(stprog_path)/STM32_Programmer_CLI -c port=SWD freq=4000 -r32 0x08000000 100

3:
	$(stprog_path)/STM32_Programmer_CLI -c port=SWD freq=4000 -el $(TARGET) -r32 0x70000000 400
