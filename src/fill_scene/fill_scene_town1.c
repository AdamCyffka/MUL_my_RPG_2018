/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene town 1
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_town5(game_scene_t town)
{
    town.objs[ME_O_S1] = new_object("assets/me.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[PANNEL_O_S1] = new_object("assets/pannel.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 500, 500}, -1);
    town.objs[TOWN_O_S1] = new_object("assets/map_town.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    town.objs[DICK_O_S1] = new_object("assets/dick.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[EMILY_O_S1] = new_object("assets/emily.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[SHEEP_O_S1] = new_object("assets/sheep.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[JODI_O_S1] = new_object("assets/jodi.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[LEWIS_O_S1] = new_object("assets/lewis.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    town.objs[PIERRE_O_S1] = new_object("assets/pierre.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    fill_scene_town6(town);
}

void fill_scene_town4(game_scene_t town)
{
    town.texts[NAME_T_S1] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
    town.texts[VSYNC_T_S1] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    town.texts[XP_T_S1] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    town.texts[POS_T_S1] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    town.texts[LIFE_T_S1] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    town.objs[OBSTACLE_O_S1] = new_object("assets/obstacle.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, -1);
    town.objs[OPTION_O_S1] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[INVENTORY_O_S1] = new_object("assets/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, 0);
    town.objs[EXIT_O_S1] = new_object("assets/exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_town5(town);
}

void fill_scene_town3(game_scene_t town)
{
    town.buttons[WALKABLE13_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {440, 500}, (sfIntRect) {0, 0, 47, 280}, 0-1);
    town.buttons[WALKABLE14_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {155, 735}, (sfIntRect) {0, 0, 287, 42}, -1);
    town.buttons[WALKABLE15_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {485, 590}, (sfIntRect) {0, 0, 402, 45}, -1);
    town.buttons[WALKABLE16_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 41, 428}, -1);
    town.buttons[WALKABLE17_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {890, 790}, (sfIntRect) {0, 0, 359, 36}, -1);
    town.buttons[OPTION_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, 0);
    town.buttons[INVENTORY_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, 0);
    town.buttons[EXIT_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, 0);
    town.buttons[ME_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, 0);
    town.sounds[BOSS_S_S1] = new_sound("assets/music_boss.ogg", sfFalse, 100);
    town.sounds[MUSIC_S_S1] = new_sound("assets/music_town.ogg", sfFalse, 100);
    town.sounds[CLICK_S_S1] = new_sound("assets/click.ogg", sfFalse, 100);
    town.sounds[WALK_S_S1] = new_sound("assets/walk_rock.ogg", sfFalse, 100);
    town.sounds[SWORD_S_S1] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    town.texts[VOLUME_T_S1] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    fill_scene_town4(town);
}

void fill_scene_town2(game_scene_t town)
{
    town.buttons[WALKABLE4_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {760, 90}, (sfIntRect) {0, 0, 49, 150}, -1);
    town.buttons[WALKABLE5_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {805, 140}, (sfIntRect) {0, 0, 438, 35}, -1);
    town.buttons[WALKABLE6_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {730, 290}, (sfIntRect) {0, 0, 35, 62}, -1);
    town.buttons[WALKABLE7_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {760, 320}, (sfIntRect) {0, 0, 186, 31}, -1);
    town.buttons[WALKABLE8_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {770, 350}, (sfIntRect) {0, 0, 35, 111}, -1);
    town.buttons[WALKABLE9_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {900, 340}, (sfIntRect) {0, 0, 202, 157}, -1);
    town.buttons[WALKABLE10_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {1100, 400}, (sfIntRect) {0, 0, 76, 105}, -1);
    town.buttons[WALKABLE11_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {747, 450}, (sfIntRect) {0, 0, 134, 92}, -1);
    town.buttons[WALKABLE12_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {615, 450}, (sfIntRect) {0, 0, 132, 28}, -1);
    fill_scene_town3(town);
}

void fill_scene_town1(game_scene_t town)
{
    town.buttons[TITLE_B_S1] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, -1);
    town.buttons[DESKTOP_B_S1] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, -1);
    town.buttons[CLOSE_B_S1] = new_button("assets/close.png",
    (sfVector2f) {1400, 200}, (sfIntRect) {0, 0, 30, 30}, -1);
    town.buttons[PLUS_B_S1] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, -1);
    town.buttons[MINUS_B_S1] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, -1);
    town.buttons[MUTE_B_S1] = new_button("assets/mute.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 48, 48}, -1);
    town.buttons[WALKABLE1_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {0, 160}, (sfIntRect) {0, 0, 453, 43}, -1);
    town.buttons[WALKABLE2_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {400, 201}, (sfIntRect) {0, 0, 362, 89}, -1);
    town.buttons[WALKABLE3_B_S1] = new_button("assets/invisible.png",
    (sfVector2f) {350, 290}, (sfIntRect) {0, 0, 265, 213}, -1);
    fill_scene_town2(town);
}
