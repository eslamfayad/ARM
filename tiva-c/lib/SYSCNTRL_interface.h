#ifndef _SYSCNTRL_INTERFACE_H
#define _SYSCNTRL_INTERFACE_H

typedef enum 
{
	SYSCNTRL_PERIPH_NOTREADY,
	SYSCNTRL_PERIPH_READY
} SYSCNTRL_PERIPH_t;

void SYSCNTRL_vidEnableWatchdogTimer(u8 u8WdTimerModule);
void SYSCNTRL_vidEnableGPIOClock(u8 u8PortNumber);
void SYSCNTRL_vidEnableSPIClock(u8 u8SPIChannel);
void SYSCNTRL_vidEnableUARTClock(u8 u8UARTChannel);
void SYSCNTRL_vidEnableTimerClock(u8 u8Timer);
void SYSCNTRL_vidEnableI2CClock(u8 u8I2CPeriph);
void SYSCNTRL_vidEnableADCClock(u8 u8ADCPeriph);
void SYSCNTRL_vidSelectGPIOBus(u8 u8GPIOPort,u8 u8Bus);
void SYSCNTRL_vidEnablePWMClock(u8 uModule);
void SYSCNTRL_vidChangeSysClock(u8 u8SysClock);
void SYSCNTRL_vidResetGPIO(u8 u8GPIOPeriph);
void SYSCNTRL_vidResetUART(u8 u8UARTPeriph);
void SYSCNTRL_vidResetTimer(u8 u8TimerModule);
SYSCNTRL_PERIPH_t SYSCNTRL_u8CheckGPIOPeriphReady(u8 u8GPIOPeriph);
SYSCNTRL_PERIPH_t SYSCNTRL_u8CheckUARTPeriphReady(u8 u8UARTPeriph);
SYSCNTRL_PERIPH_t SYSCNTRL_u8CheckSPIPeriphReady(u8 u8SPIPeriph);

#define SYSCNTRL_WDT_0 0
#define SYSCNTRL_WDT_1 1
	
#define SYSCNTRL_GPIO_PORTA 0
#define SYSCNTRL_GPIO_PORTB 1
#define SYSCNTRL_GPIO_PORTC 2
#define SYSCNTRL_GPIO_PORTD 3
#define SYSCNTRL_GPIO_PORTE 4
#define SYSCNTRL_GPIO_PORTF 5

#define SYSCNTRL_I2C_0 0
#define SYSCNTRL_I2C_1 1
#define SYSCNTRL_I2C_2 2
#define SYSCNTRL_I2C_3 3

#define SYSCNTRL_UART0 0
#define SYSCNTRL_UART1 1
#define SYSCNTRL_UART2 2
#define SYSCNTRL_UART3 3
#define SYSCNTRL_UART4 4
#define SYSCNTRL_UART5 5
#define SYSCNTRL_UART6 6
#define SYSCNTRL_UART7 7

#define SYSCNTRL_SPI0 0
#define SYSCNTRL_SPI1 1
#define SYSCNTRL_SPI2 2
#define SYSCNTRL_SPI3 3

#define SYSCNTRL_TIMER_0 0
#define SYSCNTRL_TIMER_1 1
#define SYSCNTRL_TIMER_2 2
#define SYSCNTRL_TIMER_3 3
#define SYSCNTRL_TIMER_4 4
#define SYSCNTRL_TIMER_5 5

#define SYSCNTRL_ADC_0 0
#define SYSCNTRL_ADC_1 1

#define SYSCNTRL_BUS_AHB 1
#define SYSCNTRL_BUS_APB 2

#define SYSCNTRL_SYSCLOCK_8MHZ 0
#define SYSCNTRL_SYSCLOCK_10MHZ 1
#define SYSCNTRL_SYSCLOCK_16MHZ 2
#define SYSCNTRL_SYSCLOCK_20MHZ 3
#define SYSCNTRL_SYSCLOCK_25MHZ 4
#define SYSCNTRL_SYSCLOCK_40MHZ 5
#define SYSCNTRL_SYSCLOCK_50MHZ 6
#define SYSCNTRL_SYSCLOCK_80MHZ 7

#define SYSCNTRL_PWM_0 1
#define SYSCNTRL_PWM_1 2
#define SYSCNTRL_PWM_DIV_DISABLED 0
#define SYSCNTRL_PWM_DIV_ENABLED 1

#define SYSCNTRL_PWM_DIV_2 0
#define SYSCNTRL_PWM_DIV_4 1
#define SYSCNTRL_PWM_DIV_8 2
#define SYSCNTRL_PWM_DIV_16 3
#define SYSCNTRL_PWM_DIV_32 4
#define SYSCNTRL_PWM_DIV_64 5

#endif
