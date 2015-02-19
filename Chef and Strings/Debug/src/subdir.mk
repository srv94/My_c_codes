################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chef\ and\ Strings.cpp 

OBJS += \
./src/Chef\ and\ Strings.o 

CPP_DEPS += \
./src/Chef\ and\ Strings.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Strings.o: ../src/Chef\ and\ Strings.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Strings.d" -MT"src/Chef\ and\ Strings.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


