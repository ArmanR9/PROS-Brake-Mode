#pragma once
#include "main.h"

void brake_move(); // tests brake modes with move function (voltage)
void brake_move_voltage(); // tests brake modes with move_voltage function using mV (-12,000 - 12,000)
void brake_move_relative(); // tests brake mode using position movement (encoders + internal PID)
void brake_move_velocity(); // tests brake mode using move_velocity
