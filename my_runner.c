/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-paul.ancey
** File description:
** my_runner
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"


void filter_event_2(runner_t *runner, sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyLeft)
        runner->h_left = -5;
    if (event.type == sfEvtKeyReleased && event.key.code == sfKeyLeft)
        runner->h_left = 0;
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyA) {
        sfMusic_setVolume(runner->music, 0);
        runner->vol = 1;
    }
}

void filter_event(runner_t *runner, sfRenderWindow *window, sfEvent event)
{
    hit_box(window, runner);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEnter &&
         runner->cp_background == 0)
            runner->cp_background = 1;
        if (event.type == sfEvtClosed || (event.type == sfEvtKeyPressed && 
            event.key.code == sfKeyEscape))
            sfRenderWindow_close(window);
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp) 
            runner->h_up = -5;
        if (event.type == sfEvtKeyReleased && event.key.code == sfKeyUp) 
            runner->h_up = 4;
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyRight)
            runner->h_right = 5;
        if (event.type == sfEvtKeyReleased && event.key.code == sfKeyRight)
            runner->h_right = 0;
        filter_event_2(runner, window, event);
    }
}

void destroy_all_2(runner_t *runner)
{
    sfSprite_destroy(runner->sp_background_0);
    sfSprite_destroy(runner->sp_cross);
    sfSprite_destroy(runner->sp_d1);
    sfSprite_destroy(runner->sp_d2);
    sfSprite_destroy(runner->sp_d3);
    sfSprite_destroy(runner->sp_d4);
    sfSprite_destroy(runner->sp_d5);
    sfSprite_destroy(runner->sp_d6);
    sfSprite_destroy(runner->sp_d7);
    sfSprite_destroy(runner->sp_d8);
    sfSprite_destroy(runner->sp_helico);
    sfSprite_destroy(runner->sp_win_h1);
    sfSprite_destroy(runner->sp_win_h2);
    sfSprite_destroy(runner->sp_win_h3);
    sfSprite_destroy(runner->sp_win_h4);
    sfSprite_destroy(runner->para1);
    sfSprite_destroy(runner->para2);
    sfSprite_destroy(runner->para3);
    sfSprite_destroy(runner->para4);
}

void destroy_all(runner_t *runner, sfRenderWindow *window, 
sfClock *clock_animation, sfClock *clock_game)
{
    sfSprite_destroy(runner->para5);
    sfSprite_destroy(runner->para6);
    sfSprite_destroy(runner->para7);
    sfText_destroy(runner->txt_close);
    sfText_destroy(runner->txt_cross);
    sfText_destroy(runner->txt_int_score);
    sfText_destroy(runner->txt_loose);
    sfText_destroy(runner->txt_play);
    sfText_destroy(runner->txt_score);
    sfText_destroy(runner->txt_sound);
    sfText_destroy(runner->txt_win);
    sfMusic_destroy(runner->music);
    sfMusic_destroy(runner->coin);
    sfClock_destroy(clock_game);
    sfClock_destroy(clock_animation);
    sfRenderWindow_destroy(window);
    free(runner);
}

int main (int ac, char **av)
{
    runner_t *runner = malloc(sizeof(runner_t));
    sfRenderWindow *window;
    sfClock *clock_game = sfClock_create();
    sfClock *duck = sfClock_create();
    sfClock *clock_animation = sfClock_create();
    sfEvent event;

    if (init(window, runner, av ,ac) == 84)
        return (0);
    window = create_my_window(runner, window);
    while(sfRenderWindow_isOpen(window)) {
        filter_event(runner, window, event);
        if (sfClock_getElapsedTime(clock_game).microseconds > 8000)
            choose_background(window, runner, clock_game);
        if (sfClock_getElapsedTime(clock_animation).microseconds > 80000)
            anime_sprite(runner, clock_animation);
        if (sfClock_getElapsedTime(duck).microseconds > 
        1300000 && runner->cp_background == 1)
            map(window, runner, duck);
    }
    destroy_all(runner, window, clock_animation, clock_game);
}