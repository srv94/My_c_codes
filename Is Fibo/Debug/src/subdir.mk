################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Is\ Fibo.cpp 

OBJS += \
./src/Is\ Fibo.o 

CPP_DEPS += \
./src/Is\ Fibo.d 


# Each subdirectory must supply rules for building sources it contributes
src/Is\ Fibo.o: ../src/Is\ Fibo.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Is Fibo.d" -MT"src/Is\ Fibo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


