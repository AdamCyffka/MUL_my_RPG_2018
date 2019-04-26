/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** change_statics_pos
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void change_statics_pos_camp(game_scene_t scene, game_setting_t *settings)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = MINIMAP_O_S5; tmp <= CURSOR_O_S5; tmp++)
        sfSprite_setPosition(scene.objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scene.objs[tmp].position.x,
        center.y - size.y / 2 + scene.objs[tmp].position.y});
    for (int tmp = TITLE_B_S5; tmp <= EXIT_B_S5; tmp++)
        sfRectangleShape_setPosition(scene.buttons[tmp].shape,
        (sfVector2f) {center.x - size.x / 2 +
        scene.buttons[tmp].position.x, center.y - size.y / 2 +
        scene.buttons[tmp].position.y});
}

void change_statics_pos_beach(game_scene_t scene, game_setting_t *settings)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = MINIMAP_O_S4; tmp <= CURSOR_O_S4; tmp++)
        sfSprite_setPosition(scene.objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scene.objs[tmp].position.x,
        center.y - size.y / 2 + scene.objs[tmp].position.y});
    for (int tmp = TITLE_B_S4; tmp <= EXIT_B_S4; tmp++) {
        sfRectangleShape_setPosition(scene.buttons[tmp].shape,
        (sfVector2f) {center.x - size.x / 2 +
        scene.buttons[tmp].position.x, center.y - size.y / 2 +
        scene.buttons[tmp].position.y});
    }
}

void change_statics_pos_forest(game_scene_t scene, game_setting_t *settings)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = MINIMAP_O_S3; tmp <= CURSOR_O_S3; tmp++)
        sfSprite_setPosition(scene.objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scene.objs[tmp].position.x,
        center.y - size.y / 2 + scene.objs[tmp].position.y});
    for (int tmp = TITLE_B_S3; tmp <= EXIT_B_S3; tmp++)
        sfRectangleShape_setPosition(scene.buttons[tmp].shape,
        (sfVector2f) {center.x - size.x / 2 +
        scene.buttons[tmp].position.x, center.y - size.y / 2 +
        scene.buttons[tmp].position.y});
}

void change_statics_pos_boss(game_scene_t scene, game_setting_t *settings)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = PANNEL_O_S2; tmp <= CURSOR_O_S2; tmp++)
        sfSprite_setPosition(scene.objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scene.objs[tmp].position.x,
        center.y - size.y / 2 + scene.objs[tmp].position.y});
    for (int tmp = TITLE_B_S2; tmp <= EXIT_B_S2; tmp++)
        sfRectangleShape_setPosition(scene.buttons[tmp].shape,
        (sfVector2f) {center.x - size.x / 2 +
        scene.buttons[tmp].position.x, center.y - size.y / 2 +
        scene.buttons[tmp].position.y});
}

void change_statics_pos_town(game_scene_t scene, game_setting_t *settings)
{
    const sfView *view = sfRenderWindow_getView(settings->window);
    sfVector2f center = sfView_getCenter(view);
    sfVector2f size = sfView_getSize(view);

    for (int tmp = PANNEL_O_S1; tmp <= CURSOR_O_S1; tmp++)
        sfSprite_setPosition(scene.objs[tmp].sprite, (sfVector2f)
        {center.x - size.x / 2 + scene.objs[tmp].position.x,
        center.y - size.y / 2 + scene.objs[tmp].position.y});
    for (int tmp = TITLE_B_S1; tmp <= EXIT_B_S1; tmp++)
        sfRectangleShape_setPosition(scene.buttons[tmp].shape,
        (sfVector2f) {center.x - size.x / 2 +
        scene.buttons[tmp].position.x, center.y - size.y / 2 +
        scene.buttons[tmp].position.y});
}
