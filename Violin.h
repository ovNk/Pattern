#pragma once
#include "Stringed.h"

//класс
//представляет виолончель
//наследует от струнных
class Violin :
    public Stringed
{
public:
    Violin();
    void play();
private:
    void set_string_count();
};

