/****************************
 * GetHeadingSerial
 *  An example sketch that prints the
 *  compass heading to the PC's serial port
 *
 *  Tested with the HMC6352 Compass
 *  from Modern Device
 *****************************/
#include <Wire.h>
#include <LibCompass.h>

LibCompass compass = LibCompass(0);

void setup() {
 /* Start a PC serial connection */
 Serial.begin(9600);
}

void loop() {
 /* Print the heading to the PC */
 Serial.println(compass.GetHeading());
 delay(10);
}
