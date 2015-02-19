################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chef\ and\ Strange\ Formula_again.cpp 

OBJS += \
./src/Chef\ and\ Strange\ Formula_again.o 

CPP_DEPS += \
./src/Chef\ and\ Strange\ Formula_again.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Strange\ Formula_again.o: ../src/Chef\ and\ Strange\ Formula_again.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Strange Formula_again.d" -MT"src/Chef\ and\ Strange\ Formula_again.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


