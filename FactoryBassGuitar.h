#pragma once
#include "Factory.h"
#include "BassGuitar.h"

//������������ �����-������� 
//��� �������� ���-������
class FactoryBassGuitar :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

