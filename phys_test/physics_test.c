#include "physics.h"

#include <stdlib.h>
#include "ctest.h"


CTEST_DATA(x_direction) {
    struct ball ball1;
    float delt_x;
};

CTEST_SETUP(x_direction) {
    data->ball1.ball_x_position = 30;
    data->ball1.ball_y_position = 20;
    data->delt_x = 2;
    data->ball1.ball_x_position = x_position(data->ball1.ball_x_position, data->delt_x, &(data->ball1));
}

CTEST2(x_direction, test_process) {
        ASSERT_EQUAL(32, (int)data->ball1.ball_x_position);
}

CTEST_DATA(x_direction2) {
    struct ball ball1;
    float delt_x;
};
CTEST_SETUP(x_direction2) {
    data->ball1.ball_x_position = 118;
    data->ball1.ball_y_position = 20;
    data->delt_x = 2;
    data->ball1.ball_x_position = x_position(data->ball1.ball_x_position, data->delt_x, &(data->ball1));
}

CTEST2(x_direction2, test_process2) {
    ASSERT_EQUAL(116, (int)data->ball1.ball_x_position);
}

CTEST_DATA(x_direction3) {
    struct ball ball1;
    float delt_x;
};
CTEST_SETUP(x_direction3) {
    data->ball1.ball_x_position = 5;
    data->ball1.ball_y_position = 20;
    data->delt_x = -2;
    data->ball1.ball_x_position = x_position(data->ball1.ball_x_position, data->delt_x, &(data->ball1));
}

CTEST2(x_direction3, test_process3) {
    ASSERT_EQUAL(17, (int)data->ball1.ball_x_position);
}

