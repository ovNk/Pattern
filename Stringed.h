#pragma once
#include "MusicalInstrument.h"

//Абстрактный класс
//представляет струнные инструменты
class Stringed :
    public MusicalInstrument
{
protected:
    int string_count;//количество струн

    //чистая виртуальная сет-функция
    //устанавливает количество струн в инструменте
    virtual void set_string_count() = 0;
public:
    //геттер
    int get_string_count()
    {
        return string_count;
    }
};

