#include "Violin.h"

Violin::Violin()
{
	set_string_count();//��������� ���������� ����� � ����������
}

void Violin::play()
{
	cout << "Violin: play now!\n";
	return;
}

void Violin::set_string_count()
{
	//� ���������� 4 ������
	string_count = 4;
}
