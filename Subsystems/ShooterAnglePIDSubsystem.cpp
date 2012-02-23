#include "ShooterAnglePIDSubsystem.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"

ShooterAnglePIDSubsystem::ShooterAnglePIDSubsystem() : PIDSubsystem("ShooterAnglePIDSubsystem", Kp, Ki, Kd) {
	// Use these to get going:  
	// Enable() -.
	AngleMotor = new Victor(ANGLE_MOTOR);
	AnglePotA = new AnalogChannel(ANGLE_POT_A);
	AnglePotB = new AnalogChannel(ANGLE_POT_B);
	
	//SetSetpoint(...); //Sets where the PID controller should move the system to
	
	Enable(); // Enables the PID controller
}
void ShooterAnglePIDSubsystem::SetNudge(){
	//	float A = (pot.GetVoltage() - 1.65) * (270 / 3.3);  // need to add a pot from the cypress module
														// (max voltage = 3.3)
	//	Nudge = A;
}
float ShooterAnglePIDSubsystem::AngleCorrect(float A, float B){
	return A + B;
}
double ShooterAnglePIDSubsystem::ReturnPIDInput() {
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;

	float VoltA = AnglePotA->GetVoltage();
	float VoltB = AnglePotB->GetVoltage();
	float VoltRatio = VoltA / VoltB;
	
	return AngleCorrect(VoltRatio, Nudge);
	
}

void ShooterAnglePIDSubsystem::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	AngleMotor->SetSpeed(output);
}

void ShooterAnglePIDSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
