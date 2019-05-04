/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change selection
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_statics_pos_common(game_t *game)
{
    const sfView *view = sfRenderWindow_getView(game->settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = TOWN; tmp <= CAMP; tmp++)
        for (int tmp2 = VOLUME_T_S1; tmp2 <= FRAME_T_S1; tmp2++)
            sfText_setPosition(game->scenes[tmp].texts[tmp2].text, (sfVector2f)
            {center.x - size.x / 2 + game->scenes[tmp].texts[tmp2].position.x,
            center.y - size.y / 2 + game->scenes[tmp].texts[tmp2].position.y});
    for (int tmp = INTRO_Q; tmp <= BOSS_Q; tmp++)
        for (int tmp2 = 0; tmp2 < game->quests[tmp].nb_of_dial; tmp2++)
            sfText_setPosition(game->quests[tmp].dialogs_text[tmp2].text,
            (sfVector2f)
            {center.x - size.x /
            2 + game->quests[tmp].dialogs_text[tmp2].position.x,
            center.y - size.y /
            2 + game->quests[tmp].dialogs_text[tmp2].position.y});
    for (int tmp = SLOT_0; tmp <= SLOT_4; tmp++)
        sfRectangleShape_setPosition(game->inventory[tmp].item.shape,
        (sfVector2f) {center.x - size.x / 2 +
        game->inventory[tmp].item.position.x, center.y - size.y / 2 +
        game->inventory[tmp].item.position.y});

    sfText_setPosition(game->stats->name_t.text, (sfVector2f)
            {center.x - size.x / 2 + game->stats->name_t.position.x,
            center.y - size.y / 2 + game->stats->name_t.position.y});
    sfText_setPosition(game->stats->xp_t.text, (sfVector2f)
            {center.x - size.x / 2 + game->stats->xp_t.position.x,
            center.y - size.y / 2 + game->stats->xp_t.position.y});
    sfText_setPosition(game->stats->life_t.text, (sfVector2f)
            {center.x - size.x / 2 + game->stats->life_t.position.x,
            center.y - size.y / 2 + game->stats->life_t.position.y});
}

void change_maps(game_t *game)
{
    npc_interaction(game);
    refresh_player_data(game->stats);
    all_button(game->inventory, game->settings, game->scenes, game->stats);
    if (game->quests[INTRO_Q].state == Q_NOT_STARTED)
        game->quests[INTRO_Q].state = Q_ACCEPTED;
    change_statics_pos_common(game);
    if (game->settings->current == TOWN)
        change_town(game);
    if (game->settings->current == BOSS)
        change_boss(game->settings, game->scenes[BOSS]);
    if (game->settings->current == FOREST)
        change_forest(game->settings, game->scenes[FOREST]);
    if (game->settings->current == BEACH)
        change_beach(game->settings, game->scenes[BEACH]);
    if (game->settings->current == CAMP)
        change_camp(game->settings, game->scenes[CAMP]);
}

void change_vic_def(game_t *game)
{
    if (game->settings->current == VICTORY)
        change_victory();
    if (game->settings->current == DEFEAT)
        change_defeat(game->settings);
}
