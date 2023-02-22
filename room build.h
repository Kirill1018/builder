#pragma once
#include "room.h"
class Room_build
{
protected:
	Room* apartment;
public:
	Room_build(): apartment(0) {}
	virtual ~Room_build() {}
	virtual void room_creat() {}
	virtual void build_door() {}
	virtual void build_found() {}
	virtual void build_roof() {}
	virtual void build_wall() {}
	virtual void build_window() {}
	virtual Room* getRoom() { return apartment; }
};