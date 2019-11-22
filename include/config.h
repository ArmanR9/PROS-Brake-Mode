#pragma once
#include "main.h"

//Change the macros whether you want different motor port
//or you want to reverse the motor

#define MTR_PORT 1
#define IS_REVERSE 0

extern pros::Controller master;
extern pros::Motor mtr;
