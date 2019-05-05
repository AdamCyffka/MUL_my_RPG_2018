/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** create game
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"
#include "define.h"

int create_scenes2(game_scene_t *scenes)
{
    scenes[BEACH] = new_scene(30, 4, 19, 5);
    if (&(scenes[BEACH]) == (game_scene_t *) {0})
        return 84;
    fill_scene_beach1(scenes[BEACH]);
    scenes[CAMP] = new_scene(20, 4, 21, 5);
    if (&(scenes[CAMP]) == (game_scene_t *) {0})
        return 84;
    fill_scene_camp1(scenes[CAMP]);
    scenes[VICTORY] = new_scene(3, 1, 2, 1);
    if (&(scenes[VICTORY]) == (game_scene_t *) {0})
        return 84;
    fill_scene_victory(scenes[VICTORY]);
    scenes[DEFEAT] = new_scene(3, 1, 2, 1);
    if (&(scenes[DEFEAT]) == (game_scene_t *) {0})
        return 84;
    fill_scene_defeat(scenes[DEFEAT]);
    return 0;
}

int create_scenes(game_scene_t *scenes)
{
    scenes[MAIN_MENU] = new_scene(11, 1, 9, 1);
    if (&(scenes[MAIN_MENU]) == (game_scene_t *) {0})
        return 84;
    fill_scene_main_menu1(scenes[MAIN_MENU]);
    scenes[TOWN] = new_scene(29, 4, 47, 6);
    if (&(scenes[TOWN]) == (game_scene_t *) {0})
        return 84;
    fill_scene_town1(scenes[TOWN]);
    scenes[BOSS] = new_scene(13, 4, 33, 5);
    if (&(scenes[BOSS]) == (game_scene_t *) {0})
        return 84;
    fill_scene_boss1(scenes[BOSS]);
    scenes[FOREST] = new_scene(25, 4, 26, 5);
    if (&(scenes[FOREST]) == (game_scene_t *) {0})
        return 84;
    fill_scene_forest1(scenes[FOREST]);
    return (create_scenes2(scenes));
}
