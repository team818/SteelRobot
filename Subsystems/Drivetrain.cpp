#include "Drivetrain.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"

Drivetrain::Drivetrain() : Subsystem("Drivetrain") 
	{
		drive = new RobotDrive(FRONT_LEFT_MOTOR, BACK_LEFT_MOTOR, FRONT_RIGHT_MOTOR, BACK_RIGHT_MOTOR);
		drive->SetSafetyEnabled(false);
	}
    
void Drivetrain::InitDefaultCommand()
	{
		// Set the default command for a subsystem here.
		SetDefaultCommand(new DriveWithJoystick());
	}
void Drivetrain::driveForward()
	{
		drive->TankDrive(-1.0, -1.0);
	}
void Drivetrain::driveBackward()
	{
		drive->TankDrive(1.0, 1.0);
	}
void Drivetrain::turnLeft()
	{
		drive->TankDrive(1.0, -1.0);
	}
void Drivetrain::turnRight()
	{
		drive->TankDrive(-1.0, 1.0);
	}
void Drivetrain::driveWithJoystick(Joystick* leftstick, Joystick* rightstick) //need to figure out how to use two joysticks in a tank drive
	{
		//drive->ArcadeDrive(stick);
		drive->TankDrive(Carefulstick(leftstick->GetRawAxis(2), leftstick->GetRawButton(1)), Carefulstick(rightstick->GetRawAxis(2), rightstick->GetRawButton(2)));
	}
void Drivetrain::fullStop()
	{
		drive->TankDrive(0.0, 0.0);
	}

// Put methods for controlling this subsystem
// here. Call these from Commands.


float signfixedsquare(float A)
	{ //gmiller
		if (A < 0)
			return -1 * A * A;
		else
			return A * A;
	}

float Carefulstick(float axis, bool button)
	{ //gmiller
		if(button)
		{
			//Raw turbo
			return axis;
		}
		else
		{
			//careful
			return signfixedsquare(axis)*100;
		}	
	}
