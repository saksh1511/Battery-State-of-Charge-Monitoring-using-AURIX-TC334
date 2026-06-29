#include "evadc.h"
#include "soc_estimation.h"
#include "uart.h"

float SOC = 100.0;

int main(void)
{
    initEVADC();
    initUART();

    while(1)
    {
        float current = readBatteryCurrent();

        SOC = updateSOC(SOC, current);

        sendSOC_UART(SOC);
    }
}
