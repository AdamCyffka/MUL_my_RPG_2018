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
    if (game->scenes == NULL)
        return NULL;
    create_scenes(game->scenes);
    game->inventory = malloc(sizeof(game_inventory_t) * 5);
    if (game->inventory == NULL)
        return NULL;
    create_inventory(game->inventory);
    game->quests = malloc(sizeof(game_quest_t) * 13);
    if (game->quests == NULL)
        return NULL;
    create_quests(game->quests);
    game->stats = malloc(sizeof(game_stat_t) * 1);
    if (game->stats == NULL)
        return NULL;
    create_stats(game->stats);
    game->settings = malloc(sizeof(game_setting_t) * 1);
    if (game->scenes == NULL)
        return NULL;
    create_settings(game->settings);
    return game;
}