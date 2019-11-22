#include "config.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor mtr(MTR_PORT, pros::E_MOTOR_GEARSET_18, IS_REVERSE, pros::E_MOTOR_ENCODER_COUNTS);
