#include "brake_mode.h"
#include "functions.h"
#include "config.h"

void brake_move() {
  clear_scr();

  lcd::print(0, "A. MOVE Function");
	lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);

	lcd::print(3, "A. Brake Mode: HOLD");
	mtr.set_brake_mode(MOTOR_BRAKE_HOLD);
  mtr.move(50);
	delay(1000);
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(4, "A. Brake Mode: BRAKE");
	mtr.set_brake_mode(MOTOR_BRAKE_BRAKE);
  mtr.move(100);
	delay(1000);
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(5, "A. Brake Mode: COAST");
	mtr.set_brake_mode(MOTOR_BRAKE_COAST);
  mtr = 100;
	delay(1000);
	mtr = 0;

  lcd::print(1, "Press Right to continue:");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
}

void brake_move_voltage() {

  clear_scr();

  lcd::print(0, "B. MOVE_VOLTAGE FUNCTION");
	lcd::print(1, "Press Right to Continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(3, "B. Brake Mode: HOLD");
	mtr.set_brake_mode(MOTOR_BRAKE_HOLD);
  mtr.move_voltage(6000);
	delay(1000);
  mtr.move_voltage(0);

  lcd::print(1, "Press Right to Continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(4, "B. Brake Mode: BRAKE");
	mtr.set_brake_mode(MOTOR_BRAKE_BRAKE);
  mtr.move_voltage(6000);
	delay(1000);
	mtr.move_voltage(0);

  lcd::print(1, "Press Right to Continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(5, "B. Brake Mode: COAST");
	mtr.set_brake_mode(MOTOR_BRAKE_COAST);
  mtr.move_voltage(6000);
	delay(1000);
  mtr.move_voltage(0);

  lcd::print(1, "Press Right to Continue: Move Voltage test done");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
}

void brake_move_relative() {

	clear_scr();
	lcd::print(0, "C. MOVE RELATIVE / Encoder Position function");
	lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(3, "C. Brake Mode: HOLD");
	mtr.set_brake_mode(MOTOR_BRAKE_HOLD);
  mtr.move_relative(300, 100);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);

	lcd::print(4, "C. HOLD with no voltage");
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);

	lcd::print(4, "C. Brake Mode: BRAKE");
	mtr.set_brake_mode(MOTOR_BRAKE_BRAKE);
  mtr.move_relative(300, 100);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(5, "C. Brake Mode: Brake + no voltage");
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(5, "C. Brake Mode: COAST");
	mtr.set_brake_mode(MOTOR_BRAKE_COAST);
  mtr.move_relative(300, 100);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);


	lcd::print(6, "C. Brake Mode: COAST + no voltage");
	mtr.move(0);
  blocking_f(DIGITAL_RIGHT);


}


void brake_move_velocity() {

	clear_scr();

	lcd::print(0, "D. MOVE VELOCITY function");
	lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);

	lcd::print(3, "D. Brake Mode: HOLD");
	mtr.set_brake_mode(MOTOR_BRAKE_HOLD);
  mtr.move_velocity(100);
	delay(2000);
	mtr.move_velocity(0);
  lcd::print(4, "D. Brake Mode: HOLD + Move_Velocity at 0");

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
  lcd::clear_line(4);


	lcd::print(5, "D. Brake Mode: HOLD and no voltage");
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
  lcd::clear_line(5);

	lcd::print(4, "D. Brake Mode: BRAKE");
	mtr.set_brake_mode(MOTOR_BRAKE_BRAKE);
  mtr.move_velocity(100);
	delay(2000);
	mtr.move_velocity(0);
  lcd::print(5, "D. Brake Mode: Brake + Move_Velocity at 0");


  lcd::print(1, "Press Right to continue");
  blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
  lcd::clear_line(4);


	lcd::print(6, "D. Brake Mode: BRAKE and 0 voltage");
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
  lcd::clear_line(6);



	lcd::print(5, "D. Brake Mode: COAST");
	mtr.set_brake_mode(MOTOR_BRAKE_COAST);
  mtr.move_velocity(100);
	delay(2000);
	mtr.move_velocity(0);
  lcd::print(6, "Brake Mode: COAST + Move_Velocity at 0");


  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);



	lcd::print(7, "D. COAST and 0 voltage");
	mtr.move(0);

  lcd::print(1, "Press Right to continue");
	blocking_f(DIGITAL_RIGHT);
  lcd::clear_line(1);
  lcd::clear_line(6);
  lcd::clear_line(7);


}
