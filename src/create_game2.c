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

void create_scenes(game_scene_t *scenes)
{
    scenes[main_menu] = new_scene(11, 2, 9, 1);
    fill_scene_main_menu1(scenes[main_menu]);
    scenes[town] = new_scene(23, 4, 41, 6);
    fill_scene_town1(scenes[town]);
    scenes[boss] = new_scene(12, 4, 23, 6);
    fill_scene_boss1(scenes[boss]);
    scenes[forest] = new_scene(10, 4, 16, 6);
    fill_scene_forest1(scenes[forest]);
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

void create_quest2(game_quest_t *quests)
{
    quests[PIERRE_Q] = new_quest(2, Q6_BOOK, 1, 0);
    fill_quest6(&(quests[PIERRE_Q]));
    quests[GHOSTS_Q] = new_quest(2, Q7_BOOK, 15, 2);
    fill_quest7(&(quests[GHOSTS_Q]));
    quests[GEORGE_Q] = new_quest(2, Q8_BOOK, 1, 0);
    fill_quest8(&(quests[GEORGE_Q]));
    quests[SHEEP_COUNT_Q] = new_quest(2, Q9_BOOK, 1, 2);
    fill_quest9(&(quests[SHEEP_COUNT_Q]));
    quests[JODI_Q] = new_quest(2, Q10_BOOK, 1, 0);
    fill_quest10(&(quests[JODI_Q]));
    quests[SKELETON_Q] = new_quest(1, Q11_BOOK, 20, 2);
    fill_quest11(&(quests[SKELETON_Q]));
    quests[BOSS_Q] = new_quest(3, Q12_BOOK, 1, 1);
    fill_quest12(&(quests[BOSS_Q]));
}

void create_quests(game_quest_t *quests)
{
    quests[INTRO_Q] = new_quest(3, Q0_BOOK, 1, 2);
    fill_quest0(&(quests[INTRO_Q]));
    quests[BLACKSMITH_Q] = new_quest(2, Q1_BOOK, 1, 1);
    fill_quest1(&(quests[BLACKSMITH_Q]));
    quests[EMILY_Q] = new_quest(2, Q2_BOOK, 1, 0);
    fill_quest2(&(quests[EMILY_Q]));
    quests[GOLEMS_Q] = new_quest(1, Q3_BOOK, 10, 2);
    fill_quest3(&(quests[GOLEMS_Q]));
    quests[ROBIN_Q] = new_quest(1, Q4_BOOK, 1, 0);
    fill_quest4(&(quests[ROBIN_Q]));
    quests[FIND_LOST_Q] = new_quest(2, Q5_BOOK, 1, 1);
    fill_quest5(&(quests[FIND_LOST_Q]));
    create_quest2(quests);
}
