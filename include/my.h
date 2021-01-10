/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myrunner-paul.ancey
** File description:
** my
*/
#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <fcntl.h>
#include <SFML/Audio.h>
#include <unistd.h>

typedef struct runner
{
    unsigned int width;
    unsigned int height;
    unsigned int bbp;
    char *title;
    int cp_background;
    int skin_helico;
    int h_up;
    int h_down;
    int h_right;
    int h_left;
    int skin_duck;
    char *map;
    int i;
    int cp_map;
    int vol;
    int score;
    char *str_score;

    //menu 
    sfSprite *sp_background_0;
    sfText *txt_play;
    sfVector2f v_play;
    sfText *txt_sound;
    sfVector2f v_txt_sound;
    sfVector2f v_txt_cross;
    sfText *txt_cross;
    sfSprite *sp_cross;
    sfVector2f v_cross;
    
    //parallax
    sfSprite *para1;
    sfSprite *para2;
    sfSprite *para3;
    sfSprite *para4;
    sfSprite *para5;
    sfSprite *para6;
    sfSprite *para7;
    sfVector2f v_para2;
    sfVector2f v_para3;
    sfVector2f v_para4;
    sfVector2f v_para5;
    sfVector2f v_para6;
    sfVector2f v_para7;

    sfVideoMode video_mode;
    sfSprite *sp_helico;
    sfTexture *t_helico;
    sfVector2f v_helico;
    sfFloatRect my_hb;
    sfText *txt_close;
    sfText *txt_score;
    sfText *txt_int_score;
    sfVector2f v_int_score;

    //enemy
    sfSprite *sp_d1;
    sfSprite *sp_d2;
    sfSprite *sp_d3;
    sfSprite *sp_d4;
    sfSprite *sp_d5;
    sfSprite *sp_d6;
    sfSprite *sp_d7;
    sfSprite *sp_d8;
    sfVector2f v_d1;
    sfVector2f v_d2;    
    sfVector2f v_d3;
    sfVector2f v_d4;
    sfVector2f v_d5;
    sfVector2f v_d6;
    sfVector2f v_d7;
    sfVector2f v_d8;
    sfFloatRect hb_d1;
    sfFloatRect hb_d2;
    sfFloatRect hb_d3;
    sfFloatRect hb_d4;
    sfFloatRect hb_d5;
    sfFloatRect hb_d6;
    sfFloatRect hb_d7;
    sfFloatRect hb_d8;
    int mv_d1;
    int mv_d2;
    int mv_d3;
    int mv_d4;
    int mv_d5;
    int mv_d6;
    int mv_d7;
    int mv_d8;

    //win
    sfSprite *sp_win_h1;
    sfSprite *sp_win_h2;
    sfSprite *sp_win_h3;
    sfSprite *sp_win_h4;
    sfVector2f v_win_1;
    sfVector2f v_win_2;
    sfVector2f v_win_3;
    sfVector2f v_win_4;
    sfText *txt_win;
    sfVector2f v_win_txt;

    //loose
    sfText *txt_loose;
    sfVector2f v_txt_loose;

    //MUSIC 
    sfMusic *music;
    sfMusic *coin;

}runner_t;

sfRenderWindow *create_my_window(runner_t *runner, sfRenderWindow *window);
sfText *do_txt(char *str, int taille);
sfSprite *do_spr(sfTexture *texture);
sfVector2f do_vec(int x, int y);
void moove_para(runner_t *runner);
void background_loose(sfRenderWindow *window, runner_t *runner);
void background_win_2(sfRenderWindow *window, runner_t *runner);
void background_win(sfRenderWindow *window, runner_t *runner);
void moove_duck(runner_t *runner);
void moove_duck_2(runner_t *runner);
void mus_coin(runner_t *runner);
void map(sfRenderWindow *window, runner_t *runner, sfClock *duck);
char *my_revstr(char *str);
char *nb_to_str(int nb);
void tp_duck_2(runner_t *runner);
void tp_duck(runner_t *runner);
void background_1_4(sfRenderWindow *window, runner_t *runner);
void background_1_3(sfRenderWindow *window, runner_t *runner);
void background_1_2(sfRenderWindow *window, runner_t *runner);
void background_1(sfRenderWindow *window, runner_t *runner);
void background_menu(sfRenderWindow *window, runner_t *runner);
void choose_background(sfRenderWindow *window, runner_t *runner, sfClock *clock_game);
sfIntRect rect_helico(runner_t *runner);
sfIntRect rect_duck(runner_t *runner);
void anime_sprite(runner_t *runner, sfClock *clock_animation);
void hit_box(sfRenderWindow *window, runner_t *runner);
void filter_event_2(runner_t *runner, sfRenderWindow *window, sfEvent event);
void filter_event(runner_t *runner, sfRenderWindow *window, sfEvent event);
void set_sprite_2(runner_t *runner, sfRenderWindow *window);
void set_sprite(runner_t *runner, sfRenderWindow *window);
void init_runner_3(runner_t *runner, sfRenderWindow *window);
void init_runner_2(runner_t *runner, sfRenderWindow *window);
void init_runner(runner_t *runner, sfRenderWindow *window);
int init(sfRenderWindow *window, runner_t *runner, char **av, int ac);
int tiret(int ac, char **av);


#endif /* !MY_H_ */
