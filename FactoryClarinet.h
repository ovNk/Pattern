#pragma once
#include "Factory.h"
#include "Clarinet.h";

//������������ �����-������� 
//��� �������� ��������
class FactoryClarinet :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

