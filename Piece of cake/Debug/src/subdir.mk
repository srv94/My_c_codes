################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Piece\ of\ cake.cpp 

OBJS += \
./src/Piece\ of\ cake.o 

CPP_DEPS += \
./src/Piece\ of\ cake.d 


# Each subdirectory must supply rules for building sources it contributes
src/Piece\ of\ cake.o: ../src/Piece\ of\ cake.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Piece of cake.d" -MT"src/Piece\ of\ cake.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


