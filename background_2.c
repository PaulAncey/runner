/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** background_1
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

void background_loose(sfRenderWindow *window, runner_t *runner)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, runner->para1, NULL);
    sfRenderWindow_drawSprite(window, runner->para2, NULL);
    sfRenderWindow_drawSprite(window, runner->para3, NULL);
    sfRenderWindow_drawSprite(window, runner->para4, NULL);
    sfRenderWindow_drawSprite(window, runner->para5, NULL);
    sfRenderWindow_drawSprite(window, runner->para6, NULL);
    sfRenderWindow_drawSprite(window, runner->para7, NULL);
    sfText_setPosition(runner->txt_loose, runner->v_txt_loose);
    sfRenderWindow_drawText(window, runner->txt_loose, NULL);
    sfRenderWindow_drawText(window, runner->txt_int_score, NULL);
    sfRenderWindow_drawText(window, runner->txt_score, NULL);
    sfRenderWindow_display(window);
}

void background_win_2(sfRenderWindow *window, runner_t *runner)
{
    sfRenderWindow_drawText(window, runner->txt_win, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_win_h1, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_win_h2, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_win_h3, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_win_h4, NULL);
    sfRenderWindow_drawText(window, runner->txt_int_score, NULL);
    sfRenderWindow_drawText(window, runner->txt_score, NULL);
}

void background_win(sfRenderWindow *window, runner_t *runner)
{
    sfRenderWindow_clear(window, sfBlack);
    runner->v_win_1 = do_vec(runner->v_helico.x, runner->v_helico.y);
    sfSprite_setPosition(runner->sp_win_h1, runner->v_win_1);
    sfSprite_setPosition(runner->sp_win_h2, runner->v_win_2);
    sfSprite_setPosition(runner->sp_win_h3, runner->v_win_3);
    sfSprite_setPosition(runner->sp_win_h4, runner->v_win_4);
    sfText_setPosition(runner->txt_win, runner->v_win_txt);
    sfRenderWindow_drawSprite(window, runner->para1, NULL);
    sfRenderWindow_drawSprite(window, runner->para2, NULL);
    sfRenderWindow_drawSprite(window, runner->para3, NULL);
    sfRenderWindow_drawSprite(window, runner->para4, NULL);
    sfRenderWindow_drawSprite(window, runner->para5, NULL);
    sfRenderWindow_drawSprite(window, runner->para6, NULL);
    sfRenderWindow_drawSprite(window, runner->para7, NULL);
    background_win_2(window, runner);
    sfRenderWindow_display(window);
}

void background_1_4(sfRenderWindow *window, runner_t *runner)
{
    sfRenderWindow_drawSprite(window, runner->sp_d4, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_d5, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_d6, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_d7, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_d8, NULL);
    runner->v_win_2.x -= 3;
    runner->v_win_3.x -= 3;
    runner->v_win_4.x -= 3;
    if (runner->v_win_3.x <= 100)
        (runner->cp_background = 2);
    moove_duck(runner);
    tp_duck(runner);
    runner->txt_int_score = do_txt(runner->str_score, 25);
    sfText_setPosition(runner->txt_int_score, runner->v_int_score);
    sfRenderWindow_drawText(window, runner->txt_int_score, NULL);
    sfRenderWindow_drawText(window, runner->txt_score, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_helico, NULL);
    sfRenderWindow_display(window);
}

void background_1_3(sfRenderWindow *window, runner_t *runner)
{
    sfSprite_setPosition(runner->sp_d2,runner->v_d2);
    sfSprite_setPosition(runner->sp_d3,runner->v_d3);
    sfSprite_setPosition(runner->sp_d4,runner->v_d4);
    sfSprite_setPosition(runner->sp_d5,runner->v_d5);
    sfSprite_setPosition(runner->sp_d6,runner->v_d6);
    sfSprite_setPosition(runner->sp_d7,runner->v_d7);
    sfSprite_setPosition(runner->sp_d8,runner->v_d8);
    runner->hb_d1 = sfSprite_getGlobalBounds(runner->sp_d1);
    runner->hb_d2 = sfSprite_getGlobalBounds(runner->sp_d2);
    runner->hb_d3 = sfSprite_getGlobalBounds(runner->sp_d3);
    runner->hb_d4 = sfSprite_getGlobalBounds(runner->sp_d4);
    runner->hb_d5 = sfSprite_getGlobalBounds(runner->sp_d5);
    runner->hb_d6 = sfSprite_getGlobalBounds(runner->sp_d6);
    runner->hb_d7 = sfSprite_getGlobalBounds(runner->sp_d7);
    runner->hb_d8 = sfSprite_getGlobalBounds(runner->sp_d8);
    sfRenderWindow_drawSprite(window, runner->sp_d1, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_d2, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_d3, NULL);
    background_1_4(window, runner);
}
