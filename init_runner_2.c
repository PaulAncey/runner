/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** init_runner_2
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

void set_sprite_2(runner_t *runner, sfRenderWindow *window)
{
    runner->sp_d1 = do_spr(sfTexture_createFromFile("data/kcud.png", NULL));
    runner->sp_d2 = do_spr(sfTexture_createFromFile("data/kcud.png", NULL));
    runner->sp_d3 = do_spr(sfTexture_createFromFile("data/kcud.png", NULL));
    runner->sp_d4 = do_spr(sfTexture_createFromFile("data/kcud.png", NULL));
    runner->sp_d5 = do_spr(sfTexture_createFromFile("data/duck.png", NULL));
    runner->sp_d6 = do_spr(sfTexture_createFromFile("data/duck.png", NULL));
    runner->sp_d7 = do_spr(sfTexture_createFromFile("data/kcud.png", NULL));
    runner->sp_d8 = do_spr(sfTexture_createFromFile("data/kcud.png", NULL));
    runner->txt_play = do_txt("press 'enter' \n   to play",50);
    runner->txt_close = do_txt("press 'echap to quit", 20);
    runner->txt_sound = do_txt("press 'A' to \nstop sound", 20);
    runner->txt_cross = do_txt("use this to play :", 20);
    runner->sp_cross = 
    do_spr(sfTexture_createFromFile("data/cross.png", NULL));
    runner->txt_score = do_txt("score :", 25);
}