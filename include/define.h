/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** define
*/

#ifndef DEFINE_H_

    #include <stdbool.h>

    #define DEFINE_H_

    #define EOA -1

    #define SUCCESS 0
    #define WRONG_PATH -2
    #define WRONG_CONFIG_PATH -3

    #define AXE_COLISION stats->player.position.x <\
    town.objs[AXE_O_S1].position.x + 50 && stats->player.position.x + 56 >\
    town.objs[AXE_O_S1].position.x && stats->player.position.y + 100 <\
    town].objs[AXE_O_S1].position.y + 50 && stats->player.position.y + 112 >\
    town.objs[AXE_O_S1].position.y\

    #define COLLISION_ZONE stats->player.position.x <\
town.buttons[quests[stats->current_quest].npc_zone].position.x + 56 &&\
stats->player.position.x + 56 >\
town.buttons[quests[stats->current_quest].npc_zone].position.x &&\
stats->player.position.y + 100 <\
town.buttons[quests[stats->current_quest].npc_zone].position.y + 56 &&\
stats->player.position.y + 112 >\
town.buttons[quests[stats->current_quest].npc_zone].position.y\


//QUEST INTRO_Q
    #define Q0_BOOK "INTRODUCTION"
    #define Q0_DIAL0 "Hello my friend, it's been a while we didn't see you. \
Is Samwell sending you to help us ?\n"
    #define Q0_DIAL1 "Perfect, We definitely need your help. Take this map, \
open it if you are lost.\n"
    #define Q0_DIAL2 "I almost forgot ! This is your 'Book Of Quest'.\nGo see \
Josh, it's our blacksmith, he'll give you what you need to fight.\n"

//QUEST BLACKSMITH_Q
    #define Q1_BOOK "SPEAK TO LEWIS THE BLACKSMITH"
    #define Q1_DIAL0 "Hi it's great that you're here. Here is a sword, I just \
forged it.\n"
    #define Q1_DIAL1 "You should speak to Emily, she lives at the north of the \
city,she'll have things for you to do.\n"

//QUEST EMILY_Q
    #define Q2_BOOK "SPEAK TO EMILY AT THE NORTH OF THE TOWN"
    #define Q2_DIAL0 "Hello, nice to meet you. There are golems blocking the \
passage across the bridge to the camp,\ncould you help me with this ?\n"
    #define Q2_DIAL1 "Wonderful ! Kill them all !\n"

//QUEST GOLEMS_Q
    #define Q3_BOOK "KILL 10 GOLEMS FROM THE OCCUPIED CAMP"
    #define Q3_DIAL0 "Whaw, you are a very strong fighter, bring this 'Head of \
golem' to Robin.\n"

//QUEST ROBIN_Q
    #define Q4_BOOK "GIVE TO ROBIN THE GOLEM'S HEAD"
    #define Q4_DIAL0 "Hello dear, I've lost my axe, I can't fight without it, \
if you find it could you return it to me please ?\n"

//QUEST FIND_LOST_Q
    #define Q5_BOOK "FIND ROBIN'S AXE"
    #define Q5_DIAL0 "Oh ! Thank you a lot, I did not hope to see her again.\n"
    #define Q5_DIAL1 "I'm sure you're a great fighter, you should meet Pierre, \
the bar tender, I'm sure you'll get along with him.\n\
See you on the battlefield.\n"

//QUEST PIERRE_Q
    #define Q6_BOOK "SPEAK TO PIERRE THE BAR TENDER"
    #define Q6_DIAL0 "Welcome my friend ! Robin told you to come see me ?\n\
Humm... Let's see what you got\n"
    #define Q6_DIAL1 "Go to the secret forest and kill 15 ghosts, people say \
this place is haunted\n"

//QUEST GHOSTS_Q
    #define Q7_BOOK "KILL 15 GHOSTS FROM THE SECRET FOREST"
    #define Q7_DIAL0 "Robin was right ! You are one of the best fighter \
I've ever seen.\n"
    #define Q7_DIAL1 "Take my sword, I think you deserve it more than me. \
Have you ever visited the south east of the town ?\n\
They are beautiful trees down there\n"

//QUEST GEORGE_Q
    #define Q8_BOOK "SPEAK TO GEORGE NEAR THE SAKURA'S TREE"
    #define Q8_DIAL0 "See this wonderful pink tree. He's older than everyone \
in this town\n Anyway, Let's play a game...\n"
    #define Q8_DIAL1 "If you win, i'll give you a better armor to fight. \
Count the number of sheeps in the town,\nyou'll have to tell me the right \
number if you want the armor\n"

//QUEST SHEEP_COUNT_Q
    #define Q9_BOOK "COUNT THE NUMBER OF SHEEPS IN THE TOWN"
    #define Q9_DIAL0 "Wrong answer ! try again\n"
    #define Q9_DIAL1 "Well done, here is your new armor ! see you.\n"

//QUEST JODI_Q
    #define Q10_BOOK "SPEAK TO JODI"
    #define Q10_DIAL0 "Hey ! Your chestplate looks amazing !\nCould you help \
me killing skeletons on the beach ?\n"
    #define Q10_DIAL1 "I knew you were a kind person.\n"

//QUEST SKELETONS_Q
    #define Q11_BOOK "KILL 20 SKELETONS FROM THE BEACH"
    #define Q11_DIAL0 "Well done, I would not have succeeded without\
your help\n"

//QUEST BOOS_Q
    #define Q12_BOOK "KILL THE BOSS !"
    #define Q12_DIAL0 "HAAAAAAA !!! You have killed all my servants\n\
You gonna pay for this !\n"
    #define Q12_DIAL1 "ARrrrrrrrRRRRRRRRRRR !!!\n"
    #define Q12_DIAL2 "Thank you for playing.\n"

#endif /* !DEFINE_H_ */
