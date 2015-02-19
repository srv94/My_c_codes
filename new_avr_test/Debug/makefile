################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
new_avr_test.lss \

FLASH_IMAGE += \
new_avr_test.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: new_avr_test.elf secondary-outputs

# Tool invocations
new_avr_test.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,new_avr_test.map -mmcu=atmega16 -o "new_avr_test.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

new_avr_test.lss: new_avr_test.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S new_avr_test.elf  >"new_avr_test.lss"
	@echo 'Finished building: $@'
	@echo ' '

new_avr_test.hex: new_avr_test.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex new_avr_test.elf  "new_avr_test.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: new_avr_test.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 new_avr_test.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: new_avr_test.elf
	@echo 'Invoking: AVRDude'
	/usr/local/CrossPack-AVR-20131216/bin/avrdude -pm16 -cusbasp -Uflash:w:new_avr_test.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(FLASH_IMAGE)$(ELFS)$(LSS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) new_avr_test.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
