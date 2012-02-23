#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
		static const int LEFTSTICK_PORT = 1;
		static const int RIGHTSTICK_PORT = 2;
		
		Joystick* leftstick;
		Joystick* rightstick;
		Button *leftbutton1;
		Button *leftbutton2;
		Button *leftbutton3;
		Button *rightbutton1;
		Button *rightbutton2;
		Button *rightbutton3;
//		DriverStationEnhancedIO *dsioButton1;

public:
	OI();
	Joystick* getLeftJoystick();
	Joystick* getRightJoystick();
//	DriverStationEnhancedIO* getDSIO();
};
#endif
