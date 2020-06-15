/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  
  class HSLAPixel {
    public:
    double h;  // hue of pixel [0, 360]
    double s;  // sturation of pixel [0, 1]
    double l;  // luminance of pixel [0, 1]
    double a;  // alpha channel [0, 1]
  };


}
