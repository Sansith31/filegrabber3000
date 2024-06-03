#include <iostream>
#include <Menu.hpp>

int main() {
	int choice {0};

	system("color 02");

	do {
		system("cls");
		choice = Menu::MainMenu();
	} while (choice != 1 && choice != 2 && choice != 0);

	switch(choice) {
	case 1:
		std::cout << "T B I" << std::endl;
	case 2:
		do {
			system("cls");
			choice = Menu::ConvertMenu();
		} while (choice != 1 && choice != 2 && choice != 3 && choice != 0);
	case 0:
		system("exit");
	}
}