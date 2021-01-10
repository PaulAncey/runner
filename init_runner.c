/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** init_runner
*/
#include "include/my.h"
#include "my_printf/include/printf_my.h"

void set_sprite(runner_t *runner, sfRenderWindow *window)
{
    runner->sp_helico = 
    do_spr(sfTexture_createFromFile("data/helico.png", NULL));
    runner->para1 = do_spr(sfTexture_createFromFile("data/sky.png", NULL));
    runner->para2 = do_spr(sfTexture_createFromFile("data/para3.png", NULL));
    runner->para3 = do_spr(sfTexture_createFromFile("data/para4.png", NULL));
    runner->para4 = do_spr(sfTexture_createFromFile("data/para2.png", NULL));
    runner->para5 = do_spr(sfTexture_createFromFile("data/clouds1.png", NULL));
    runner->para6 = do_spr(sfTexture_createFromFile("data/para1.png", NULL));
    runner->para7 = do_spr(sfTexture_createFromFile("data/clouds2.png", NULL));
    runner->sp_win_h1 = 
    do_spr(sfTexture_createFromFile("data/helico.png", NULL));
    runner->sp_win_h2 = 
    do_spr(sfTexture_createFromFile("data/ocileh.png", NULL));
    runner->sp_win_h3 = 
    do_spr(sfTexture_createFromFile("data/helico.png", NULL));
    runner->sp_win_h4 = 
    do_spr(sfTexture_createFromFile("data/ocileh.png", NULL));
    runner->sp_background_0 = 
    do_spr(sfTexture_createFromFile("data/menu.png", NULL));
    set_sprite_2(runner, window);
}

void init_runner_3(runner_t *runner, sfRenderWindow *window)
{
    runner->i = 3;
    runner->vol = 0;
    runner->v_play = do_vec(450,350);
    runner->txt_loose = do_txt("YOU LOOSE", 162);
    runner->v_txt_loose = do_vec(0, 300);
    runner->v_txt_sound = do_vec(1300, 0);
    runner->v_txt_cross = do_vec(1000, 850);
    runner->v_cross = do_vec(1350, 700);
    runner->v_int_score = do_vec(200, 0);
    set_sprite(runner, window);
}

void init_runner_2(runner_t *runner, sfRenderWindow *window)
{
    runner->v_win_txt = do_vec (0, 300);
    runner->v_d1 = do_vec(1700, 100);
    runner->v_d2 = do_vec(1700, 300);
    runner->v_d3 = do_vec(1700, 500);
    runner->v_d4 = do_vec(1700, 700);
    runner->v_d5 = do_vec(100, -100);
    runner->v_d6 = do_vec(300, -100);
    runner->v_d7 = do_vec(1400, -100);
    runner->v_d8 = do_vec(1200, -100);
    runner->mv_d1 = 0;
    runner->mv_d2 = 0;
    runner->mv_d3 = 0;
    runner->mv_d4 = 0;
    runner->mv_d5 = 0;
    runner->mv_d6 = 0;
    runner->mv_d7 = 0;
    runner->mv_d8 = 0;
    runner->cp_map = 0;
    init_runner_3(runner, window);
}

void init_runner(runner_t *runner, sfRenderWindow *window)
{
    runner->height = 900;
    runner->bbp = 32;
    runner->width = 1600;
    runner->title = "my_runner";
    runner->cp_background = 0;
    runner->h_up = 0;
    runner->h_right = 0;
    runner->h_left = 0;
    runner->v_helico = do_vec(600,400);
    runner->v_para2 = do_vec(0, 0);
    runner->v_para3 = do_vec(0, 0);
    runner->v_para4 = do_vec(0, 0);
    runner->v_para5 = do_vec(0, 0);
    runner->v_para6 = do_vec(0, 0);
    runner->v_para7 = do_vec(0, 0);
    runner->v_win_2 = do_vec(13200, 200);
    runner->v_win_3 = do_vec(12100, 100);
    runner->v_win_4 = do_vec(13100, 700);
    runner->txt_win = do_txt("YOU WON", 200);
    init_runner_2(runner, window);
    return;
}

int init(sfRenderWindow *window, runner_t *runner, char **av, int ac)
{
    int fd = 0;

    if (tiret(ac, av) == 84)
        return (84);
    fd = open(av[1], O_RDONLY);
    runner->music = sfMusic_createFromFile("data/music.ogg");
    sfMusic_setVolume(runner->music, 5);
    sfMusic_play(runner->music);
    runner->map = malloc(sizeof(8));
    read(fd,runner->map, 8);
    init_runner(runner, window);
    return (0);
}
