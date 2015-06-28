
#include "Move.h"
#include "../OI.h"
#include "../WPILib/RobotDrive.h"
#include "../RobotMap.h"
#include "../WPILib/DriverStationLCD.h"


Move::Move() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// The following variables are automatically assigned by
	// robotbuilder and will be updated the next time you export to
	// Java from robot builder. Do not put any code or make any change
	// in the following block or it will be lost on an update. To
	// prevent this subsystem from being automatically updated, delete
	// the following line.
	wpi_assert(Robot::drive != NULL);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drive);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	joystick = Robot::m_pOperatorInterface->getJoystick();
}

// Called just before this Command runs the first time
void Move::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void Move::Execute() { 
	Robot::drive->ArcadeDrive (joystick);
}
// Make this return true when this Command no longer needs to run execute()
bool Move::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void Move::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Move::Interrupted() {
	printf("Command Interupted !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	End();
}
