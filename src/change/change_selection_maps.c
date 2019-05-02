/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change selection
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_statics_pos_common(game_scene_t *scenes, game_setting_t *settings,
game_quest_t *quests, game_inventory_t *inventory)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = TOWN; tmp <= CAMP; tmp++)
        for (int tmp2 = VOLUME_T_S1; tmp2 <= FRAME_T_S1; tmp2++)
            sfText_setPosition(scenes[tmp].texts[tmp2].text, (sfVector2f)
            {center.x - size.x / 2 + scenes[tmp].texts[tmp2].position.x,
            center.y - size.y / 2 + scenes[tmp].texts[tmp2].position.y});
    for (int tmp = INTRO_Q; tmp <= BOSS_Q; tmp++)
        for (int tmp2 = 0; tmp2 < quests[tmp].nb_of_dial; tmp2++)
            sfText_setPosition(quests[tmp].dialogs_text[tmp2].text, (sfVector2f)
            {center.x - size.x / 2 + quests[tmp].dialogs_text[tmp2].position.x,
            center.y - size.y / 2 + quests[tmp].dialogs_text[tmp2].position.y});
    for (int tmp = SLOT_0; tmp <= SLOT_4; tmp++)
        sfRectangleShape_setPosition(inventory[tmp].item.shape,
        (sfVector2f) {center.x - size.x / 2 +
        inventory[tmp].item.position.x, center.y - size.y / 2 +
        inventory[tmp].item.position.y});
}

void change_maps(game_t *game)
{
    npc_interaction(game);
    all_button(game->settings, game->scenes);
    if (game->quests[INTRO_Q].state == Q_NOT_STARTED)
        game->quests[INTRO_Q].state = Q_ACCEPTED;
    change_statics_pos_common(game->scenes, game->settings, game->quests,
    game->inventory);
    if (game->settings->current == TOWN)
        change_town(game);
    if (game->settings->current == BOSS)
        change_boss(game->settings, game->scenes[BOSS], game->quests);
    if (game->settings->current == FOREST)
        change_forest(game->settings, game->scenes[FOREST], game->quests);
    if (game->settings->current == BEACH)
        change_beach(game->settings, game->scenes[BEACH], game->quests);
    if (game->settings->current == CAMP)
        change_camp(game->settings, game->scenes[CAMP], game->quests);
}

void change_vic_def(game_t *game)
{
    if (game->settings->current == VICTORY)
        change_victory();
    if (game->settings->current == DEFEAT)
        change_defeat(game->settings);
}
