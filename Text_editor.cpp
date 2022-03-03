#include "Text_editor.h"

void Text_editor::create_file()
{
	string path;//путь
	string file_name;//имя файла

	cout << "Enter path: ";
	cin >> path;
	cout << "Enter filename: ";
	cin >> file_name;

	set_path_to_file(path + file_name);//полный путь к файлу
	set_path_to_buffer(path + "buff.txt");//к буферу
			
	ofstream create_buff(get_path_to_buffer());// создаем буфер для записи
	
	if (create_buff.is_open())//проверка открыт ли файл
	{
		create_buff << "Tetsting creation...\n";//все ок
	}
	else
		std::cout << "Error! File was not open!\n";//НЕТ

	return;
}

void Text_editor::open_file()
{
	string path;//путь
	string file_name;//имя файла
	
	if (get_path_to_file() != "" || get_path_to_buffer() != "")//Если уже открыт какой-либо файл
	{
		char answer;//предложить сохранение перед закрытием
		do
		{
			cout << "Are you want to keep the current file? Y/N";
			cin >> answer;
		} while (tolower(answer) != 'y' && tolower(answer) != 'n');
		switch (tolower(answer))
		{
		case 'y'://сохранить
			save_file();
			close_file();
			break;
		case 'n'://нет
			close_file();
			break;
		}
	}
	cout << "Enter path: ";
	cin >> path;
	cout << "Enter filename: ";
	cin >> file_name;

	set_path_to_file(path + file_name);//полный путь к файлу
	set_path_to_buffer(path + "buff.txt");//к буферу
		
	ifstream opened_file(get_path_to_file().c_str());//файл, открываем для чтения
	ofstream opened_buffer(get_path_to_buffer().c_str(), ios::app);//буффер, открываем в режиме записи в конец

	if (!opened_buffer.is_open() || !opened_file.is_open())//не удалось открыть буфер или файл
	{
		opened_file.close();
		std::cout << "Error! File was not open!\n";
	}

	opened_buffer << opened_file.rdbuf();//копируем данные из файла в буфер
	opened_buffer << "Testing file opening...\n";//тест

	return;
}

void Text_editor::save_file()
{
	ofstream file(get_path_to_file());//файл, открываем в режиме записи
	ifstream buffer(get_path_to_buffer());//буфер, открываем в режиме чтения

	file << buffer.rdbuf();//копируем из буфера в файл

	return;
}

void Text_editor::save_file_as()
{
	string new_file_name = "";//новое имя файла(полный путь)
	do
	{
		cout << "New filename: ";
		cin >> new_file_name;
	} while (new_file_name == "");//пока вводят пустую строку

	set_path_to_file(new_file_name);//новое имя файла(полный путь)
	save_file();//сохраняем

	return;
}

void Text_editor::print_file()//немного не поняла про печать, поэтому печать у меня в консоль:D
{
	ifstream file(get_path_to_file());//открываем для чтения
	cout << file.rdbuf();//читаем
	
	return;
}

void Text_editor::close_file()
{
	//закрываем буфер
	if (get_path_to_buffer() != "")
	{
		ofstream close_buffer(get_path_to_buffer());
		close_buffer.close();
		close_buffer.clear();

		if (close_buffer.is_open())//если все еще открыт
		{
			cout << "Error! The File is open!\n";
		}
		else
			std::cout << "Еhe buffer has been closed. Testing complete!\n";//тест
	}
	//закрываем файл
	if (get_path_to_file() != "")
	{
		ofstream close_file(get_path_to_buffer());
		close_file.close();
		close_file.clear();

		if (close_file.is_open())//если все еще открыт
		{
			cout << "Error! The File is open!\n";
		}
		else
			std::cout << "Еhe file has been closed. Testing complete!\n";//тест
	}
	if (remove(path_to_buffer.c_str()))//удаляем буфер
		cerr << "Error! Can't delete file!\n";//не удалился
	set_path_to_buffer("");//инициализируем поля пустыми строками
	set_path_to_file("");//"---"---"

	return;
}

void Text_editor::set_path_to_file(string path_to_file)//сеттер поля пути к файлу
{
	this->path_to_file = path_to_file;

	return;
}

void Text_editor::set_path_to_buffer(string path_to_buffer)//сеттер поля пути к буферу
{
	this->path_to_buffer = path_to_buffer;

	return;
}

string Text_editor::get_path_to_file()//геттер поля пути к файлу
{
	return path_to_file;
}

string Text_editor::get_path_to_buffer()//геттер поля пути к буферу
{
	return path_to_buffer;
}

Text_editor::~Text_editor()//дтор
{
}
