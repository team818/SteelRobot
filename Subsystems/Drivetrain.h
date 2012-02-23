#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public Subsystem {

public:
	Drivetrain();
	void InitDefaultCommand();
	void driveForward();
	void driveBackward();
	void turnLeft();
	void turnRight();
	void driveWithJoystick(Joystick* leftstick, Joystick* rightstick);
	void fullStop();
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	RobotDrive *drive;
	
	float Carefulstick(float, bool);
	float signfixedsquare(float);
};

#endif
