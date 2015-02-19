################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chef\ and\ Strange\ Formula.cpp 

OBJS += \
./src/Chef\ and\ Strange\ Formula.o 

CPP_DEPS += \
./src/Chef\ and\ Strange\ Formula.d 


# Each subdirectory must supply rules for building sources it contributes
src/Chef\ and\ Strange\ Formula.o: ../src/Chef\ and\ Strange\ Formula.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Chef and Strange Formula.d" -MT"src/Chef\ and\ Strange\ Formula.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


