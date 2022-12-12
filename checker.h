#ifndef CHECKER_H
#define CHECKER_H

extern int batteryIsOk(float temperature, float soc, float chargeRate);
extern int batteryTemperatureIsOk(float temperature);
extern int batterySOCOk(float soc);
extern int batteryChargeRateOk(float chargeRate);
extern int printBatteryChargeRateWarning(float chargeRate);
extern int printBatteryTemperatureWarning(float temperature);
extern int printBatterySOCWarning(float soc)

#endif //CHECKER_H