#include <Adafruit_MAX31856.h>

Adafruit_MAX31856 thermocouple = Adafruit_MAX31856(13, 12, 11, 10);
// Set to whatever pins we use                    (CS, DI, DO, CLK)

void setup() {
  Serial.begin(9600);

  thermocouple.begin();

  thermocouple.setThermocoupleType(MAX31856_TCTYPE_T);
  
}

void loop() {
  //Serial.print("Cold Junction Temp: "); 
  //Serial.println(thermocouple.readCJTemperature());

  //Serial.print("Thermocouple Temp: ");
  Serial.println(thermocouple.readThermocoupleTemperature());
  //Serial.write(int(thermocouple.readThermocoupleTemperature()*100));
  
  // Check and print any faults
//  uint8_t fault = thermocouple.readFault();
//  if (fault) {
//    if (fault & MAX31856_FAULT_CJRANGE) Serial.println("Cold Junction Range Fault");
//    if (fault & MAX31856_FAULT_TCRANGE) Serial.println("Thermocouple Range Fault");
//    if (fault & MAX31856_FAULT_CJHIGH)  Serial.println("Cold Junction High Fault");
//    if (fault & MAX31856_FAULT_CJLOW)   Serial.println("Cold Junction Low Fault");
//    if (fault & MAX31856_FAULT_TCHIGH)  Serial.println("Thermocouple High Fault");
//    if (fault & MAX31856_FAULT_TCLOW)   Serial.println("Thermocouple Low Fault");
//    if (fault & MAX31856_FAULT_OVUV)    Serial.println("Over/Under Voltage Fault");
//    if (fault & MAX31856_FAULT_OPEN)    Serial.println("Thermocouple Open Fault");
//  }
  
}
