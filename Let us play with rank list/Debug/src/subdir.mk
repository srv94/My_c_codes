################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Let\ us\ play\ with\ rank\ list.cpp 

OBJS += \
./src/Let\ us\ play\ with\ rank\ list.o 

CPP_DEPS += \
./src/Let\ us\ play\ with\ rank\ list.d 


# Each subdirectory must supply rules for building sources it contributes
src/Let\ us\ play\ with\ rank\ list.o: ../src/Let\ us\ play\ with\ rank\ list.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Let us play with rank list.d" -MT"src/Let\ us\ play\ with\ rank\ list.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


