#include "BassGuitar.h"

BassGuitar::BassGuitar()
{
	set_string_count();//��������� ���������� ����� � ���-������
}

void BassGuitar::play()
{
	cout << "BassGuitar: play now!\n";
	return;
}

void BassGuitar::set_string_count()
{
	//� ���-������ 4 ������
	string_count = 4;
	return;
}
