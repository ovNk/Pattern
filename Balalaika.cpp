#include "Balalaika.h"

Balalaika::Balalaika()
{
	set_string_count();//��������� ���������� ����� � ���������
}

void Balalaika::play()
{
	cout << "Balalaika: play now!\n";
	return;
}

void Balalaika::set_string_count()
{
	//� ��������� �� 2 �� 4 �����
	string_count = 2 + rand() % 5;
	return;
}
