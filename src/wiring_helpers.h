#ifndef _wiring_helpers_H_
#define _wiring_helpers_H_

#include "sensesp_app.h"
#include "sensors/onewire_temperature.h"


//Obsolete
void setup_onewire_temperature(
  DallasTemperatureSensors* dts,
  String sk_path,
  String config_path
);

#endif
