#include <stdio.h>
#include <assert.h>
int batteryTemperatureIsOk(float temperature);
int batterySOCOk(float soc);
int batteryChargeRateOk(float chargeRate);
int batteryIsOk(float temperature, float soc, float chargeRate);

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(batteryTemperatureIsOk(temperature)) {
    printf("Temperature out of range!\n");
    return 0;
  } else if(batterySOCOk(soc)) {
    printf("State of Charge out of range!\n");
    return 0;
  } else if(batteryChargeRateOk(chargeRate)) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
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

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
