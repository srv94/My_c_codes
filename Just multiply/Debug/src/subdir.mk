################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Just\ multiply.cpp 

OBJS += \
./src/Just\ multiply.o 

CPP_DEPS += \
./src/Just\ multiply.d 


# Each subdirectory must supply rules for building sources it contributes
src/Just\ multiply.o: ../src/Just\ multiply.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Just multiply.d" -MT"src/Just\ multiply.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


