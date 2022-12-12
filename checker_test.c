#include <assert.h>
#include "checker.h"

int main() {
  //TC for battery status
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0.8));
  assert(!batteryIsOk(25, 0, 0.7));
  assert(!batteryIsOk(-12, 70, 0.7));

  //TC for battery temperature
  assert(batteryTemperatureIsOk(12.0));
  assert(!batteryTemperatureIsOk(-12.0));
  assert(!batteryTemperatureIsOk(120.0));
  
  //TC for battery SOC
  assert(batterySOCOk(22.0));
  assert(!batterySOCOk(-12.0));
  assert(!batterySOCOk(120.0));

  //TC for battery charge rate
  assert(batteryChargeRateOk(0.7));
  assert(!batteryChargeRateOk(120.0));
}
