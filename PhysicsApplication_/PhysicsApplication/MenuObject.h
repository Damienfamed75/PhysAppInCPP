#pragma once
#include <string>
struct MenuObject {
	public:
		std::string name;
		bool marked;
		MenuObject(std::string _name, bool _marked);
};