#pragma once
#include "Factory.h"
#include "Image_editor.h"

// конкретная фабрика (графический редактор)

class Factory_image :
    public Factory
{
public:
    Editor* create_editor();
    ~Factory_image()
    {

    }


};

