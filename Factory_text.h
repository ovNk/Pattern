#pragma once
#include "Factory.h"

// ���������� ������� (�����-��������)

class Factory_text :
    public Factory
{
public:
    virtual Editor* create_editor();
    ~Factory_text()
    {

    }
};

