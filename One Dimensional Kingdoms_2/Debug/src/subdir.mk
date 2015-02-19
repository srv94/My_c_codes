################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/One\ Dimensional\ Kingdoms_2.c 

OBJS += \
./src/One\ Dimensional\ Kingdoms_2.o 

C_DEPS += \
./src/One\ Dimensional\ Kingdoms_2.d 


# Each subdirectory must supply rules for building sources it contributes
src/One\ Dimensional\ Kingdoms_2.o: ../src/One\ Dimensional\ Kingdoms_2.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/One Dimensional Kingdoms_2.d" -MT"src/One\ Dimensional\ Kingdoms_2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


