#include "physics.h"
#include <math.h>

int x_position(int x, float delt_x, struct ball* ball1)
{
  x += delt_x;
  int temp;
    if(x <= LEFT_WALL_X1)
    {
        ball1->vx = -1*ball1->vx;     //flip the velocity
        temp = LEFT_WALL_X1 - x;
        x = LEFT_WALL_X1 + temp;
    }
    else if(x >= RIGHT_WALL_X1)
      {
        ball1->vx = -1*ball1->vx;
        temp = x - RIGHT_WALL_X1;
        x = RIGHT_WALL_X1 - temp;
      }

    return x;
}

int y_position(int y, float delt_y, struct ball* ball1, struct platform* platform1)
{
  y += delt_y;
  float ke;
  int temp1;
  if(y <= LEFT_WALL_Y1)
    {
      //win
    }
  else if(y >= LEFT_WALL_Y2 && ball1->ball_x_position <= platform1->x_max && ball1->ball_x_position >= platform1->x_min)
    {
      ke = 0.5 * (ball1->mass * ball1->vy * ball1->vy);
      if(platform1->energy == 0)
        {
          ke = ENERGY_DECREASE * ke;
        }
      else if(platform1->energy == 1)
        {
          ke = ENERGY_INCREASE * ke;
        }

    //   ball1->vy = sqrtf((2*ke/ball1->mass));
//      ball1->vy = ENERGY_DECREASE * ball1->vy;
      ball1->vy = -1*ball1->vy;

      temp1 = y - LEFT_WALL_Y2;
      y = LEFT_WALL_Y2 - temp1;
    }

  return y;
}


int platform_position(int left, int right, int delt_x, struct platform* platform1)
{
  left += delt_x;
  right += delt_x;
  int temp;
  if(right >= RIGHT_WALL_X1)
    {
      platform1->v = -1*platform1->v;
      temp = right - RIGHT_WALL_X1;
      right = RIGHT_WALL_X1 - temp;
      left = right - platform1->length;
    }
  else if(left <= LEFT_WALL_X1)
    {
      platform1->v = -1*platform1->v;
      temp = LEFT_WALL_X1 - left;
      left = LEFT_WALL_X1 + temp;

    }
  return left;
}