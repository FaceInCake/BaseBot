#ifndef _DRIVETRAIN_HG_
#define _DRIVETRAIN_HG_

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include <ctre/Phoenix.h>
#include <Drive/DifferentialDrive.h>
#include "RobotMap.h"
#include <Commands/DriveWithJoystick.h>

class DriveTrain : public frc::Subsystem {
 public:
  DriveTrain();
  void InitDefaultCommand() override;

  void ArcadeDrive(double xSpeed, double zRotation);
	void TankDrive(double leftSpeed, double rightSpeed);
	void RaiderDrive(double force, double curve, bool isQuickTurn);

 private:
  can::WPI_TalonSRX* pLeftFrontMotor;
	can::WPI_TalonSRX* pLeftRearMotor;
	can::WPI_TalonSRX* pRightFrontMotor;
	can::WPI_TalonSRX* pRightRearMotor;

	frc::DifferentialDrive* pRobotDrive;
	
	double rd_LeftSpeed;
	double rd_RightSpeed;
};

#endif // _DRIVETRAIN_HG_