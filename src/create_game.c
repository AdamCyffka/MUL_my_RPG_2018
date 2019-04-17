/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** create game
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

game_t *create_game(game_t *game)
{
    game->scenes = malloc(sizeof(game_scene_t) * 8);
    create_scenes(game->scenes);
    /*game->inventory = malloc(sizeof(game_inventory_t) * 4);
    create_inventory(game->inventory);*/
    game->quests = malloc(sizeof(game_quest_t) * 13);
    create_quests(game->quests);
    game->stats = malloc(sizeof(game_stat_t) * 1);
    create_stats(game->stats);
    game->settings = malloc(sizeof(game_setting_t) * 1);
    create_settings(game->settings);
    return game;
}