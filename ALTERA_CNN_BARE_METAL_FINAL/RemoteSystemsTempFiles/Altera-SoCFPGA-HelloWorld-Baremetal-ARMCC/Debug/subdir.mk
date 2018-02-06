################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../test_cnn2.c 

C_DEPS += \
./test_cnn2.d 

OBJS += \
./test_cnn2.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: ARM C Compiler'
	armcc --cpu=Cortex-A9 --fpu=VFPv3_FP16 -O3 -Ospace --loop_optimization_level=2 --vectorize -g --md --depend_format=unix_escaped --no_depend_system_headers -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


