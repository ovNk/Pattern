#pragma once
#include "Factory.h"
#include "Flute.h"

//представл€ет класс-фабрику 
//дл€ создани€ флейты
class FactoryFlute :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

