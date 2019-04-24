int button_volume(rpg_t *rpg)
{
	float value = sfMusic_getVolume(rpg->musics[0]) ? 0.00 : 1.50;
	int i = 0;

	while (rpg->musics[i] != NULL) {
		sfMusic_setVolume(rpg->musics[i], value);
		i++;
	}
	if (value == 0.00)
		sfText_setString(rpg->scenes[SC_SETTINGS]->buttons[0]->text
		, "Music: Off");
	else
		sfText_setString(rpg->scenes[SC_SETTINGS]->buttons[0]->text
		, "Music: On");
	return (SUCCESS);
}


int button_setting(rpg_t *rpg)
{
	if (sfMusic_getVolume(rpg->musics[0]) == 0.00)
		sfText_setString(rpg->scenes[SC_SETTINGS]->buttons[0]->text,
			"Music: Off");
	else
		sfText_setString(rpg->scenes[SC_SETTINGS]->buttons[0]->text,
			"Music: On");
	rpg->curr_scene = SC_SETTINGS;
	return (SUCCESS);
}
