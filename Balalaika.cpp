#include "Balalaika.h"

Balalaika::Balalaika()
{
	set_string_count();//установим количество струн в балалайке
}

void Balalaika::play()
{
	cout << "Balalaika: play now!\n";
	return;
}

void Balalaika::set_string_count()
{
	//в балалайке от 2 до 4 струн
	string_count = 2 + rand() % 5;
	return;
}
