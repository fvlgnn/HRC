## HRC
#### Home Remote Control (aka gianino)

### Resource

* NodeMCU 1.0 (ESP12E)
    * CPU 80 MHz
    * Flash 4M (3M SPIFFS)
    * Upload 115200

**I/O**
    
* (1) Digital LED Status
* (1) Analog Sensor
* (4) Digital Actuators
* (4) Digital Sensors

**Pin Description**

* A0: Radio RX 433MHz
* D0: Actuator Pulse _(Relay Gate)_
* D1: Actuator Switch _(Relay Conditioner)_
* D2: Actuator Switch / Pulse _(Relay Heating)_
* D3: Actuator Switch _(Free)_
* D4: System _(Builtin LED)_
* D5: Sensor Luminosity _(HIGHT/LOW)_
* D6: Sensor Temperature _(DHT11)_
* D7: Sensor Motion _(PIR)_
* D8: Emergency _(Push Button)_

**Scheme and Description**

![Cabling Scheme](https://github.com/fvlgnn/HRC/blob/master/arduino/NodeMUC/schemes/hrc_nodemuc_prod_bb.png)

This solution uses an Arduino NodeMUC cabled as shown in diagram, with a maximum of 4 relays (5V, max 40mA) as actuators, two-state brightness sensor (high/low), temperature sensor, motion sensor and 433MHz radio receiver on the which are connected some transmitters , located on windows and doors, which are controlled by a magnetic sensor and an Arduino ESP8266 (see below)
