// ClassExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

class Person
{
private:
	double height;
	std::string name;

public:

	void setPersonHeight(double hgt);
	double getPersonHeight();
	void setPersonName(std::string name);
	std::string getPersonName();
	Person();
	~Person();

};
void Person::setPersonHeight(double hgt) {
	height = hgt;
}
double Person::getPersonHeight(void) {
	return height;
}
void Person::setPersonName(std::string nm) {
	name = nm;
}
std::string Person::getPersonName(void) {
	return name;
}

Person::Person(void) {
	std::cout << "Creating person...\n";
	std::string namechoice;

	std::cout << "What is their name? ";
	std::cin >> namechoice;
	Person::setPersonName(namechoice);

	double heightchoice;
	std::cout << "What is " << namechoice << "'s height? ";
	std::cin >> heightchoice;
	Person::setPersonHeight(heightchoice);
}

Person::~Person(void)
{
	std::cout << "Deleting " << name;

}

int main()
{
	Person person1;

	std::cout << person1.getPersonName() << "'s height is " << person1.getPersonHeight() << "\n";

	std::cout << "Press any key to delete " << person1.getPersonName() << "\n";
	std::string tripe;
	std::cin >> tripe;

	return 0;

}