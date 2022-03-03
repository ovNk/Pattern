/*
Задание 1
    Спроектировать универсальный каркас многодокументного
    редактора. Редактор должен представлять основные функции работы с документом:
        1. Создание.
        2. Открытие.
        3. Сохранение.
        4. Сохранение под новым именем.
        5. Печать. *************************Немного не поняла про печать, так что сделала вывод в консоль
        6. Закрытие.
    Предложенный объектно-ориентированный дизайн каркаса
    редактора должен без изменений использоваться для разработки
    редакторов документов различных типов.
Задание 2
    На основании каркаса, разработанного в задаче 1,
    спроектировать редактор, предназначений для работы с текстовыми документами.
Задание 3
    На основании каркаса, разработанного в задачи 1,
    спроектировать ре-дактор, предназначений для работы с графическими
    документами различных форматов. Редактор обязательно должен иметь
    возможность сохранять изображение в выбранном графическом формате,
    а также иметь палитру инструментов для обработки изображения.*********** Не поняла как это возможно реализовать*/
// Pattern_Task_1_Nikishina_SPU011.cpp
/// D:\Users\oniki\Desktop\PATTERN_TEST\test12345.txt
//D:\Users\oniki\Desktop\PATTERN_TEST\
//test_create_pattern.txt
//  bmptest.bmp

#include <iostream>
#include "Factory.h"
#include "Factory_text.h"
#include "Text_editor.h"
#include "Factory_image.h"
#include "Image_editor.h"

int main()
{
    //создание графического редактора
    Factory_image* Factory_image_1 = new Factory_image;
    Editor* image_editor = Factory_image_1->create_editor();

    //тестирование графического редактора
    image_editor->create_file();//создать файл
    image_editor->open_file();//открыть файл
    image_editor->save_file();//сохранить файл
    image_editor->save_file_as();//сохранить файл как
    image_editor->close_file();//закрыть файл

    //создание текстового редактора
    Factory_text* Factory_text_1 = new Factory_text;
    Editor* text_editor = Factory_text_1->create_editor();

    //тестирование текстового редактора
    text_editor->create_file();//создать файл
    text_editor->open_file();//открыть файл
    text_editor->save_file();//сохранить файл
    text_editor->save_file_as();//сохранить файл как
    text_editor->print_file();//печать файла(в консоль)
    text_editor->close_file();//закрыть файл
    
    return 0;

}