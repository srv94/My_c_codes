################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Xor\ Matrix.cpp 

OBJS += \
./src/Xor\ Matrix.o 

CPP_DEPS += \
./src/Xor\ Matrix.d 


# Each subdirectory must supply rules for building sources it contributes
src/Xor\ Matrix.o: ../src/Xor\ Matrix.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Xor Matrix.d" -MT"src/Xor\ Matrix.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


