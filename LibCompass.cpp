/*
  LibCompass - A Compass Library for Arduino.

  Supported compass modules:
    HMC6352 Compass Module - http://moderndevice.com/products/hmc6352-breakout-compass-sensor

  Created by Christopher Ladden at Modern Device on December 2009.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <inttypes.h>
#include <Wire.h>
#include <wiring.h>
#include "LibCompass.h"

/******************************************************************************
 * Constructors
 ******************************************************************************/

/**********************************************************
 * Compass
 *  Initialize the Compass
 *
 * @param CompassType - The type of compass ex. HMC6352
 **********************************************************/
LibCompass::LibCompass(uint8_t CompassType) {

    pinMode(16, OUTPUT);
    digitalWrite(16, LOW);  //GND pin
    pinMode(17, OUTPUT);
    digitalWrite(17, HIGH); //VCC pin

    Wire.begin();
}

/******************************************************************************
 * Global Functions
 ******************************************************************************/

/**********************************************************
 * GetHeading
 *  Get the current Compass heading.
 *
 * @return int The compass heading in degrees.
 **********************************************************/
float LibCompass::GetHeading(void) {
    uint8_t j = 0;
    uint8_t data[2];
    int16_t frac;

    Wire.beginTransmission(0x21);
    Wire.send(0x41); //A
    Wire.endTransmission();
    delay(8); //6000 microseconds minimum 6 ms

    Wire.requestFrom(0x21, 2);
    while(Wire.available() && (j < 2) ) {
        data[j] = Wire.receive();
        j++;
    }
    frac = data[0]*256 + data[1];

    return (frac/10.0);
}

/**********************************************************
 * Calibrate
 *  Performs a chip calibration
 *
 * @return bool - The calibration result
 **********************************************************/
bool LibCompass::Calibrate(void) {
    ; //TODO
}

/**********************************************************
 * Sleep
 *  Send the sleep command to the Compass
 **********************************************************/
void LibCompass::Sleep(void) {
    Wire.beginTransmission(0x21);
    Wire.send(0x53); //S enter sleep mode
    Wire.endTransmission();
}

/**********************************************************
 * Wake
 *  Send the wakeup command to the Compass.
 **********************************************************/
void LibCompass::Wake(void) {
    Wire.beginTransmission(0x21);
    Wire.send(0x57); //W wake up exit sleep mode
    Wire.endTransmission();
}

