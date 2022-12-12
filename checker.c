#include <stdio.h>
#include "checker.h"

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int batteryIsOk_bool = 0;

  batteryIsOk_bool = batteryTemperatureIsOk(temperature) && batterySOCOk(soc) \
  && batteryChargeRateOk(chargeRate);

  return batteryIsOk_bool;
}

int batteryTemperatureIsOk(float temperature) {
  if(temperature < 0 || temperature > 45){
    return 0;
  }
  return 1;
}

int batterySOCOk(float soc) {
  if(soc < 20 || soc > 80) {
    return 0;
  }
  return 1;
}

int batteryChargeRateOk(float chargeRate) {
  if(chargeRate > 0.8) {
    return 0;
  }
  return 1;
}

int printBatteryChargeRateWarning(float chargeRate) {
  if (batteryChargeRateOk(chargeRate) == 0) {
    printf("Charge Rate out of range!\n");
  }
  
}


int printBatteryTemperatureWarning(float temperature) {
  if(batteryTemperatureIsOk(temperature) == 0){
    printf("Temperature out of range!\n");
  }
  
}


int printBatterySOCWarning(float soc) {
  if(batterySOCOk(soc) == 0){
    printf("State of Charge out of range!\n");
  }

}

