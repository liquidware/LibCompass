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
#include "wiring.h"
#include "LibCompass.h"

/******************************************************************************
 * Constructors
 ******************************************************************************/

/**********************************************************
 * Compass
 * 
 * @param CompassType - The type of compass ex. HMC6352
 **********************************************************/
LibCompass::LibCompass(uint8_t CompassType) {

}

/******************************************************************************
 * Global Functions
 ******************************************************************************/

/**********************************************************
 * getHeading
 * 
 * @return int The compass heading in degrees.
 **********************************************************/
int LibCompass::GetHeading(void) {
    return 0;
}

/**********************************************************
 * calibrate
 *  
 * Performs a chip calibration 
 *  
 * @return bool - The calibration result
 **********************************************************/
bool LibCompass::Calibrate(void) {

}



