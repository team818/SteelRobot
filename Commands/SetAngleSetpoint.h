#ifndef SET_ANGLE_SETPOINT_H
#define SET_ANGLE_SETPOINT_H

#include "../CommandBase.h"

/**
 * This command sets the setpoint for the shooting angle.
 * 
 * 
 */
class SetAngleSetpoint: public CommandBase {
private:
	double setpoint;
public:
	SetAngleSetpoint(double s);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();	
};

#endif
