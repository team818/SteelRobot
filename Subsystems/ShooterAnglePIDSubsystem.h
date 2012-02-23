#ifndef SHOOTER_ANGLE_PID_SUBSYSTEM_H
#define SHOOTER_ANGLE_PID_SUBSYSTEM_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Team 818
 */
class ShooterAnglePIDSubsystem: public PIDSubsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	static const double Kp = 0.0;
	static const double Ki = 0.0;
	static const double Kd = 0.0;

	Victor *AngleMotor;
	AnalogChannel *AnglePotA;
	AnalogChannel *AnglePotB;
	
	float Nudge;
	
public:
	// static const double ... 
	
	
	ShooterAnglePIDSubsystem();
	void SetNudge();
	float AngleCorrect(float, float);
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
