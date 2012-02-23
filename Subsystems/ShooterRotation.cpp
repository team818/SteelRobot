#include "ShooterRotation.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

ShooterRotation::ShooterRotation() : PIDSubsystem("ShooterRotation", Kp, Ki, Kd) {
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to...THIS GOES ALONG WITH THE TARGETING SOFTWARE
	TurretMotor = new Victor(TURRET_MOTOR);
	LeftLimit = new DigitalInput(LEFT_SHOOTER_LIMIT);
	RightLimit = new DigitalInput(RIGHT_SHOOTER_LIMIT);
	TurretGyro = new Gyro(TURRET_GYRO);
	TurretGyro->SetSensitivity(0.0125);
	Enable(); // Enables the PID controller. NEED TO HAVE THIS AT THE END
}
void ShooterRotation::SetNudge(){
//	float A = (pot.GetVoltage() - 1.65) * (270 / 3.3);  // need to add a pot from the cypress module
													// (max voltage = 3.3)
//	Nudge = A;
}
float ShooterRotation::AngleCorrect(float A, float B) {
	return A + B;
}

double ShooterRotation::ReturnPIDInput() {
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return AngleCorrect(TurretGyro->GetAngle(), Nudge);
}

void ShooterRotation::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	if(LeftLimit->Get()==1)
	{
		TurretMotor->SetSpeed(-1.00);
	}
	else if (RightLimit->Get()==1)
	{
		TurretMotor->SetSpeed(1.00);
	}
	else
	{
		TurretMotor->Set(output);
	}
}

void ShooterRotation::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
