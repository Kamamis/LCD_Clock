################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/uart/usart_adapter.c 

OBJS += \
./component/uart/usart_adapter.o 

C_DEPS += \
./component/uart/usart_adapter.d 


# Each subdirectory must supply rules for building sources it contributes
component/uart/%.o: ../component/uart/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DSERIAL_PORT_TYPE_UART=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/CMSIS" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/drivers" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/utilities" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/serial_manager" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/lists" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/device" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/uart" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/CMSIS" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/drivers" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/utilities" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/serial_manager" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/lists" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/device" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/uart" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/board" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/source" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


