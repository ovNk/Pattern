#pragma once
#include "Stringed.h"

//�����
//������������ ���������
//��������� �� ��������
class Balalaika :
    public Stringed
{
public:
    Balalaika();//����
    void play();//�������������� ������� ������()
private:
    void set_string_count();//��������� ���������� ����� � �����������
};

