#pragma once
#include "main.h"

// blocking function that's a macro, since PROS doesn't allow
// you to explicity substitute an int instead of an enum in .get_digital memeber???

#define input_get(x) master.get_digital(x); \
while(!master.get_digital(x)) { delay(2); \
if(master.get_digital(x)) break; }


void print_message(const char* message); // prints message using a C style string (array of chars)
void clear_scr();  // clears every line of LCD
