#pragma once
#include "Stringed.h"

//�����
//������������ ����������
//��������� �� ��������
class Violin :
    public Stringed
{
public:
    Violin();
    void play();
private:
    void set_string_count();
};

