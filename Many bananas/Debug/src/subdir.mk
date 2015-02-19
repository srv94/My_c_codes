################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Many\ bananas.cpp 

OBJS += \
./src/Many\ bananas.o 

CPP_DEPS += \
./src/Many\ bananas.d 


# Each subdirectory must supply rules for building sources it contributes
src/Many\ bananas.o: ../src/Many\ bananas.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Many bananas.d" -MT"src/Many\ bananas.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


