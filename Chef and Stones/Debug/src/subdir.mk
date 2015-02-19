################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Chef\ and\ Stones.c 

OBJS += \
./src/Chef\ and\ Stones.o 

C_DEPS += \
./src/Chef\ and\ Stones.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Stones.o: ../src/Chef\ and\ Stones.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Stones.d" -MT"src/Chef\ and\ Stones.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


