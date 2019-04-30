/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** write_text
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

int text_entered(game_setting_t *settings)
{
    if (settings->event.text.unicode >= 'a' &&
    settings->event.text.unicode <= 'z')
        return settings->event.text.unicode - 32;
    if ((settings->event.text.unicode >= '0' &&
    settings->event.text.unicode <= '9') ||
    (settings->event.text.unicode >= 'A' &&
    settings->event.text.unicode <= 'Z'))
        return settings->event.text.unicode;
    if (settings->event.text.unicode == 8)
        return -1;
    return 0;
}

void enter_player_name(game_stat_t *stats, game_setting_t *settings)
{
    if (my_strcmp(sfText_getString(stats->name_t.text), "'PLAYER'") == 1)
        sfText_setString(stats->name_t.text, "");
    char entered = text_entered(settings);
    sfText_setString(stats->name_t.text, my_stradd(sfText_getString(stats->name_t.text), entered));
}

void enter_quest_answer(game_t *game)
{
    return;
}
