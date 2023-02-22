#pragma once
#include "build of the first room.h"
#include "build of the sec room.h"
class Director
{
public:
	Room* room_creat(Room_build& builder)
	{
		builder.room_creat();
		builder.build_found();
		builder.build_wall();
		builder.build_roof();
		builder.build_window();
		builder.build_door();
		return (builder.getRoom());
	}
};