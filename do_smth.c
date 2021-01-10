/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** do_smth
*/
#include "include/my.h"

sfRenderWindow *create_my_window(runner_t *runner, sfRenderWindow *window)
{
    runner->video_mode.width = runner->width;
    runner->video_mode.height = runner->height;
    runner->video_mode.bitsPerPixel = runner->bbp;
    window = sfRenderWindow_create(runner->video_mode, runner->title, sfTitlebar 
    | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 240);
    return (window);
}

sfText *do_txt(char *str, int taille)
{
    sfText *text;

    text = sfText_create();
    sfText_setString(text, str);
    sfText_setFont(text, sfFont_createFromFile("data/Metro.otf"));
    sfText_setColor(text, sfBlack);
    sfText_setCharacterSize(text, taille);
    return (text);
}

sfSprite *do_spr(sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

sfVector2f do_vec(int x, int y)
{
    sfVector2f vector;

    vector.x = x;
    vector.y = y;
    return (vector);
}