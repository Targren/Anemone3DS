/*
*   This file is part of Anemone3DS
*   Copyright (C) 2016-2017 Alex Taber ("astronautlevel"), Dawid Eckert ("daedreth")
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef COMMON_H
#define COMMON_H

#include <3ds.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define THEMES_PATH 	"/Themes/"
#define SPLASHES_PATH	"/Splashes/"
#define SINGLE_INSTALL	0
#define SHUFFLE_INSTALL	1
#define BGM_INSTALL		2

static const int THEMES_PER_SCREEN = 4;

enum TextureID {
    TEXTURE_FONT_RESERVED = 0, //used by pp2d for the font
    TEXTURE_ARROW,
    TEXTURE_SHUFFLE,
    TEXTURE_PREVIEW,
};

#endif