/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** moove_sp
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

void moove_para(runner_t *runner)
{
    runner->v_para2.x -= 1;
    if (runner->v_para2.x <= -1600)
        runner->v_para2.x = 0;
    runner->v_para3.x -= 2;
    if (runner->v_para3.x <= -1600)
        runner->v_para3.x = 0;
    runner->v_para4.x -= 3;
    if (runner->v_para4.x <= -1600)
        runner->v_para4.x = 0;
    runner->v_para5.x -= 4;
    if (runner->v_para5.x <= -1600)
        runner->v_para5.x = 0;
    runner->v_para6.x -= 5;
    if (runner->v_para6.x <= -1600)
        runner->v_para6.x = 0;
    runner->v_para7.x -= 6;
    if (runner->v_para7.x <= -1600)
        runner->v_para7.x = 0;
}

void moove_duck_2(runner_t *runner)
{
    if (runner->mv_d5 == 1) {
        runner->v_d5.x += 4;
        runner->v_d5.y += 2;
    }
    if (runner->mv_d6 == 1){
        runner->v_d6.x += 3;
        runner->v_d6.y += 2;
    }
    if (runner->mv_d7 == 1) {
        runner->v_d7.x += -1;
        runner->v_d7.y += 3;
    }
    if (runner->mv_d8 == 1) {
        runner->v_d8.x += -4;
        runner->v_d8.y += 1;
    }
    return;
}

void moove_duck(runner_t *runner)
{
    if (runner->mv_d1 == 1) {
        runner->v_d1.x += -5;
        runner->v_d1.y += 1;
    }
    if (runner->mv_d2 == 1) {
        runner->v_d2.x += -5;
        runner->v_d2.y += 0.5;
    }
    if (runner->mv_d3 == 1) {
        runner->v_d3.x += -2;
        runner->v_d3.y += runner->i;
        if (runner->v_d3.y >= 800)
            runner->i = -3;
        if (runner->v_d3.y <= 10)
            runner->i = 3;
    }
    if (runner->mv_d4 == 1) {
        runner->v_d4.x += -5;
        runner->v_d4.y += -1,5;
    }
    moove_duck_2(runner);
}

void tp_duck_2(runner_t *runner)
{
     if (runner->v_d5.x > 1700) {
        runner->v_d5.x = 100;
        runner->v_d5.y = -100;
    }
    if (runner->v_d6.x > 1700) {
        runner->v_d6.x = 300;
        runner->v_d6.y = 100;
    }
    if (runner->v_d7.y > 1000) {
        runner->v_d7.x = 1400;
        runner->v_d7.y = -100;
    }
    if (runner->v_d8.x > 1700) {
        runner->v_d8.x = 1200;
        runner->v_d8.y = -100;
    }
    return;
}

void tp_duck(runner_t *runner)
{
    if (runner->v_d1.x < -100) {
        runner->v_d1.x = 1700;
        runner->v_d1.y = 100;
    }
    if (runner->v_d2.x < -100) {
        runner->v_d2.x = 1700;
        runner->v_d2.y = 300;
    }
    if (runner->v_d3.x < -100) {
        runner->v_d3.x = 1700;
        runner->v_d3.y = 500;
    }
    if (runner->v_d4.x < -100) {
        runner->v_d4.x = 1700;
        runner->v_d4.y = 700;
    }
    tp_duck_2(runner);
    return;
}
