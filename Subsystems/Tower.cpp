#include "Tower.h"
#include "../Robotmap.h"

Tower::Tower() : Subsystem("Tower") 
	{
		BallMotor = new Victor(BALL_MOTOR);
		BallMotor->SetSafetyEnabled(false);
		BallLimit = new DigitalInput(BALL_LIMIT);
	}
    
void Tower::InitDefaultCommand()
	{
		// Set the default command for a subsystem here.
		//SetDefaultCommand(new driveWithJoystick());
	}
bool Tower::LimitStatus(){
	if (BallLimit->Get() == 1)
		return true;
	else
		return false;
}
void Tower::TowerStop()
{
	BallMotor->SetSpeed(0.0);
}

void Tower::ballup()
{
	BallMotor->SetSpeed(1.0);
}

void Tower::balldown()
{
	BallMotor->SetSpeed(-1.0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

