/* ***
 *
 * HRC (Home Remote Control)
 * @author @fvlgnn <fvlgnn@gmail.com>
 * @date 15th Jun, 2016
 * Apache License 2.0
 * 
 * Arduino NodeMUC
 *
 * NodeMCU 1.0 (modulo ESP12E)
 * CPU 80 MHz
 * Flash 4M (3M SPIFFS)
 * Upload 115200
 * 
 * 1 Digital LED Status
 * 1 Analog Sensor
 * 4 Digital Actuators
 * 4 Digital Sensors * DHT11
 * 
 * A0: Radio RX 433MHz
 * D0: Relè Gate
 * D1: Relè Conditioner
 * D2: Relè Heating
 * D3: Free
 * D4: System (Builtin LED)
 * D5: Sensor Luminosity (1/0)
 * D6: Sensor Temperature (DHT11)
 * D7: Sensor Motion (PIR)
 * D8: Emergency (push button)
 * WebServer API/REST
 * 
 * Readme: http://www.giannifavilli.it
 *  
 *** */

#include <HRC_NodeMUC.h>
#include <ESP8266WiFi.h>
#include <DHT.h>

char* wifissid = "{:WIFISSIDID:}";
char* wifipass = "{:WIFIPASS:}";
char* srvHost = "{:SRVHOST:}";
char* srvPath = "{:SRVPATH:}";
char* ardId  = "{:ARDID:}";
char* ardKey = "{:ARDKEY:}";

HRC_NodeMUC hrc(wifissid, wifipass, ardId, ardKey, srvHost, srvPath);

void setup() { Serial.begin(115200); hrc.setupHRC(); }

void loop() { hrc.loopHRC(); }
