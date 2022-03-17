#pragma once
#include "Stringed.h"

//класс
//представляет бас-гитару
//наследует от струнных
class BassGuitar :
    public Stringed
{
public:
    BassGuitar();//ктор
    void play();//переопределяем функцию Играть()
private:
    void set_string_count();//установка количества струн в бас гитаре
};

