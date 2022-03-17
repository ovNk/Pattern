#include "Orchestra.h"

//ктор
Orchestra::Orchestra(string name, size_t size)
{
	set_size(size);//установим размер
	set_name(name);//установим название
	orch = new MusicalInstrument*[size];//выделим память согласно размеру оркестра
	
	//массив указателей на фабрики конкретных инструментов
	Factory* factory_instrument[6]
	{
		new FactoryBalalaika(),new FactoryBassGuitar(),
		new FactoryClarinet(), new FactoryFlute(),
		new FactorySaxophone(), new FactoryViolin()
	};

	//создаем оркестр
	for (size_t i = 0; i < size; ++i)
	{
		orch[i] = factory_instrument[rand() % 6]->create_instrument();
	}
}

//дтор
Orchestra::~Orchestra()
{
	//освободим память,
	//занятую каждым элементов массива
	for (size_t i = 0; i < size; ++i)
	{
		delete orch[i];
		orch[i] = nullptr;
	}

	//освободим память под указатель на массив
	delete orch;
	orch = nullptr;
}

//Название, сеттер
void Orchestra::set_name(string name)
{
	this->name = name;
	return;
}

//Название, геттер
string Orchestra::get_name()
{
	return name;
}

//размер, сеттер
void Orchestra::set_size(size_t size)
{
	this->size = size;
	return;
}

//размер, геттер
size_t Orchestra::get_size()
{
	return size;
}


//функция Играть()
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
