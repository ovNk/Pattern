#pragma once
#include "Factory.h"
#include "Violin.h"

//представляет класс-фабрику 
//для создания виолончели
class FactoryViolin :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

