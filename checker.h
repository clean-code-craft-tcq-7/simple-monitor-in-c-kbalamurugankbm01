#ifndef CHECKER_H
#define CHECKER_H

extern int batteryIsOk(float temperature, float soc, float chargeRate);

extern int batteryTemperatureIsOk(float temperature);
extern int batterySOCOk(float soc);
extern int batteryChargeRateOk(float chargeRate);

extern void printBatteryTemperatureWarning(float temperature);
extern void printBatterySOCWarning(float soc);
extern void printBatteryChargeRateWarning(void);

#endif //CHECKER_H