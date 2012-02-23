#include "ShootingWheel.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

ShootingWheel::ShootingWheel() : PIDSubsystem("ShootingWheel", Kp, Ki, Kd) {
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
	ShooterWheel = new Victor(SHOOTER_MOTOR);
	ShooterWheelEncoder = new Encoder(SHOOTER_WHEEL_ENCODER_A, SHOOTER_WHEEL_ENCODER_B, true);
//	SetSetpoint(# of rpms);
	Enable();
}

double ShootingWheel::ReturnPIDInput() {
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return ShooterWheelEncoder->GetRaw();
}

void ShootingWheel::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	ShooterWheel->Set(output);
}

void ShootingWheel::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
