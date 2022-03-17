#pragma once
#include "Factory.h"
#include "Balalaika.h"

//представляет класс-фабрику 
//для создания балалайки
class FactoryBalalaika :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

