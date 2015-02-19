################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Chef\ and\ Strings_c.c 

OBJS += \
./src/Chef\ and\ Strings_c.o 

C_DEPS += \
./src/Chef\ and\ Strings_c.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Strings_c.o: ../src/Chef\ and\ Strings_c.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Strings_c.d" -MT"src/Chef\ and\ Strings_c.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


