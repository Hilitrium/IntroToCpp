#pragma once

struct Person {
	int charisma;
	int strength;
	int dexterity;
	
	int age;
	float weight;

	float cash;

};
// declared a function
void describePerson(Person target);
void levelUp(Person &person);
