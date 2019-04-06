/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** fill scene boss
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void fill_scene_boss5(game_scene_t boss)
{
    boss.objs[EXIT_O_S2] = new_object("assets/exit.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    boss.objs[ME_O_S2] = new_object("assets/me.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    boss.objs[PANNEL_O_S2] = new_object("assets/pannel.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 500, 500}, -1);
    boss.objs[MINIMAP_O_S2] = new_object("assets/minimap.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1920, 1080}, -1);
    boss.objs[QUEST_O_S2] = new_object("assets/quest.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 848, 584}, -1);
    boss.objs[ICON_O_S2] = new_object("assets/icon.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 56, 56}, 0);
    boss.objs[CURSOR_O_S2] = new_object("assets/cursor.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 10, 10}, 0);
}

void fill_scene_boss4(game_scene_t boss)
{
    boss.texts[VSYNC_T_S2] = new_text("assets/font.ttf", "V-sync:",
    (sfVector2f) {425, 45}, 16);
    boss.texts[XP_T_S2] = new_text("assets/font.ttf", "XP:",
    (sfVector2f) {425, 45}, 16);
    boss.texts[POS_T_S2] = new_text("assets/font.ttf", "Position:",
    (sfVector2f) {425, 45}, 16);
    boss.texts[LIFE_T_S2] = new_text("assets/font.ttf", "Life:",
    (sfVector2f) {425, 45}, 16);
    boss.objs[OBSTACLE_O_S2] = new_object("assets/obstacle.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    boss.objs[TOWN_O_S2] = new_object("assets/map_town.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    boss.objs[SHAMAN_O_S2] = new_object("assets/shaman.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 0, 0}, 0);
    boss.objs[OPTION_O_S2] = new_object("assets/option.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    boss.objs[INVENTORY_O_S2] = new_object("assets/inventory.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_boss5(boss);
}

void fill_scene_boss3(game_scene_t boss)
{
    boss.buttons[WALKABLE13_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 47, 213}, 0);
    boss.buttons[WALKABLE14_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 287, 42}, 0);
    boss.buttons[WALKABLE15_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 402, 45}, 0);
    boss.buttons[WALKABLE16_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 41, 428}, 0);
    boss.buttons[WALKABLE17_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 348, 36}, 0);
    boss.sounds[MUSIC_S_S2] = new_sound("assets/music_boss.ogg", sfFalse, 100);
    boss.sounds[CLICK_S_S2] = new_sound("assets/click.ogg", sfFalse, 100);
    boss.sounds[WALK_S_S2] = new_sound("assets/walk_rock.ogg", sfFalse, 100);
    boss.sounds[SWORD_S_S2] = new_sound("assets/swoosh.ogg", sfFalse, 100);
    boss.texts[VOLUME_T_S2] = new_text("assets/font.ttf", "Volume:",
    (sfVector2f) {425, 45}, 16);
    boss.texts[NAME_T_S2] = new_text("assets/font.ttf", "Name:",
    (sfVector2f) {425, 45}, 16);
    fill_scene_boss4(boss);
}

void fill_scene_boss2(game_scene_t boss)
{
    boss.buttons[WALKABLE4_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 49, 150}, 0);
    boss.buttons[WALKABLE5_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 438, 35}, 0);
    boss.buttons[WALKABLE6_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 35, 62}, 0);
    boss.buttons[WALKABLE7_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 186, 31}, 0);
    boss.buttons[WALKABLE8_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 35, 111}, 0);
    boss.buttons[WALKABLE9_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 202, 157}, 0);
    boss.buttons[WALKABLE10_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 76, 105}, 0);
    boss.buttons[WALKABLE11_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 134, 92}, 0);
    boss.buttons[WALKABLE12_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 132, 28}, 0);
    fill_scene_boss3(boss);
}

void fill_scene_boss1(game_scene_t boss)
{
    boss.buttons[EXIT_B_S2] = new_button("assets/exit_menu.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 280, 96}, 0);
    boss.buttons[DESKTOP_B_S2] = new_button("assets/exit_desktop.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 336, 96}, 0);
    boss.buttons[CLOSE_B_S2] = new_button("assets/close.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 30, 30}, 0);
    boss.buttons[PLUS_B_S2] = new_button("assets/plus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    boss.buttons[MINUS_B_S2] = new_button("assets/minus.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 28, 32}, 0);
    boss.buttons[MUTE_B_S2] = new_button("assets/mute.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 48, 48}, 0);
    boss.buttons[WALKABLE1_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 453, 43}, 0);
    boss.buttons[WALKABLE2_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 362, 89}, 0);
    boss.buttons[WALKABLE3_B_S2] = new_button("assets/invisible.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 265, 213}, 0);
    fill_scene_boss2(boss);
}