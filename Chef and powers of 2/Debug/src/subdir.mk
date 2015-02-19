################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Chef\ and\ powers\ of\ 2.c 

OBJS += \
./src/Chef\ and\ powers\ of\ 2.o 

C_DEPS += \
./src/Chef\ and\ powers\ of\ 2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ powers\ of\ 2.o: ../src/Chef\ and\ powers\ of\ 2.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and powers of 2.d" -MT"src/Chef\ and\ powers\ of\ 2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


