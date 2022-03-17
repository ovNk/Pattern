#pragma once
#include "MusicalInstrument.h"

//Абстракстный класс
//представляет фабрику для конструирования музыкальных инструментов
class Factory
{
public:
	//чистая виртуальная функция
	//конструирования объекта
	virtual MusicalInstrument* create_instrument() = 0;
};

