#pragma once
#include "Factory.h"
#include "Flute.h"

//������������ �����-������� 
//��� �������� ������
class FactoryFlute :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

