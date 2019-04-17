/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** change selection
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_static_objs_pos(game_scene_t *scenes, game_setting_t *settings,
game_quest_t *quests, game_inventory_t *inventory)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

//town_objs
    for (int tmp = PANNEL_O_S1; tmp <= EXIT_O_S1; tmp++)
        sfSprite_setPosition(scenes[town].objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scenes[town].objs[tmp].position.x,
        center.y - size.y / 2 + scenes[town].objs[tmp].position.y});

//town_buttons
    for (int tmp = TITLE_B_S1; tmp <= ME_B_S1; tmp++)
        sfRectangleShape_setPosition(scenes[town].buttons[tmp].shape,
        (sfVector2f) {center.x - size.x / 2 +
        scenes[town].buttons[tmp].position.x, center.y - size.y / 2 +
        scenes[town].buttons[tmp].position.y});

/*//boss_objs
    for (int tmp = PANNEL_O_S2; tmp <= EXIT_O_S2; tmp++)
        sfSprite_setPosition(scenes[town].objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scenes[town].objs[tmp].position.x,
        center.y - size.y / 2 + scenes[town].objs[tmp].position.y});

//boss_buttons

//forest_objs
    for (int tmp = MINIMAP_O_S3; tmp <= EXIT_B_S3; tmp++)
        sfSprite_setPosition(scenes[town].objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scenes[town].objs[tmp].position.x,
        center.y - size.y / 2 + scenes[town].objs[tmp].position.y});

//forest_buttons

//beach_objs
    for (int tmp = MINIMAP_O_S4; tmp <= EXIT_O_S4; tmp++)
        sfSprite_setPosition(scenes[town].objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scenes[town].objs[tmp].position.x,
        center.y - size.y / 2 + scenes[town].objs[tmp].position.y});

//beach_buttons

//camp_objs
    for (int tmp = MINIMAP_O_S5; tmp <= EXIT_O_S5; tmp++)
        sfSprite_setPosition(scenes[town].objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scenes[town].objs[tmp].position.x,
        center.y - size.y / 2 + scenes[town].objs[tmp].position.y});

//camp_buttons*/

//ALL_GAMING_SCENE_txt
    for (int tmp = town; tmp <= camp; tmp++)
        for (int tmp2 = VOLUME_T_S1; tmp2 <= LIFE_T_S1; tmp2++)
            sfText_setPosition(scenes[tmp].texts[tmp2].text, (sfVector2f)
            {center.x - size.x / 2 + scenes[tmp].texts[tmp2].position.x,
            center.y - size.y / 2 + scenes[tmp].texts[tmp2].position.y});
}

void change_maps(game_t *game)
{
    change_static_objs_pos(game->scenes, game->settings, game->quests,
    game->inventory);
    if (game->settings->current == town)
        change_town();
    if (game->settings->current == boss)
        change_boss();
    if (game->settings->current == forest)
        change_forest();
    if (game->settings->current == beach)
        change_beach();
    if (game->settings->current == camp)
        change_camp();
}

void change_vic_def(game_t *game)
{
    if (game->settings->current == victory)
        change_victory();
    if (game->settings->current == defeat)
        change_defeat();
}