#pragma once
#include "door.h"
#include "foundation.h"
#include "roof.h"
#include "wall.h"
#include "window.h"
class Room
{
public:
	vector <Door> vector_1;
	vector <Foundation> vector_2;
	vector <Roof> vector_3;
	vector <Wall> vector_4;
	vector <Window> vector_5;
	void info()
	{
		int x;
		for (x = 0; x < vector_1.size(); ++x) vector_1[x].info();
		for (x = 0; x < vector_2.size(); ++x) vector_2[x].info();
		for (x = 0; x < vector_3.size(); ++x) vector_3[x].info();
		for (x = 0; x < vector_4.size(); ++x) vector_4[x].info();
		for (x = 0; x < vector_5.size(); ++x) vector_5[x].info();
	}
};