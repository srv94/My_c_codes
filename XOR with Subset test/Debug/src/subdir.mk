################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/XOR\ with\ Subset\ test.cpp 

OBJS += \
./src/XOR\ with\ Subset\ test.o 

CPP_DEPS += \
./src/XOR\ with\ Subset\ test.d 


# Each subdirectory must supply rules for building sources it contributes
src/XOR\ with\ Subset\ test.o: ../src/XOR\ with\ Subset\ test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/XOR with Subset test.d" -MT"src/XOR\ with\ Subset\ test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


