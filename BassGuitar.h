#pragma once
#include "Stringed.h"

//�����
//������������ ���-������
//��������� �� ��������
class BassGuitar :
    public Stringed
{
public:
    BassGuitar();//����
    void play();//�������������� ������� ������()
private:
    void set_string_count();//��������� ���������� ����� � ��� ������
};

