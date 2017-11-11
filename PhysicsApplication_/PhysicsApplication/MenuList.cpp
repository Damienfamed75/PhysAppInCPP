#include "MenuList.h"
#include <string>

MenuList::MenuList(std::string args[]) {
	if (args == NULL) val = false;
	categories.push_front(MenuObject("a", true));
	categories.push_front(MenuObject("b", false));
	categories.push_front(MenuObject("c", false));
	categories.push_front(MenuObject("d", false));
	if (val)
		for (int i = 0; i < args->length; i++)
			categories.push_front(MenuObject(args[i], false));
}