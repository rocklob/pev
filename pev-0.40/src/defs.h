/*
	pev - PE information dump utility

	Copyright (C) 2010 - 2011 Coding 40°

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdlib.h>
#include <stdio.h>

#define PACKAGE "pev"
#define VERSION "0.40"

#define PE32 0x10b
#define PE64 0x20b
#define ROM 0x107

#ifdef __DEBUG_MODE__
	#define EXIT_WITH_ERROR(msg) \
			{ \
				fprintf(stderr, "%s, %d: %s\n", __FILE__, __LINE__, msg); \
				exit(EXIT_FAILURE); \
			}
#else
	#define EXIT_WITH_ERROR(msg) \
			{ \
				fprintf(stderr, "%s: %s\n", PACKAGE, msg); \
				exit(EXIT_FAILURE); \
			}
#endif