################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chef\ and\ Equality.cpp 

OBJS += \
./src/Chef\ and\ Equality.o 

CPP_DEPS += \
./src/Chef\ and\ Equality.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Equality.o: ../src/Chef\ and\ Equality.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Equality.d" -MT"src/Chef\ and\ Equality.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


