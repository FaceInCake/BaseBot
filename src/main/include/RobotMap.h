#ifndef _ROBOTMAP_HG_
#define _ROBOTMAP_HG_

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// Whenever possible, Macros and definitions are used in order to preserve memory

// DriveTrain motors
#define DRIVETRAIN_LEFT_FRONT_MOTOR  5
#define DRIVETRAIN_LEFT_REAR_MOTOR   6
#define DRIVETRAIN_RIGHT_FRONT_MOTOR 4
#define DRIVETRAIN_RIGHT_REAR_MOTOR  3

// DriveTrain motor invertions
#define DRIVETRAIN_LEFT_FRONT_MOTOR_INVERT  false
#define DRIVETRAIN_LEFT_REAR_MOTOR_INVERT   false
#define DRIVETRAIN_RIGHT_FRONT_MOTOR_INVERT true
#define DRIVETRAIN_RIGHT_REAR_MOTOR_INVERT  true

// DriveWithJoystick Rotation limit
#define DRIVEWITHJOYSTICK_ROATATION_LIMITER 0.85

// Xbox controllers
#define XBOX_CONTROLLER_DRIVE_PORT    0
#define XBOX_CONTROLLER_OPERATOR_PORT 1

// Handy macros to save Python programmers from going crazy
#define False false
#define True  true
#define elif  else if

#endif // _ROBOTMAP_HG_