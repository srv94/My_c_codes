################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chef\ and\ Chain.cpp 

OBJS += \
./src/Chef\ and\ Chain.o 

CPP_DEPS += \
./src/Chef\ and\ Chain.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Chain.o: ../src/Chef\ and\ Chain.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Chain.d" -MT"src/Chef\ and\ Chain.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


