#pragma once
#include <iostream>
#include <string>
#include "MusicalInstrument.h"
#include "Factory.h"
#include "FactoryBalalaika.h"
#include "FactoryBassGuitar.h"
#include "FactoryClarinet.h"
#include "FactoryFlute.h"
#include "FactorySaxophone.h"
#include "FactoryViolin.h"
using std::cin;
using std::cout;
using std::string;

class Orchestra
{
private:
	string name;//название оркестра
	size_t size;//размер оркестра
	MusicalInstrument** orch;//указатель на указатель абстрактного типа ћузыкальные»нструменты

public:
	Orchestra(string, size_t);//ктор
	~Orchestra();//дтор(тк выдел€ем пам€ть)

	//название
	void set_name(string);//сеттер
	string get_name();//геттер

	//размер
	void set_size(size_t);//сеттер
	size_t get_size();//геттер

	//функци€ »грать()
	void play();

};

