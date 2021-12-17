#include <iostream>
#include "c_Form.h"

void showYoung(c_Form *funcForma) {
	for (int i = 0; i < 10; i++) {
		if (funcForma[i].getAge() < 18) {
			std::cout << funcForma[i];
		}
	}
}
int main()
{

	c_Form All_Forms[10];

	unsigned short age;
	for (int i = 0; i < 10; i++) {
		char* TEMP = new char[100];

		std::cout << "\nВведите имя: ";
		gets_s(TEMP, 100);
		All_Forms[i].setName(TEMP);
		delete TEMP;
		
		std::cout << "Введите возраст: ";
		std::cin >> age;
		std::cin.ignore();
		All_Forms[i].setAge(age);
	}
	showYoung(All_Forms);
}
