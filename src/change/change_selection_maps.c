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

    for (int tmp = town; tmp <= camp; tmp++)
        for (int tmp2 = VOLUME_T_S1; tmp2 <= LIFE_T_S1; tmp2++)
            sfText_setPosition(scenes[tmp].texts[tmp2].text, (sfVector2f)
            {center.x - size.x / 2 + scenes[tmp].texts[tmp2].position.x,
            center.y - size.y / 2 + scenes[tmp].texts[tmp2].position.y});
}

void change_maps(game_t *game)
{
    change_statics_pos_common(game->scenes, game->settings, game->quests,
    game->inventory);
    if (game->settings->current == town)
        change_town(game->settings, game->scenes[town]);
    if (game->settings->current == boss)
        change_boss(game->settings, game->scenes[boss]);
    if (game->settings->current == forest)
        change_forest(game->settings, game->scenes[forest]);
    if (game->settings->current == beach)
        change_beach(game->settings, game->scenes[beach]);
    if (game->settings->current == camp)
        change_camp(game->settings, game->scenes[camp]);
}

void change_vic_def(game_t *game)
{
    if (game->settings->current == victory)
        change_victory();
    if (game->settings->current == defeat)
        change_defeat();
}