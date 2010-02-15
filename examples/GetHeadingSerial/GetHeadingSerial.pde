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


int x;

void loop() {

 /* Print the heading to the PC */
 for (x=0; x< 500; x++) {
   Serial.print("Heading: ");
   Serial.print(compass.GetHeading());
   Serial.println(" degrees");
   delay(10);
 }

 // Calibrate the sensor using two full rotations
 // Watch the serial port for instructions
 compass.Calibrate();

}
