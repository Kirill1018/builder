#pragma once
#include "room build.h"
class Build_of_the_sec_room : public Room_build
{
public:
	void room_creat() { apartment = new Room; }
	void build_door() { apartment->vector_1.push_back(Door()); }
	void build_foundation() { apartment->vector_2.push_back(Foundation()); }
	void build_roof() { apartment->vector_3.push_back(Roof()); }
	void build_window() { apartment->vector_5.push_back(Window()); }
};