// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/drive/DifferentialDrive.h>

#include <frc2/command/SubsystemBase.h>
#include "rev/CANSparkMax.h"


class DriveSubSystem : public frc2::SubsystemBase {
 public:
  DriveSubSystem();

  void Drive(double y, double z);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  rev::CANSparkMax LeftBack = rev::CANSparkMax(1, rev::CANSparkMax::MotorType::kBrushless); //motor number unknown currently
  rev::CANSparkMax LeftFront = rev::CANSparkMax(2, rev::CANSparkMax::MotorType::kBrushless); //motor number unkown currently
  rev::CANSparkMax RightBack = rev::CANSparkMax(3, rev::CANSparkMax::MotorType::kBrushless); //motor number unkown currently
  rev::CANSparkMax RightFront = rev::CANSparkMax(4, rev::CANSparkMax::MotorType::kBrushless); //motor number unkown currently
  frc::DifferentialDrive m_robotDrive{LeftFront,RightFront};
  
};
