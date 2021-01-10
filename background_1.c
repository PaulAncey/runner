/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** background_1
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

void background_1_2(sfRenderWindow *window, runner_t *runner)
{
    sfSprite_setPosition(runner->para4, runner->v_para4);
    sfSprite_setPosition(runner->para5, runner->v_para5);
    sfSprite_setPosition(runner->para6, runner->v_para6);
    sfSprite_setPosition(runner->para7, runner->v_para7);
    sfRenderWindow_drawSprite(window, runner->para1, NULL);
    sfRenderWindow_drawSprite(window, runner->para2, NULL);
    sfRenderWindow_drawSprite(window, runner->para3, NULL);
    sfRenderWindow_drawSprite(window, runner->para4, NULL);
    sfRenderWindow_drawSprite(window, runner->para5, NULL);
    sfRenderWindow_drawSprite(window, runner->para6, NULL);
    sfRenderWindow_drawSprite(window, runner->para7, NULL);
    sfSprite_setPosition(runner->sp_win_h2, runner->v_win_2);
    sfSprite_setPosition(runner->sp_win_h3, runner->v_win_3);
    sfSprite_setPosition(runner->sp_win_h4, runner->v_win_4);
    sfRenderWindow_drawSprite(window, runner->sp_win_h2, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_win_h3, NULL);
    sfRenderWindow_drawSprite(window, runner->sp_win_h4, NULL);
    sfSprite_setPosition(runner->sp_d1,runner->v_d1);
    background_1_3(window, runner);
}

void background_1(sfRenderWindow *window, runner_t *runner)
{
    sfRenderWindow_clear(window, sfBlack);
    moove_para(runner);
    runner->score += 1;
    runner->str_score = nb_to_str(runner->score);
    if (runner->v_helico.y > 5)
        runner->v_helico.y += runner->h_up;
    else if (runner->h_up == 4)
        runner->v_helico.y += runner->h_up;
    if (runner->v_helico.x + 250 < 1555)
        runner->v_helico.x += runner->h_right;
    if (runner->v_helico.x > 5)
        runner->v_helico.x += runner->h_left;
    if (runner->v_helico.y + 120 > 900)
        runner->cp_background = 3;
    sfSprite_setPosition(runner->sp_helico, runner->v_helico);
    runner->my_hb = sfSprite_getGlobalBounds(runner->sp_helico);
    sfSprite_setPosition(runner->para2, runner->v_para2);
    sfSprite_setPosition(runner->para3, runner->v_para3);
    background_1_2(window, runner);
}

void background_menu(sfRenderWindow *window, runner_t *runner)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, runner->sp_background_0, NULL);
    sfText_setPosition(runner->txt_play, runner->v_play);
    sfText_setPosition(runner->txt_sound, runner->v_txt_sound);
    sfRenderWindow_drawText(window, runner->txt_sound, NULL);
    sfRenderWindow_drawText(window, runner->txt_close, NULL);
    sfSprite_setPosition(runner->sp_cross, runner->v_cross);
    sfText_setPosition(runner->txt_cross, runner->v_txt_cross);
    sfRenderWindow_drawText(window, runner->txt_cross, NULL);
    sfRenderWindow_drawSprite(window ,runner->sp_cross, NULL);
    sfRenderWindow_drawText(window, runner->txt_play, NULL);
    sfRenderWindow_display(window);
}

void choose_background(sfRenderWindow *window, runner_t *runner, 
sfClock *clock_game)
{
    if (runner->cp_background == 0)
        background_menu(window, runner);
    if (runner->cp_background == 1)
        background_1(window, runner);
    if (runner->cp_background == 2)
        background_win(window, runner);
    if (runner->cp_background == 3)
        background_loose(window, runner);
    sfClock_restart(clock_game);
    return;
}
