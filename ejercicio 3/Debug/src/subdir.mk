################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ejercicio\ 3.c 

OBJS += \
./src/ejercicio\ 3.o 

C_DEPS += \
./src/ejercicio\ 3.d 


# Each subdirectory must supply rules for building sources it contributes
src/ejercicio\ 3.o: ../src/ejercicio\ 3.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ejercicio 3.d" -MT"src/ejercicio\ 3.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


