#include "Orchestra.h"

//����
Orchestra::Orchestra(string name, size_t size)
{
	set_size(size);//��������� ������
	set_name(name);//��������� ��������
	orch = new MusicalInstrument*[size];//������� ������ �������� ������� ��������
	
	//������ ���������� �� ������� ���������� ������������
	Factory* factory_instrument[6]
	{
		new FactoryBalalaika(),new FactoryBassGuitar(),
		new FactoryClarinet(), new FactoryFlute(),
		new FactorySaxophone(), new FactoryViolin()
	};

	//������� �������
	for (size_t i = 0; i < size; ++i)
	{
		orch[i] = factory_instrument[rand() % 6]->create_instrument();
	}
}

//����
Orchestra::~Orchestra()
{
	//��������� ������,
	//������� ������ ��������� �������
	for (size_t i = 0; i < size; ++i)
	{
		delete orch[i];
		orch[i] = nullptr;
	}

	//��������� ������ ��� ��������� �� ������
	delete orch;
	orch = nullptr;
}

//��������, ������
void Orchestra::set_name(string name)
{
	this->name = name;
	return;
}

//��������, ������
string Orchestra::get_name()
{
	return name;
}

//������, ������
void Orchestra::set_size(size_t size)
{
	this->size = size;
	return;
}

//������, ������
size_t Orchestra::get_size()
{
	return size;
}


//������� ������()
void Orchestra::play()
{
	cout << "An orchestra called " << name << " starts the concert!\n";
	for (size_t i = 0; i < size; ++i)
	{
		orch[i]->play();
	}
	cout << "The concert is over!\n";
	return;
}
