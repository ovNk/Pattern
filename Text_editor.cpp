#include "Text_editor.h"

void Text_editor::create_file()
{
	string path;//����
	string file_name;//��� �����

	cout << "Enter path: ";
	cin >> path;
	cout << "Enter filename: ";
	cin >> file_name;

	set_path_to_file(path + file_name);//������ ���� � �����
	set_path_to_buffer(path + "buff.txt");//� ������
			
	ofstream create_buff(get_path_to_buffer());// ������� ����� ��� ������
	
	if (create_buff.is_open())//�������� ������ �� ����
	{
		create_buff << "Tetsting creation...\n";//��� ��
	}
	else
		std::cout << "Error! File was not open!\n";//���

	return;
}

void Text_editor::open_file()
{
	string path;//����
	string file_name;//��� �����
	
	if (get_path_to_file() != "" || get_path_to_buffer() != "")//���� ��� ������ �����-���� ����
	{
		char answer;//���������� ���������� ����� ���������
		do
		{
			cout << "Are you want to keep the current file? Y/N";
			cin >> answer;
		} while (tolower(answer) != 'y' && tolower(answer) != 'n');
		switch (tolower(answer))
		{
		case 'y'://���������
			save_file();
			close_file();
			break;
		case 'n'://���
			close_file();
			break;
		}
	}
	cout << "Enter path: ";
	cin >> path;
	cout << "Enter filename: ";
	cin >> file_name;

	set_path_to_file(path + file_name);//������ ���� � �����
	set_path_to_buffer(path + "buff.txt");//� ������
		
	ifstream opened_file(get_path_to_file().c_str());//����, ��������� ��� ������
	ofstream opened_buffer(get_path_to_buffer().c_str(), ios::app);//������, ��������� � ������ ������ � �����

	if (!opened_buffer.is_open() || !opened_file.is_open())//�� ������� ������� ����� ��� ����
	{
		opened_file.close();
		std::cout << "Error! File was not open!\n";
	}

	opened_buffer << opened_file.rdbuf();//�������� ������ �� ����� � �����
	opened_buffer << "Testing file opening...\n";//����

	return;
}

void Text_editor::save_file()
{
	ofstream file(get_path_to_file());//����, ��������� � ������ ������
	ifstream buffer(get_path_to_buffer());//�����, ��������� � ������ ������

	file << buffer.rdbuf();//�������� �� ������ � ����

	return;
}

void Text_editor::save_file_as()
{
	string new_file_name = "";//����� ��� �����(������ ����)
	do
	{
		cout << "New filename: ";
		cin >> new_file_name;
	} while (new_file_name == "");//���� ������ ������ ������

	set_path_to_file(new_file_name);//����� ��� �����(������ ����)
	save_file();//���������

	return;
}

void Text_editor::print_file()//������� �� ������ ��� ������, ������� ������ � ���� � �������:D
{
	ifstream file(get_path_to_file());//��������� ��� ������
	cout << file.rdbuf();//������
	
	return;
}

void Text_editor::close_file()
{
	//��������� �����
	if (get_path_to_buffer() != "")
	{
		ofstream close_buffer(get_path_to_buffer());
		close_buffer.close();
		close_buffer.clear();

		if (close_buffer.is_open())//���� ��� ��� ������
		{
			cout << "Error! The File is open!\n";
		}
		else
			std::cout << "�he buffer has been closed. Testing complete!\n";//����
	}
	//��������� ����
	if (get_path_to_file() != "")
	{
		ofstream close_file(get_path_to_buffer());
		close_file.close();
		close_file.clear();

		if (close_file.is_open())//���� ��� ��� ������
		{
			cout << "Error! The File is open!\n";
		}
		else
			std::cout << "�he file has been closed. Testing complete!\n";//����
	}
	if (remove(path_to_buffer.c_str()))//������� �����
		cerr << "Error! Can't delete file!\n";//�� ��������
	set_path_to_buffer("");//�������������� ���� ������� ��������
	set_path_to_file("");//"---"---"

	return;
}

void Text_editor::set_path_to_file(string path_to_file)//������ ���� ���� � �����
{
	this->path_to_file = path_to_file;

	return;
}

void Text_editor::set_path_to_buffer(string path_to_buffer)//������ ���� ���� � ������
{
	this->path_to_buffer = path_to_buffer;

	return;
}

string Text_editor::get_path_to_file()//������ ���� ���� � �����
{
	return path_to_file;
}

string Text_editor::get_path_to_buffer()//������ ���� ���� � ������
{
	return path_to_buffer;
}

Text_editor::~Text_editor()//����
{
}
