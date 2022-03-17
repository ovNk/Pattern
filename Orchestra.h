#pragma once
#include <iostream>
#include <string>
#include "MusicalInstrument.h"
#include "Factory.h"
#include "FactoryBalalaika.h"
#include "FactoryBassGuitar.h"
#include "FactoryClarinet.h"
#include "FactoryFlute.h"
#include "FactorySaxophone.h"
#include "FactoryViolin.h"
using std::cin;
using std::cout;
using std::string;

class Orchestra
{
private:
	string name;//�������� ��������
	size_t size;//������ ��������
	MusicalInstrument** orch;//��������� �� ��������� ������������ ���� ����������������������

public:
	Orchestra(string, size_t);//����
	~Orchestra();//����(�� �������� ������)

	//��������
	void set_name(string);//������
	string get_name();//������

	//������
	void set_size(size_t);//������
	size_t get_size();//������

	//������� ������()
	void play();

};

