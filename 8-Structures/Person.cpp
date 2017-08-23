#include"Person.h"
#include<iostream>
//define that function
void describePerson(Person person) {
	std::cout << "Age: " << person.age << std::endl;
	std::cout << "WGT: " << person.weight << std::endl;
	std::cout << "CHA: " << person.charisma << std::endl;
	std::cout << "STR: " << person.strength << std::endl;
	std::cout << "DEX: " << person.dexterity << std::endl;
}

void levelUp(Person &person) {
	person.age = person.age + 1;
}