/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** main functions
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void draw_cursor2(game_scene_t *scenes, game_setting_t *settings)
{
   if (settings->current == victory)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S6].
      sprite, NULL);
   if (settings->current == defeat)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S7].
      sprite, NULL);
}

void draw_cursor(game_scene_t *scenes, game_setting_t *settings)
{
   if (settings->current == main_menu)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S0].
      sprite, NULL);
   if (settings->current == town)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S1].
      sprite, NULL);
   if (settings->current == boss)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S2].
      sprite, NULL);
   if (settings->current == forest)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S3].
      sprite, NULL);
   if (settings->current == beach)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S4].
      sprite, NULL);
   if (settings->current == camp)
      sfRenderWindow_drawSprite(settings->window, scenes->objs[CURSOR_O_S5].
      sprite, NULL);
   draw_cursor2(scenes, settings);
}