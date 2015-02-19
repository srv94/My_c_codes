################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/kl;.c 

OBJS += \
./src/kl;.o 

C_DEPS += \
./src/kl;.d 


# Each subdirectory must supply rules for building sources it contributes
src/kl;.o: ../src/kl;.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/kl;.d" -MT"src/kl;.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


