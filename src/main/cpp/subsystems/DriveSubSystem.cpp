// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubSystem.h"


DriveSubSystem::DriveSubSystem() {
    SetName("DriveSubSystem");
    LeftBack.Follow(LeftFront);
    RightBack.Follow(RightFront);
    LeftFront.SetInverted(true);
    RightFront.SetInverted(false);
}

void DriveSubSystem::Drive(double xSpeed, double zRotation){
    m_robotDrive.ArcadeDrive(xSpeed, -zRotation);
}
// This method will be called once per scheduler run
void DriveSubSystem::Periodic() {}
