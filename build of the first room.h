#pragma once
#include "room build.h"
class Build_of_the_first_room : public Room_build
{
public:
	void room_creat() { apartment = new Room; }
	void build_door() { apartment->vector_1.push_back(Door()); }
	void build_foundation() { apartment->vector_2.push_back(Foundation()); }
	void build_roof() { apartment->vector_3.push_back(Roof()); }
	void build_wall() { apartment->vector_4.push_back(Wall()); }
};