#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//абстрактный базовый класс для редакторов
class Editor
{
public:
	virtual void create_file() = 0;//создать
	virtual void open_file() = 0;//открыть
	virtual void save_file() = 0;//сохранить
	virtual void save_file_as() = 0;//сохранить как
	virtual void print_file() = 0;//печать
	virtual void close_file() = 0;
	virtual ~Editor()
	{

	}
};

