#pragma once
#include "Stringed.h"

//класс
//представляет балалайку
//наследует от струнных
class Balalaika :
    public Stringed
{
public:
    Balalaika();//ктор
    void play();//переопределяем функцию Играть()
private:
    void set_string_count();//установка количества струн в инструменте
};

