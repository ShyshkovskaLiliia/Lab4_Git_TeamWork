#include "Lab4.h"
#include <iostream>

void MenuExample() {
	std::cout << "     Menu    \n";
	std::cout << "    1   Bobble_sort  \n";
	std::cout << "    2   Insertion_sort  \n";
	std::cout << "    3   Quick_sort  \n";

	std::cout << "    4 or e  Exit \n";

}
void Example()
{
	std::cout << "Lab4Git\n";

	char ch = '5';
	do {
		system("cls");
		MenuExample();
		ch = std::cin.get();

		std::cin.get();

		switch (ch) { 
		case '1':  Spacebobble_sort::mainbooble_sort();   break;
		case '2':  SpaceInsertionSort::exampleInsertionSort();   break;
		case '3':  SpaceQuickSort::exampleQuickSort();   break;
		case '4':  return;
		case 'e':  return;
		}
		std::cout << " Press any key and enter\n";
		ch = std::cin.get();
	} while (ch != '6');

	return;
}



