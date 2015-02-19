################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Gcd\ Queries.c 

OBJS += \
./src/Gcd\ Queries.o 

C_DEPS += \
./src/Gcd\ Queries.d 


# Each subdirectory must supply rules for building sources it contributes
src/Gcd\ Queries.o: ../src/Gcd\ Queries.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Gcd Queries.d" -MT"src/Gcd\ Queries.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


