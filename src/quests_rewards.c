/*
** EPITECH PROJECT, 2019
** quest_reward.c
** File description:
** All function to give reward and fill inventory
*/

#include "rpg.h"
#include "enum.h"
#include "struct.h"
#include "define.h"

void change_sprite_player(game_stat_t *stats)
{
    if (stats->sex == 0) {
        stats->player.texture = 
        sfTexture_createFromFile("assets/images/girl2.png", NULL);
        sfSprite_setTexture(stats->player.sprite, stats->player.texture, 
        sfFalse);
    } else {
        stats->player.texture = 
        sfTexture_createFromFile("assets/images/boy2.png", NULL);
        sfSprite_setTexture(stats->player.sprite, stats->player.texture, 
        sfFalse);
    }
}

void give_rewards_if_validated(game_scene_t town, game_stat_t *stats, 
game_quest_t *quests, game_inventory_t *inventory)
{
    if (quests[INTRO_Q].state == Q_VALIDATED) {
        fill_inventory(inventory, quests[INTRO_Q].rewards[0]);
        fill_inventory(inventory, quests[INTRO_Q].rewards[1]);
    }
    if (quests[BLACKSMITH_Q].state == Q_VALIDATED) {
        fill_inventory(inventory, quests[BLACKSMITH_Q].rewards[0]);
    }
    if (quests[GOLEMS_Q].state == Q_VALIDATED) {
        fill_inventory(inventory, quests[GOLEMS_Q].rewards[0]);
    }
    if (quests[ROBIN_Q].state == Q_FINISHED)
        delete_item_inventory(inventory, GOLEMHEAD_R);
    if (quests[FIND_LOST_Q].state == Q_VALIDATED) {
        delete_item_inventory(inventory, AXE_R);
        fill_inventory(inventory, quests[FIND_LOST_Q].rewards[1]);
    }
    if (quests[GHOSTS_Q].state == Q_VALIDATED) {
        change_sprite_player(stats);
        delete_item_inventory(inventory, quests[BLACKSMITH_Q].rewards[0]);
        fill_inventory(inventory, quests[GHOSTS_Q].rewards[0]);
    }
    return;
}

void pick_up_item(game_t *game)
{
    static int check = 0;
    
    if (game->quests[FIND_LOST_Q].state == Q_IN_PROGRESS && check == 0) {
        if (game->stats->player.position.x < 
        game->scenes[TOWN].objs[AXE_O_S1].position.x + 50 && 
        game->stats->player.position.x + 56 > 
        game->scenes[TOWN].objs[AXE_O_S1].position.x && 
        game->stats->player.position.y + 100 < 
        game->scenes[TOWN].objs[AXE_O_S1].position.y + 50 &&  
        game->stats->player.position.y + 112 > 
        game->scenes[TOWN].objs[AXE_O_S1].position.y) {
            check++;
            fill_inventory(game->inventory, AXE_R);
            game->scenes[TOWN].objs[AXE_O_S1].speed = -1;
            game->quests[game->stats->current_quest].progress =
            game->quests[game->stats->current_quest].nb_of_task;
        }
    }
}