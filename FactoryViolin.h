#pragma once
#include "Factory.h"
#include "Violin.h"

//������������ �����-������� 
//��� �������� ����������
class FactoryViolin :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

