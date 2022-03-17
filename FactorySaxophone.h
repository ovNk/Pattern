#pragma once
#include "Factory.h"
#include "Saxophone.h"

//������������ �����-������� 
//��� �������� ���������
class FactorySaxophone :
    public Factory
{
public:
    MusicalInstrument* create_instrument();
};

