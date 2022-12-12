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
    printBatteryTemperatureWarning(temperature);
    return 0;
  }
  return 1;
}

int batterySOCOk(float soc) {
  if(soc < 20 || soc > 80) {
    printBatterySOCWarning(soc);
    return 0;
  }
  return 1;
}

int batteryChargeRateOk(float chargeRate) {
  if(chargeRate > 0.8) {
    printBatteryChargeRateWarning();
    return 0;
  }
  return 1;
}

void printBatteryTemperatureWarning(float temperature) {
  if (temperature < 0){
    printf("Temperature out of range!: LOW\n"); 
  }else {
    printf("Temperature out of range!: HIGH\n"); 
  }
  
}

void printBatterySOCWarning(float soc) {
  if(soc < 20){
    printf("State of Charge out of range!: LOW\n");
  }else {
    printf("State of Charge out of range!: HIGH\n");
  }
  
}

void printBatteryChargeRateWarning(void) {
  printf("Charge Rate out of range!\n");  
}
