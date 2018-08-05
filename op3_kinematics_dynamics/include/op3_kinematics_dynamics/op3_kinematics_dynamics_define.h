/*******************************************************************************
* Copyright 2017 ROBOTIS CO., LTD.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/* Author: SCH */

#ifndef OP3_KINEMATICS_DYNAMICS_DEFINE_H_
#define OP3_KINEMATICS_DYNAMICS_DEFINE_H_

namespace robotis_op
{
// using 1 base link at index '0'
#define MAX_JOINT_ID    (31)
#define ALL_JOINT_ID    (41)  // = 10 (4 end - effectors, 6 DOF passive) + all robot joints (31 posable)

#define MAX_ARM_ID      (39)
#define MAX_LEG_ID      (18)
#define MAX_ITER        (5)

#define ID_HEAD_END     (27)
#define ID_COB          (29)
#define ID_TORSO        (29)

#define ID_R_ARM_START  (1)
#define ID_L_ARM_START  (2)
#define ID_R_ARM_END    (38)
#define ID_L_ARM_END    (39)

#define ID_R_LEG_START  (9)
#define ID_L_LEG_START  (10)
#define ID_R_LEG_END    (17)
#define ID_L_LEG_END    (18)

#define GRAVITY_ACCELERATION (9.8)
}

#endif /* OP3_KINEMATICS_DYNAMICS_DEFINE_H_ */
