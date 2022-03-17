#include "BassGuitar.h"

BassGuitar::BassGuitar()
{
	set_string_count();//установим количество струн в бас-гитаре
}

void BassGuitar::play()
{
	cout << "BassGuitar: play now!\n";
	return;
}

void BassGuitar::set_string_count()
{
	//у бас-гитары 4 струны
	string_count = 4;
	return;
}
