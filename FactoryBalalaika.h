#pragma once
#include "Factory.h"
#include "Balalaika.h"

//������������ �����-������� 
//��� �������� ���������
class FactoryBalalaika :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

