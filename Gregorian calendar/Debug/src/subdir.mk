################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Gregorian\ calendar.c 

OBJS += \
./src/Gregorian\ calendar.o 

C_DEPS += \
./src/Gregorian\ calendar.d 


# Each subdirectory must supply rules for building sources it contributes
src/Gregorian\ calendar.o: ../src/Gregorian\ calendar.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Gregorian calendar.d" -MT"src/Gregorian\ calendar.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


