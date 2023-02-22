#include "director.h"
void main()
{
	setlocale(LC_ALL, "ru");
	Director manager;
	Build_of_the_first_room build_of_the_first_room;
	Build_of_the_sec_room build_of_the_sec_room;
	Room* the_first_room = manager.room_creat(build_of_the_first_room);
	Room* the_sec_room = manager.room_creat(build_of_the_sec_room);
	SetColor(1, 0);
	cout << "первая комната:" << endl;
	the_first_room->info();
	SetColor(2, 0);
	cout << "\nвторая комната:" << endl;
	the_sec_room->info();
}