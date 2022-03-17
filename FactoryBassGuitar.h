#pragma once
#include "Factory.h"
#include "BassGuitar.h"

//представляет класс-фабрику 
//для создания бас-гитары
class FactoryBassGuitar :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

