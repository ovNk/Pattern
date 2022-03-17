#include "Violin.h"

Violin::Violin()
{
	set_string_count();//установим количество струн в виолончели
}

void Violin::play()
{
	cout << "Violin: play now!\n";
	return;
}

void Violin::set_string_count()
{
	//у виолончели 4 струны
	string_count = 4;
}
