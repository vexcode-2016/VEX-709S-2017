#ifndef MOTORS_H
#define MOTORS_H

#include "lib.h"
#include "defines.h"

/*
 *Returns the truespeed value for motors.
 *Based on Jess and Jordan's data (Jordan's funtion)
 */
 int trueSpeedf(int speed);

void motorRek(int motorPort, int power);

int trueSpeed(int speed);

int fakeSpeed(int speed);

void accelDrive();

void initMotors(void);

/*
 *Sets only the back 4 motors on the drive,
 *while driveSet uses all 6. Used mainly in
  *revised turning functions.
  */
void driveSetBack(int Lpower, int Rpower);
/*
 *Sets the lift to a desired power
 */
void liftSet(int power);
/*
 *Sets the drive to a desired power
 */
void driveSet(int Lpower, int Rpower);

int getMotor(int motorPort);
/*
 *Stops the drive.
 *Equivelent of driveSet(0,0);
 */
void driveStop(void);

#endif
