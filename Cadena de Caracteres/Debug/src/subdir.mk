################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Cadena\ de\ Caracteres.c 

OBJS += \
./src/Cadena\ de\ Caracteres.o 

C_DEPS += \
./src/Cadena\ de\ Caracteres.d 


# Each subdirectory must supply rules for building sources it contributes
src/Cadena\ de\ Caracteres.o: ../src/Cadena\ de\ Caracteres.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Cadena de Caracteres.d" -MT"src/Cadena\ de\ Caracteres.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


