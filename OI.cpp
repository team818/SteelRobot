#include "OI.h"

OI::OI() {
	// Process OPERATOR INTERFACES input here.
	leftstick = new Joystick(LEFTSTICK_PORT);
	rightstick = new Joystick(RIGHTSTICK_PORT);
	leftbutton1 = new JoystickButton(leftstick, 1); //left trigger
	leftbutton2 = new JoystickButton(leftstick, 2);
	leftbutton3 = new JoystickButton(leftstick, 3);
	rightbutton1 = new JoystickButton(rightstick, 1); //right trigger
	rightbutton2 = new JoystickButton(rightstick, 2);
	rightbutton3 = new JoystickButton(rightstick, 3);
	
}

Joystick * OI::getLeftJoystick()
{
	return leftstick;
}
Joystick * OI::getRightJoystick()
{
	return rightstick;
}
