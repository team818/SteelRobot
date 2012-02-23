#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/Tower.h"
#include "Subsystems/ShooterRotation.h"
#include "Subsystems/ShooterAnglePIDSubsystem.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static Drivetrain *drivetrain;
	static Tower *tower;
	static ShooterRotation *shooterrotation;
	static ShooterAnglePIDSubsystem *shooterAnglePIDsubsystem;
	static OI *oi;
};

#endif
