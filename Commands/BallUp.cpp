#include "BallUp.h"

BallUp::BallUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(tower);
}

// Called just before this Command runs the first time
void BallUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BallUp::Execute() {
	//put code here that moves the balls up when the button on the cypress module is pressed
//	while(INSERT CODE FOR READING THE TRUE STATE OF A DS ENHANCED IO DIGITAL INPUT)
	if(tower->LimitStatus() == true)
		tower->TowerStop();
	else
		tower->ballup();
}

// Make this return true when this Command no longer needs to run execute()
bool BallUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BallUp::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BallUp::Interrupted() {
}
