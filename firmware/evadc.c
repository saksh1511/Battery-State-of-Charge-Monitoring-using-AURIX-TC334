#include "evadc.h"

#define ADC_MAX 4095.0
#define VREF 5.0

void initEVADC(void)
{
    /* EVADC Configuration */
}

float readBatteryCurrent(void)
{
    uint16 adcResult;

    adcResult = getEVADCResult();

    float voltage =
        ((float)adcResult * VREF) / ADC_MAX;

    float current = voltage / 0.1;

    return current;
}
