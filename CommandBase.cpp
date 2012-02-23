#include "CommandBase.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
Drivetrain* CommandBase::drivetrain = NULL;
Tower* CommandBase::tower = NULL;
ShooterRotation* CommandBase::shooterrotation = NULL;
ShooterAnglePIDSubsystem* CommandBase::shooterAnglePIDsubsystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drivetrain = new Drivetrain();
	tower = new Tower();
	shooterrotation = new ShooterRotation();
	shooterAnglePIDsubsystem = new ShooterAnglePIDSubsystem();
	
	oi = new OI(); //OI stands for operator interface
}
