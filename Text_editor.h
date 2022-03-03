#pragma once
#include "Editor.h"
class Text_editor :
    public Editor
{
public:
	void create_file();//�������
	void open_file();//�������
	void save_file();//���������
	void save_file_as();//��������� ���
	void print_file();//������??
	void close_file();//�������

	void set_path_to_file(string);//������ ���� � �����
	void set_path_to_buffer(string);//������ ���� � ������

	string get_path_to_file();//������ ���� � �����
	string get_path_to_buffer();//������ ���� � ������

	~Text_editor();//����

private:
	string path_to_file;//���� � �����
	string path_to_buffer;//���� � ������
};

