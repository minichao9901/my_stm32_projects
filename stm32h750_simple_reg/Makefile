# Toolchain configuration
CC := arm-none-eabi-gcc
ASM := arm-none-eabi-gcc  # Assembler is the same as the compiler for GCC
SIZE := arm-none-eabi-size
OBJDUMP := arm-none-eabi-objdump
OBJCOPY := arm-none-eabi-objcopy

# Project settings
TARGET := stm32h750_simple_reg.elf
BIN_TARGET := $(TARGET:.elf=.bin)
MAPFILE := $(TARGET:.elf=.map)

# Source files (include all relevant source files)
C_SRCS := $(wildcard CORE/*.c) \
          $(wildcard STM32/*.c)

ASM_SRCS := ./STM32/startup_stm32h750xbhx.s

# Object files
C_OBJS := $(C_SRCS:%.c=%.o)
ASM_OBJS := $(ASM_SRCS:%.s=%.o)

# Include directories
INC_DIRS := -I./STM32 \
            -I./CMSIS \
            -I./CORE

# Macro definitions
#DEFINES := -DDEBUG -DUSE_HAL_DRIVER -DSTM32H750xx
DEFINES := -DDEBUG -DSTM32H750xx

# Compilation options
CFLAGS := -mcpu=cortex-m7 -std=gnu11 -g3 $(DEFINES) $(INC_DIRS) \
          -Og -ffunction-sections -fdata-sections -Wall -fstack-usage \
          -MMD -MP --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb

# Linker options
LDFLAGS := -mcpu=cortex-m7 -T"./CORE/STM32H750XBHX_FLASH.ld" --specs=nosys.specs \
           -Wl,-Map=$(MAPFILE) -Wl,--gc-sections -static --specs=nano.specs \
           -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group

# Default target
all: $(TARGET) $(BIN_TARGET)

# Linking target
$(TARGET): $(C_OBJS) $(ASM_OBJS)
	$(CC) $^ $(LDFLAGS) -o $(TARGET)
	$(SIZE) $(TARGET)

# Linking target for BIN
%.bin: %.elf
	$(OBJCOPY) -O binary $< $@

# Dependency files
-include $(C_OBJS:.o=.d) $(ASM_OBJS:.o=.d)

# Compile C source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Assemble assembly source files
%.o: %.s
	$(ASM) $(CFLAGS) -x assembler-with-cpp -c $< -o $@

# Clean target
clean:
	rm -f $(C_OBJS) $(ASM_OBJS) $(TARGET) $(MAPFILE) artpi_reg_project.list
	find . -name "*.o"|xargs rm -rf
	find . -name "*.d"|xargs rm -rf
	find . -name "*.su"|xargs rm -rf

# List target
list: $(TARGET)
	$(OBJDUMP) -h -S $(TARGET) > artpi_reg_project.list

.PHONY: all clean list
