#pragma once
#include "Factory.h"

// конкретная фабрика (текст-редактор)

class Factory_text :
    public Factory
{
public:
    virtual Editor* create_editor();
    ~Factory_text()
    {

    }
};

