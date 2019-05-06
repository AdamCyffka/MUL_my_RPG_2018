/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** volume_management
*/

#include "rpg.h"
#include "struct.h"
#include "enum.h"

void btn_snd_four(void)
{
    sfListener_setGlobalVolume(100);
}

void btn_snd_three(void)
{
    sfListener_setGlobalVolume(50);
}

void btn_snd_two(void)
{
    sfListener_setGlobalVolume(25);
}

void btn_snd_one(void)
{
    sfListener_setGlobalVolume(0);
}