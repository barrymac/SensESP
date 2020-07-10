#include "wiring_helpers.h"

#include "sensesp_app.h"
#include "sensors/digital_input.h"
#include "transforms/difference.h"
#include "sensors/digital_input.h"
#include "transforms/frequency.h"
#include "signalk/signalk_output.h"
#include "signalk/signalk_time.h"
#include "transforms/integrator.h"
#include "transforms/linear.h"
#include "transforms/moving_average.h"
#include "transforms/transform.h"

//Obsolete
void setup_onewire_temperature(
    SensESPApp* seapp,
    DallasTemperatureSensors* dts,
    String sk_path,
    String config_path,
    String schema
) {
  (new OneWireTemperature(dts))->connectTo(
    new SKOutputNumber(sk_path, config_path));
}

