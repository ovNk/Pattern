#include <iostream>
#pragma once
using std::cout;

//абстрактный класс
//представляет музыкальные инструменты
class MusicalInstrument
{
public:
	//чистая виртуальная функция Играть()
	virtual void play() = 0;
};

