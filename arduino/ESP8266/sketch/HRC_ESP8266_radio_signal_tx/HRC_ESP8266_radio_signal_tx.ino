/* ***
 *
 * HRC (Home Remote Control) aka Gianino
 * Radio Signal TX for windows and doors
 * @author @fvlgnn <fvlgnn@gmail.com>
 * @date 15th Jun, 2018
 * Apache License 2.0
 * 
 * *** Builder Arduino ESP8266 (ESP-01)
 *
 * Generic ESP8266 Module
 * QI0
 * 512K
 * v2 Lower Memory
 * ck
 * 26 MHz
 * 40 MHz
 * 80 MHz
 * Upload 115200
 *
 * *** I/O
 * (1) Digital LED Status
 * (1) Digital Actuator
 * 
 * *** Pin
 * D0 (0) [GPIO_0]: Connect to GND in programming mode 
 * D1 (1) [TXD]:    System (Builtin LED)
 * D2 (2) [GPIO_2]: Radio TX 433MHz (Transmitter)
 * 
 * *** Cabling
 * Connect to battery and magnetic sensor, when window/door has open
 * sketch startup and run, when thay are close the system has off.
 *  
 *** */
 
#define pinON 0
#define pinOFF 1

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(1, pinON);
  digitalWrite(2, pinON);
  delay(2500);
  digitalWrite(1, pinOFF);
  digitalWrite(2, pinOFF);
  delay(750000);
}
