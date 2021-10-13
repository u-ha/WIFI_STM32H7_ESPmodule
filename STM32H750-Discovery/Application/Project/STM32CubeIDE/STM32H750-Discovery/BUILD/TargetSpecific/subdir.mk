################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_clock.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_console.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_display.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_event.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_graphics.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_inout.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_system.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_touch.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/stm32h7xx_it.c \
C:/STM32/STM32H750-Discovery/TargetSpecific/system_stm32h7xx.c 

OBJS += \
./TargetSpecific/ew_bsp_clock.o \
./TargetSpecific/ew_bsp_console.o \
./TargetSpecific/ew_bsp_display.o \
./TargetSpecific/ew_bsp_event.o \
./TargetSpecific/ew_bsp_graphics.o \
./TargetSpecific/ew_bsp_inout.o \
./TargetSpecific/ew_bsp_system.o \
./TargetSpecific/ew_bsp_touch.o \
./TargetSpecific/stm32h7xx_it.o \
./TargetSpecific/system_stm32h7xx.o 

C_DEPS += \
./TargetSpecific/ew_bsp_clock.d \
./TargetSpecific/ew_bsp_console.d \
./TargetSpecific/ew_bsp_display.d \
./TargetSpecific/ew_bsp_event.d \
./TargetSpecific/ew_bsp_graphics.d \
./TargetSpecific/ew_bsp_inout.d \
./TargetSpecific/ew_bsp_system.d \
./TargetSpecific/ew_bsp_touch.d \
./TargetSpecific/stm32h7xx_it.d \
./TargetSpecific/system_stm32h7xx.d 


# Each subdirectory must supply rules for building sources it contributes
TargetSpecific/ew_bsp_clock.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_clock.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_console.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_console.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_display.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_display.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_event.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_event.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_graphics.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_graphics.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_inout.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_inout.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_system.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_system.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/ew_bsp_touch.o: C:/STM32/STM32H750-Discovery/TargetSpecific/ew_bsp_touch.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/stm32h7xx_it.o: C:/STM32/STM32H750-Discovery/TargetSpecific/stm32h7xx_it.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
TargetSpecific/system_stm32h7xx.o: C:/STM32/STM32H750-Discovery/TargetSpecific/system_stm32h7xx.c TargetSpecific/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=c11 -g3 -DSTM32H750xx -DUSE_STM32H750B_DK -DAPPLICATION_ADDRESS=0x90000000U -DEW_USE_FREE_RTOS=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -c -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/GeneratedCode" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../Application/Source" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../TargetSpecific/Drivers" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/STM32H7xx_HAL_Driver/Inc" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/STM32H750B-DK" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/Common" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/BSP/Components/mt48lc4m32b2" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Drivers/CMSIS/Device/ST/STM32H7xx/Include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../ThirdParty/STM32Cube_FW_H7/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RTE" -I"C:/STM32/STM32H750-Discovery/Application/Project/STM32CubeIDE/STM32H750-Discovery/../../../../PlatformPackage/RGB565" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

