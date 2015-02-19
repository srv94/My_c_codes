################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/find\ digits.cpp 

OBJS += \
./src/find\ digits.o 

CPP_DEPS += \
./src/find\ digits.d 


# Each subdirectory must supply rules for building sources it contributes
src/find\ digits.o: ../src/find\ digits.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/find digits.d" -MT"src/find\ digits.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


