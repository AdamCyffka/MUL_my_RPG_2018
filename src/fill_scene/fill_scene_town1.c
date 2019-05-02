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
    town.objs[ME_O_S1] = new_object("assets/images/me.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[PANNEL_O_S1] = new_object("assets/images/pannel.png",
    (sfVector2f) {350, 750}, (sfIntRect) {0, 0, 1292, 482}, -1);
    town.objs[TOWN_O_S1] = new_object("assets/images/map_town.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 0);
    town.objs[DICK_O_S1] = new_object("assets/images/dick.png",
    (sfVector2f) {575 * 3.5, 190 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[EMILY_O_S1] = new_object("assets/images/emily.png",
    (sfVector2f) {695 * 3.5, 190 * 3.5}, (sfIntRect) {0, 0, 16, 32}, 0);
    town.objs[SHEEP1_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {310 * 3.5, 90 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[SHEEP2_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {180 * 3.5, 385 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[SHEEP3_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {1000 * 3.5, 840 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    town.objs[SHEEP4_O_S1] = new_object("assets/images/sheep.png",
    (sfVector2f) {590 * 3.5, 510 * 3.5}, (sfIntRect) {0, 0, 32, 32}, 0);
    fill_scene_town6(town);
}

void fill_scene_town4(game_scene_t town)
{
    town.objs[OBSTACLE_O_S1] = new_object("assets/images/obstacle.png",
    (sfVector2f) {0, 0}, (sfIntRect) {0, 0, 1243, 1058}, 1);
    town.objs[OPTION_O_S1] = new_object("assets/images/option.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[INVENTORY_O_S1] = new_object("assets/images/inventory.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    town.objs[EXIT_O_S1] = new_object("assets/images/exit.png",
    (sfVector2f) {500, 150}, (sfIntRect) {0, 0, 902, 696}, -1);
    fill_scene_town5(town);
}

void fill_scene_town3(game_scene_t town)
{
    town.buttons[WALKABLE13_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {1540, 1750}, (sfIntRect) {0, 0, 164.5, 980}, 0);
    town.buttons[WALKABLE14_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {542.5, 2572.5}, (sfIntRect) {0, 0, 1004.5, 147}, 0);
    town.buttons[WALKABLE15_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {1697.5, 2065}, (sfIntRect) {0, 0, 1407, 157.5}, 0);
    town.buttons[WALKABLE16_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2975, 2100}, (sfIntRect) {0, 0, 143.5, 1498}, 0);
    town.buttons[WALKABLE17_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {3115, 2765}, (sfIntRect) {0, 0, 1256.5, 126}, 0);
    town.buttons[INVENTORY_B_S1] = new_button("assets/images/invisible1.png",
    (sfVector2f) {570, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    town.buttons[ME_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {635, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    town.buttons[OPTION_B_S1] = new_button("assets/images/invisible1.png",
    (sfVector2f) {698, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    town.buttons[EXIT_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {765, 188}, (sfIntRect) {0, 0, 51, 56}, -1);
    town.sounds[MUSIC_S_S1] = new_sound("assets/sounds/music_town.ogg",
    sfFalse, 100);
    town.sounds[CLICK_S_S1] = new_sound("assets/sounds/click.ogg",
    sfFalse, 100);
    town.sounds[WALK_S_S1] = new_sound("assets/sounds/walk_rock.ogg",
    sfFalse, 100);
    town.sounds[SWORD_S_S1] = new_sound("assets/sounds/swoosh.ogg",
    sfFalse, 100);
    town.texts[VOLUME_T_S1] = new_text("assets/font/font.ttf", "Volume:",
    (sfVector2f) {700, 400}, 40);
    town.texts[VSYNC_T_S1] = new_text("assets/font/font.ttf", "V-sync:",
    (sfVector2f) {700, 500}, 40);
    town.texts[FRAME_T_S1] = new_text("assets/font/font.ttf", "Framerate:",
    (sfVector2f) {640, 580}, 40);
    town.texts[NAME_T_S1] = new_text("assets/font/font.ttf", "Name:",
    (sfVector2f) {700, 400}, 40);
    town.texts[XP_T_S1] = new_text("assets/font/font.ttf", "XP:",
    (sfVector2f) {700, 450}, 40);
    town.texts[QUEST_ANS_T_S1] = new_text("assets/font/font.ttf", "",
    (sfVector2f) {0, 0}, 40);
    fill_scene_town4(town);
}

void fill_scene_town2(game_scene_t town)
{
    town.buttons[WALKABLE4_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2660, 315}, (sfIntRect) {0, 0, 171.5, 525}, 0);
    town.buttons[WALKABLE5_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2817.5, 490}, (sfIntRect) {0, 0, 1533, 122}, 0);
    town.buttons[WALKABLE6_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2555, 1015}, (sfIntRect) {0, 0, 122.5, 217}, 0);
    town.buttons[WALKABLE7_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2660, 1120}, (sfIntRect) {0, 0, 651, 108.5}, 0);
    town.buttons[WALKABLE8_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2695, 1225}, (sfIntRect) {0, 0, 122.5, 388.5}, 0);
    town.buttons[WALKABLE9_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {3150, 1190}, (sfIntRect) {0, 0, 707, 549.5}, 0);
    town.buttons[WALKABLE10_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {3850, 1400}, (sfIntRect) {0, 0, 266, 367.5}, 0);
    town.buttons[WALKABLE11_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2614.5, 1575}, (sfIntRect) {0, 0, 469, 322}, 0);
    town.buttons[WALKABLE12_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {2152.5, 1575}, (sfIntRect) {0, 0, 462, 98}, 0);
    fill_scene_town3(town);
}

void fill_scene_town1(game_scene_t town)
{
    town.buttons[TITLE_B_S1] = new_button("assets/images/exit_menu.png",
    (sfVector2f) {800, 470}, (sfIntRect) {0, 0, 280, 96}, -1);
    town.buttons[DESKTOP_B_S1] = new_button("assets/images/exit_desktop.png",
    (sfVector2f) {770, 330}, (sfIntRect) {0, 0, 336, 96}, -1);
    town.buttons[CLOSE_B_S1] = new_button("assets/images/close.png",
    (sfVector2f) {1400, 200}, (sfIntRect) {0, 0, 30, 30}, -1);
    town.buttons[V0_B_S1] = new_button("assets/images/0.png",
    (sfVector2f) {850, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    town.buttons[V25_B_S1] = new_button("assets/images/25.png",
    (sfVector2f) {910, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    town.buttons[V50_B_S1] = new_button("assets/images/50.png",
    (sfVector2f) {970, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    town.buttons[V100_B_S1] = new_button("assets/images/100.png",
    (sfVector2f) {1030, 420}, (sfIntRect) {0, 0, 51, 25}, -1);
    town.buttons[ON_B_S1] = new_button("assets/images/on.png",
    (sfVector2f) {850, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    town.buttons[OFF_B_S1] = new_button("assets/images/off.png",
    (sfVector2f) {955, 515}, (sfIntRect) {0, 0, 75, 25}, -1);
    town.buttons[F30_B_S1] = new_button("assets/images/30.png",
    (sfVector2f) {850, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    town.buttons[F60_B_S1] = new_button("assets/images/60.png",
    (sfVector2f) {955, 600}, (sfIntRect) {0, 0, 75, 25}, -1);
    town.buttons[WALKABLE1_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {0, 560}, (sfIntRect) {0, 0, 1585.5, 150.5}, 0);
    town.buttons[WALKABLE2_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {1400, 703.5}, (sfIntRect) {0, 0, 1267, 311.5}, 0);
    town.buttons[WALKABLE3_B_S1] = new_button("assets/images/invisible.png",
    (sfVector2f) {1225, 1015}, (sfIntRect) {0, 0, 927.5, 745.5}, 0);
    fill_scene_town2(town);
}
