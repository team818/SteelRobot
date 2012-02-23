#include "BallDown.h"

BallDown::BallDown() {
	// Use requires() here to declare subsystem dependencies
	Requires(tower);
}

// Called just before this Command runs the first time
void BallDown::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BallDown::Execute() {
	//put code here to move balls down when button is pressed
}

// Make this return true when this Command no longer needs to run execute()
bool BallDown::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BallDown::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BallDown::Interrupted() {
}
