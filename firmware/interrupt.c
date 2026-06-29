#include "evadc.h"

void EVADC_ISR(void)
{
    float current;

    current = readBatteryCurrent();

    printf("ADC Current = %.2f A\n", current);
}
