#ifndef SHOOTING_WHEEL_H
#define SHOOTING_WHEEL_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Scott
 */
class ShootingWheel: public PIDSubsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// set the P, I, and D constants here
	static const double Kp = 0.0;
	static const double Ki = 0.0;
	static const double Kd = 0.0;
	
	Victor* ShooterWheel;
	Encoder* ShooterWheelEncoder;
	
public:
	ShootingWheel();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
