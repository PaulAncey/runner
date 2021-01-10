/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** anime_sprite
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

sfIntRect rect_helico(runner_t *runner)
{
    sfIntRect rect_helico;

    rect_helico.height = 100;
    rect_helico.left = 0;
    rect_helico.top = runner->skin_helico;
    rect_helico.width = 290;
    return (rect_helico);
}

sfIntRect rect_duck(runner_t *runner)
{
    sfIntRect rect_duck;

    rect_duck.height = 66;
    rect_duck.left = runner->skin_duck;
    rect_duck.top = 0;
    rect_duck.width = 66;
    return (rect_duck);
}

void anime_sprite(runner_t *runner, sfClock *clock_animation)
{
    if (runner->skin_helico >= 400)
        runner->skin_helico = 0;
    if (runner->skin_duck >= 198)
        runner->skin_duck = 0;
    sfSprite_setTextureRect(runner->sp_helico, rect_helico(runner));
    sfSprite_setTextureRect(runner->sp_win_h1, rect_helico(runner));
    sfSprite_setTextureRect(runner->sp_win_h2, rect_helico(runner));
    sfSprite_setTextureRect(runner->sp_win_h3, rect_helico(runner));
    sfSprite_setTextureRect(runner->sp_win_h4, rect_helico(runner));
    sfSprite_setTextureRect(runner->sp_d1, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d2, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d3, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d4, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d5, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d6, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d7, rect_duck(runner));
    sfSprite_setTextureRect(runner->sp_d8, rect_duck(runner));
    runner->skin_helico += 100;
    runner->skin_duck += 66;
    sfClock_restart(clock_animation);
}

void hit_box(sfRenderWindow *window, runner_t *runner)
{
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d1, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d2, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d3, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d4, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d5, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d6, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d7, NULL))
        runner->cp_background = 3;
    if (sfFloatRect_intersects(&runner->my_hb, &runner->hb_d8, NULL))
        runner->cp_background = 3;
}
