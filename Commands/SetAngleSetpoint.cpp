#include "SetAngleSetpoint.h"
#include "Math.h"

SetAngleSetpoint::SetAngleSetpoint(double s) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	
	//s = some conversion from angle to motor value
	setpoint = s;
	Requires(shooterAnglePIDsubsystem);
}

// Called just before this Command runs the first time
void SetAngleSetpoint::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void SetAngleSetpoint::Execute() {
	shooterAnglePIDsubsystem->SetSetpoint(setpoint);
}

// Make this return true when this Command no longer needs to run execute()
bool SetAngleSetpoint::IsFinished() {
	return fabs(shooterAnglePIDsubsystem->GetPosition() - setpoint < 0.01);
	/* took this from the example in Gear Bot. I think this is the perdentage of voltage
	 * at which the PID will stop moving the motor. In other words, this is defines when the setpoint has
	 * been reached. Again, this is conjecture, so I need help in clarifying this.
	 */
}

// Called once after isFinished returns true
void SetAngleSetpoint::End() {
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetAngleSetpoint::Interrupted() {
}
