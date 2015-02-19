################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Let\ us\ play\ with\ rank\ list_C.c 

OBJS += \
./src/Let\ us\ play\ with\ rank\ list_C.o 

C_DEPS += \
./src/Let\ us\ play\ with\ rank\ list_C.d 


# Each subdirectory must supply rules for building sources it contributes
src/Let\ us\ play\ with\ rank\ list_C.o: ../src/Let\ us\ play\ with\ rank\ list_C.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Let us play with rank list_C.d" -MT"src/Let\ us\ play\ with\ rank\ list_C.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


