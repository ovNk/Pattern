#pragma once
#include "Editor.h"

//абстрактная фабрика

class Factory
{
public:
	virtual Editor* create_editor() = 0;//
	virtual ~Factory()
	{

	}
};
