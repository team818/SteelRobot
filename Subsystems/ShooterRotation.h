#ifndef SHOOTERROATION_H
#define SHOOTERROTATION_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Team818
 */
class ShooterRotation: public PIDSubsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	static const double Kp = 0.0;
	static const double Ki = 0.0;
	static const double Kd = 0.0;
	
	Victor* TurretMotor;
	Gyro* TurretGyro;
	DigitalInput *LeftLimit;
	DigitalInput *RightLimit;
	
	float Nudge;
	
public:
	ShooterRotation();
	void SetNudge();
	float AngleCorrect(float, float);
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
