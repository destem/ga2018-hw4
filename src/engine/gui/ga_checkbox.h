#pragma once

/*
** RPI Game Architecture Engine
**
** Portions adapted from:
** Viper Engine - Copyright (C) 2016 Velan Studios - All Rights Reserved
**
** This file is distributed under the MIT License. See LICENSE.txt.
*/

#include "ga_widget.h"

#include "math/ga_vec2f.h"

/*
** GUI pressable checkbox widget.
*/
class ga_checkbox : public ga_widget
{
public:
	ga_checkbox(bool state, const char* text, float x, float y, struct ga_frame_params* params);
	~ga_checkbox();

	bool get_hover(const struct ga_frame_params* params) const;
	bool get_pressed(const struct ga_frame_params* params) const;
	bool get_clicked(const struct ga_frame_params* params) const;

private:
	ga_vec2f _min;
	ga_vec2f _max;
};
