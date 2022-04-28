/*
 * structs.h
 *
 *  Created on: Apr 21, 2022
 *      Author: brucytao200121
 */

#ifndef SRC_HEADER_FILES_STRUCTS_H_
#define SRC_HEADER_FILES_STRUCTS_H_

#define BLINK_TASK_STACK_SIZE      96

#define BLINK_TASK_PRIO            20


#define ZERO                        0

#define BUTTON_TASK_STACK_SIZE     512
#define BUTTON_TASK_PRIO           10

#define PHYSICS_TASK_STACK_SIZE    512
#define PHYSICS_TASK_PRIO          10

#define IDLE_TASK_STACK_SIZE        512
#define IDLE_TASK_PRIO              50

#define LED_TASK_STACK_SIZE        512
#define LED_TASK_PRIO              30

#define LCD_DISPLAY_TASK_STACK_SIZE        512
#define LCD_DISPLAY_TASK_PRIO              30

#define platform_TASK_STACK_SIZE        512
#define platform_TASK_PRIO              20

#define INCREMENT     5
#define DECREMENT     -5

#define BALL_RAD     8

#define MSG_Q_SIZE                  sizeof(int)

#define GRAVITY 1.1

#define TAU_PHYSICS 1

#define TAU_LCD  1

#define LEFT_WALL_X1  10
#define LEFT_WALL_Y1  10

#define LEFT_WALL_X2  10
#define LEFT_WALL_Y2  118

#define RIGHT_WALL_X1  118
#define RIGHT_WALL_Y1  10

#define RIGHT_WALL_X2  118
#define RIGHT_WALL_Y2  118

#define ENERGY_INCREASE 1.3
#define ENERGY_DECREASE 0.9

struct platform{
  int x_min;
  int x_max;
  int length;
  int y_position;
  float v;
  float acceleration;
  float platform_mass;
  float force;
  unsigned energy;
  int booster_ready_yet;
};

struct ball{
  int num_of_balls;
  unsigned diameter;
  int ball_x_position;
  int ball_y_position;
  unsigned mass;
  float vx;
  float vy;
};

struct shield{
  unsigned ke_reduction;
  unsigned boost;
  unsigned ke_increase;
  unsigned recharge_time;
};

#endif /* SRC_HEADER_FILES_STRUCTS_H_ */
