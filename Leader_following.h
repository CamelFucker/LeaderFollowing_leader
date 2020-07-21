//
// Created by nvidia on 20-6-21.
//

#ifndef LEADERFOLLOWING_LEADER_FOLLOWING_H
#define LEADERFOLLOWING_LEADER_FOLLOWING_H

#endif //LEADERFOLLOWING_LEADER_FOLLOWING_H

#define SAMPLE_TIME 20000  //us
#define EXPECTED_DISTANCE 10

#include <thread>
#include <cmath>
#include <unistd.h>
#include <stdio.h>
#include <ctime>
#include <typeinfo>

#include "Communication.h"

extern int *CAN_acc_pedal_msg;
extern int *CAN_brake_msg;
extern int *CAN_steering_wheel_msg;
extern int *CAN_wheel_msg;
extern int *CAN_la_yr_msg;
extern int *CAN_gear_position_msg;
extern int *CAN_pedal_angle_msg;

