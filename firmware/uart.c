#include "uart.h"
#include <stdio.h>

void initUART(void)
{
    /* UART Initialization */
}

void sendSOC_UART(float soc)
{
    printf("SOC: %.2f%%\n", soc);
}
