#pragma once
#include "MusicalInstrument.h"

//������������ �����
//������������ ������� ��� ��������������� ����������� ������������
class Factory
{
public:
	//������ ����������� �������
	//��������������� �������
	virtual MusicalInstrument* create_instrument() = 0;
};

