#include "MainMenu.h"
#include <iostream>
#include <locale>

void MainMenu::CreateMenu() {
	system("cls");
	std::cout << "Please Select One Object:\n\n";
	for (MenuObject a : categs) {
		std::cout << a.marked ? a.name + "< " : a.name + " ";
		std::cout << std::endl;
	}
}
void MainMenu::Move(bool upMove) {
	MenuObject* j;
	for (MenuObject a : categs) {
		if (a.marked) {
			j = &a;
			a = MenuObject(a.name, false);
		}
	}
}
void MainMenu::KeyAnalyze(std::string key) {
	if (key.empty) return;
	std::locale loc;
	if (std::toupper(key, loc)._Equal("UPARROW")) Move(true);
	if (std::toupper(key, loc)._Equal("DOWNARROW")) Move(false);
	if (std::toupper(key, loc)._Equal("ESCAPE")) system("exit");
}