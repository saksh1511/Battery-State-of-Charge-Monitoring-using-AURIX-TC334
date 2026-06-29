#include "soc_estimation.h"

#define BATTERY_CAPACITY_AH 2.0
#define SAMPLE_TIME_SEC 1.0

float updateSOC(float soc, float current)
{
    float deltaSOC;

    deltaSOC = (current * SAMPLE_TIME_SEC) /
               (BATTERY_CAPACITY_AH * 3600.0);

    soc = soc - (deltaSOC * 100);

    if(soc > 100)
        soc = 100;

    if(soc < 0)
        soc = 0;

    return soc;
}
