#pragma once
#include "Editor.h"
class Text_editor :
    public Editor
{
public:
	void create_file();//создать
	void open_file();//открыть
	void save_file();//сохранить
	void save_file_as();//сохранить как
	void print_file();//печать??
	void close_file();//закрыть

	void set_path_to_file(string);//сеттер пути к файлу
	void set_path_to_buffer(string);//сеттер пути к буферу

	string get_path_to_file();//геттер пути к файлу
	string get_path_to_buffer();//геттер пути к буферу

	~Text_editor();//дтор

private:
	string path_to_file;//путь к файлу
	string path_to_buffer;//путь к буферу
};

