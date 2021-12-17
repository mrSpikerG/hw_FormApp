#include <iostream>
#pragma once
class c_Form
{
private:
	char* name;
	unsigned short age;
public:

	c_Form()
	{

	}
	c_Form(char* name, unsigned short age)
	{
		this->name = new char[100];
		strcpy_s(this->name, strlen(name) + 1, name);

		this->age = age;
	}

	char* getName() {
		return this->name;
	}
	void setName(char* name) {
		this->name = new char[100];
		strcpy_s(this->name, strlen(name) + 1, name);
	}

	unsigned short getAge() {
		return age;
	}
	void setAge(unsigned short age)
	{
		this->age = age;
	}

	friend std::ostream& operator<<(std::ostream& out,c_Form form) {
		out << "\nИмя: "<<form.getName();
		out << "\tВозраст: " << form.getAge();
		return out;
	}
};

