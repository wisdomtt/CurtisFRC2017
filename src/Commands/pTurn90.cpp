#include "pTurn90.h"

pTurn90::pTurn90() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::driveTrain.get());

}

// Called just before this Command runs the first time
void pTurn90::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void pTurn90::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool pTurn90::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void pTurn90::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void pTurn90::Interrupted() {

}
