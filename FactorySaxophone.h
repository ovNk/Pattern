#pragma once
#include "Factory.h"
#include "Saxophone.h"

//представляет класс-фабрику 
//для создания саксофона
class FactorySaxophone :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

