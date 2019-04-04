/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** create game
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void create_scenes(game_scene_t *scenes)
{
    scenes[main_menu] = new_scene(10, 2, 9, 1);
    fill_scene_main_menu1(scenes[main_menu]);
    puts("TRUE");
    scenes[town] = new_scene(19, 5, 23, 6);
    fill_scene_town1(scenes[town]);
    puts("BITE");
    scenes[boss] = new_scene(12, 4, 23, 6);
    fill_scene_boss1(scenes[boss]);
    puts("Enorme Queue");
    scenes[forest] = new_scene(10, 4, 17, 6);
    fill_scene_forest1(scenes[forest]);
    puts("ADAM");
    scenes[beach] = new_scene(10, 4, 9, 6);
    fill_scene_beach1(scenes[beach]);
    scenes[camp] = new_scene(10, 4, 11, 6);
    fill_scene_camp1(scenes[camp]);
    scenes[victory] = new_scene(3, 1, 2, 1);
    fill_scene_victory(scenes[victory]);
    scenes[defeat] = new_scene(3, 1, 2, 1);
    fill_scene_defeat(scenes[defeat]);
}

void create_inventory(game_inventory_t *inventory)
{
}

void create_quests(game_quest_t *quests)
{
}

void create_stats(game_stat_t *stats)
{
}

void create_settings(game_setting_t *settings)
{
    sfVideoMode mode = {1920, 1080, 32};
    settings->window = sfRenderWindow_create(mode, "TRASHDEW VALLEY", sfClose,
        NULL);
    sfRenderWindow_setFramerateLimit(settings->window, 60);
    //sfRenderWindow_setVerticalSyncEnabled(settings->window, sfTrue);
    sfRenderWindow_setMouseCursorVisible(settings->window, sfFalse);
}