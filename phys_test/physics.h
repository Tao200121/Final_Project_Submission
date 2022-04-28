#ifndef PHYSICS_H
#define PHYSICS_H

#include "structs.h"

int x_position(int x, float delt_x, struct ball* ball1);
int y_position(int y, float delt_y, struct ball* ball1, struct platform* platform1);
int platform_position(int left, int right, int delt_x, struct platform* platform1);

#endif