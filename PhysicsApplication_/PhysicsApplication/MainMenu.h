#pragma once
#include <string>
#include <list>
#include "MenuList.h"


class MainMenu {
	public:
		MenuList items;
		std::list<MenuObject> categs;
		bool endMainMenu = false;
		int *****a;
		void CreateMenu();
		void MenuNav();
	private:
		void Move(bool upMove);
		void KeyAnalyze(std::string key);
};