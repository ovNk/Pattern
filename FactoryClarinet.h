#pragma once
#include "Factory.h"
#include "Clarinet.h";

//представляет класс-фабрику 
//для создания кларнета
class FactoryClarinet :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

