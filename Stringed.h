#pragma once
#include "MusicalInstrument.h"

//����������� �����
//������������ �������� �����������
class Stringed :
    public MusicalInstrument
{
protected:
    int string_count;//���������� �����

    //������ ����������� ���-�������
    //������������� ���������� ����� � �����������
    virtual void set_string_count() = 0;
public:
    //������
    int get_string_count()
    {
        return string_count;
    }
};

