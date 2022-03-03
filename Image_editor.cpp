#include "Image_editor.h"

void Image_editor::create_file()
{
	string path;//путь
	string file_name;//имя файла

	cout << "Enter path: ";
	cin >> path;
	cout << "Enter filename: ";
	cin >> file_name;

	set_path_to_file(path + file_name);//полный путь к файлу
	set_path_to_buffer(path + "buff.bmp	");//к буферу, буфер всегда bmp

	ofstream create_buff(get_path_to_buffer(), ios::binary);// создаем буфер для записи

	if (!create_buff.is_open())//проверка открыт ли файл
	{
		std::cout << "Error! File was not open!\n";//НЕТ
	}

	return;
}

void Image_editor::open_file()
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
	set_path_to_buffer(path + "buff.bmp");//к буферу

	ifstream opened_file(get_path_to_file().c_str(), ios::binary);//файл, открываем для чтения
	ofstream opened_buffer(get_path_to_buffer().c_str(), ios::binary);//буффер, открываем в режиме записи

	if (!opened_buffer.is_open() || !opened_file.is_open())//не удалось открыть буфер или файл
	{
		opened_file.close();
		opened_buffer.close();
		std::cout << "Error! File was not open!\n";
	}

	opened_buffer << opened_file.rdbuf();//копируем данные из файла в буфер

	return;
}

void Image_editor::save_file()
{
	ofstream file;
	file.open(get_path_to_file(), ios::binary);//файл, открываем в режиме записи
	ifstream buffer;
	buffer.open(get_path_to_buffer(), ios::binary);//буфер, открываем в режиме чтения
	if (file.is_open() && buffer.is_open())
		file << buffer.rdbuf();//копируем из буфера в файл
	else
		cout << "Error! Can't save the file!\n";
	return;
}

void Image_editor::save_file_as()//сохранение в выбранном формате
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

void Image_editor::print_file()
{
	/*Заглушка*/
	cout << "The file is printed.\n";

	return;
}


void Image_editor::close_file()
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

void Image_editor::set_path_to_file(string path_to_file)//сеттер поля пути к файлу
{
	this->path_to_file = path_to_file;

	return;
}

void Image_editor::set_path_to_buffer(string path_to_buffer)//сеттер поля пути к буферу
{
	this->path_to_buffer = path_to_buffer;

	return;
}

string Image_editor::get_path_to_file()//геттер поля пути к файлу
{
	return path_to_file;
}

string Image_editor::get_path_to_buffer()//геттер поля пути к буферу
{
	return path_to_buffer;
}

Image_editor::~Image_editor()//dtor
{
}
