#pragma once
#include <string>
#include "MenuObject.h"
#include "NodeList.h"
#include <list>

class MenuList {
	public:
		std::list<MenuObject> categories;
	private:
		bool val = true;
	public:
		MenuList(std::string args[]);
};