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
    scenes[main_menu] = new_scene(11, 2, 9, 1);
    fill_scene_main_menu1(scenes[main_menu]);
    scenes[town] = new_scene(18, 5, 23, 6);
    fill_scene_town1(scenes[town]);
    scenes[boss] = new_scene(12, 4, 23, 6);
    fill_scene_boss1(scenes[boss]);
    scenes[forest] = new_scene(10, 4, 17, 6);
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

void create_quests(game_quest_t *quests)
{
    quests[0] = new_quest("Introduction.", true, 1, malloc(sizeof(int) * 2));
    quests[1] = new_quest("Speak to Lewis the blacksmith.",
    true, 1, malloc(sizeof(int) * 1));
    quests[2] = new_quest("Speak to Emily at the north of the town.",
    true, 1, NULL);
    quests[3] = new_quest("Kill 10 Golems from the occupied camp.",
    false, 10, malloc(sizeof(int) * 2));
    quests[4] = new_quest("Give to Robin the golem's head.", true, 1, NULL);
    quests[5] = new_quest("Find Robin's axe.",
    false, 1, malloc(sizeof(int) * 1));
    quests[6] = new_quest("Speak to Pierre the bar tender.", true, 1, NULL);
    quests[7] = new_quest("Kill 15 Ghosts from the secret forest.",
    false, 15, malloc(sizeof(int) * 2));
    quests[8] = new_quest("Speak to George near the sakura's tree.",
    true, 1, NULL);
    quests[9] = new_quest("Count the number of sheeps in the town",
    true, 1, malloc(sizeof(int) * 2));
    quests[10] = new_quest("Speak to Jodi.", true, 1, NULL);
    quests[11] = new_quest("Kill 20 Skeletons from the beach.",
    false, 20, malloc(sizeof(int) * 2));
    quests[12] = new_quest("KILL THE BOSS !", true, 1, malloc(sizeof(int) * 1));
}

void create_stats(game_stat_t *stats)
{
    stats->life = 100;
    stats->xp = 0;
    stats->name = "Hubert";
    stats->player = new_object("assets/girl1.png",
    (sfVector2f) {0, 500}, (sfIntRect) {0, 32, 16, 32}, 0);
    stats->current_quest = INTRO_Q;
}

void create_settings(game_setting_t *settings)
{
    sfVideoMode mode = {1920, 1080, 32};
    settings->window = sfRenderWindow_create(mode, "TRASHDEW VALLEY", sfClose,
    NULL);
    settings->clock = sfClock_create();
    sfRenderWindow_setFramerateLimit(settings->window, 60);
    //sfRenderWindow_setMouseCursorVisible(settings->window, sfFalse);
}
