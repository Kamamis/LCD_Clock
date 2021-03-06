################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_ctimer.c \
../drivers/fsl_flexcomm.c \
../drivers/fsl_gpio.c \
../drivers/fsl_i2c.c \
../drivers/fsl_inputmux.c \
../drivers/fsl_pint.c \
../drivers/fsl_power.c \
../drivers/fsl_reset.c \
../drivers/fsl_rtc.c \
../drivers/fsl_spi.c \
../drivers/fsl_usart.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_ctimer.o \
./drivers/fsl_flexcomm.o \
./drivers/fsl_gpio.o \
./drivers/fsl_i2c.o \
./drivers/fsl_inputmux.o \
./drivers/fsl_pint.o \
./drivers/fsl_power.o \
./drivers/fsl_reset.o \
./drivers/fsl_rtc.o \
./drivers/fsl_spi.o \
./drivers/fsl_usart.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_ctimer.d \
./drivers/fsl_flexcomm.d \
./drivers/fsl_gpio.d \
./drivers/fsl_i2c.d \
./drivers/fsl_inputmux.d \
./drivers/fsl_pint.d \
./drivers/fsl_power.d \
./drivers/fsl_reset.d \
./drivers/fsl_rtc.d \
./drivers/fsl_spi.d \
./drivers/fsl_usart.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_LPC55S69JBD100 -DCPU_LPC55S69JBD100_cm33 -DCPU_LPC55S69JBD100_cm33_core0 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -DSERIAL_PORT_TYPE_UART=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/CMSIS" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/drivers" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/utilities" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/serial_manager" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/lists" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/device" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/uart" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/CMSIS" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/drivers" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/utilities" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/serial_manager" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/lists" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/device" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/component/uart" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/board" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/source" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD" -I"/home/kama/Documents/MCUXpresso_11.2.1_4149/workspace/zegarLCD/startup" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


