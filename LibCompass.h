/*
  LibCompass - A Compass Library for the Arduino.
 
  Supported compass modules:
    HMC6352 Compass Module - http://moderndevice.com/products/hmc6352-breakout-compass-sensor
 
  Created by Christopher Ladden from Modern Device on December 2009.

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

#ifndef LIB_COMPASS_H
#define LIB_COMPASS_H

#include <inttypes.h>

class LibCompass
{
  private:
    uint8_t pinList[4];

  public:
    LibCompass(uint8_t CompassType);
    int GetHeading(void);
    bool Calibrate(void);
};

#endif
