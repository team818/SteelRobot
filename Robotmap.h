#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define RIGHTMOTOR 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1

//these are the ports on the digital side card

#define FRONT_LEFT_MOTOR 1
#define FRONT_RIGHT_MOTOR 2
#define BACK_LEFT_MOTOR 3
#define BACK_RIGHT_MOTOR 4
#define TURRET_MOTOR 5
#define ANGLE_MOTOR 6
#define BALL_MOTOR 7
#define SHOOTER_MOTOR 8

//these that follow are the Digital I/O ports ont the digital side car
#define SHOOTER_WHEEL_ENCODER_A 1
#define SHOOTER_WHEEL_ENCODER_B 2
#define LEFT_DRIVE_ENCODER_A 3
#define LEFT_DRIVE_ENCODER_B 4
#define RIGHT_DRIVE_ENCODER_A 5
#define RIGHT_DRIVE_ENCODER_B 6
#define BALL_LIMIT 7
#define LEFT_SHOOTER_LIMIT 8
#define RIGHT_SHOOTER_LIMIT 9

//these that follow are the ports on the Analogue Module on the cRIO
#define TURRET_GYRO 1
#define ANGLE_POT_A 2
#define ANGLE_POT_B 3


#endif
