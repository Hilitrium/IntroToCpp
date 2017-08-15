#include <iostream>

int main() {
	bool isHappy = false;

	if (isHappy) {
		std::cout << "I am totes happy" << std::endl;
	}
	else {
		std::cout << "I am mucho sadz" << std::endl;
	}

	std::cout << "How happy are you?" << std::endl;
	int happiness = 0;
	//std::cin >> happiness;

	if (happiness > 75) {
		std::cout << "You are very happy!" << std::endl;
	}
	else if (happiness > 30) {
		std::cout << "You are rather content." << std::endl;
	}
	else {
		std::cout << "woe is you." << std::endl;
	}

	//problem A

	int numberA = 15;
	if (numberA > 10);
	{
		numberA = numberA * 2;
	}

	std::cout << "A) " << numberA << std::endl;

	//problem B

	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;

	//problem C

	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << std::endl;

	//problem D

	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) " << numberD << std::endl;

	//problem E
	
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << std::endl;

	//problem F

	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) " << numberF << std::endl;

	//problem G

	int numberG = 6;
	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << std::endl;

	//problem 2 - Number Judging

	int number = 0;
	std::cout << "Input Number between 1 and 100." << std::endl;
	std::cin >> number;

	std::cout << number << " ";

	if (number > 101)
	{
		std::cout << "please choose between 1 and 100" << std::endl;
	}
	else if (number < 1)
	{
		std::cout << "please choose between 1 and 100" << std::endl;
	}
	else if (number > 51)
	{
		std::cout << "That is a large number" << std::endl;
	}
	else if (number < 49)
	{
		std::cout << "that is a small number" << std::endl;
	}
	else if (number == 50)
	{
		std::cout << "That is a balanced number" << std::endl;
	}

	//problem 3 - Age Gate

	int age = 0;
	std::cout << "input your age" << std::endl;
	std::cin >> age;

	if (age < 18)
	{
		std::cout << "you are a minor" << std::endl;
	}
	else if (age >= 18)
	{
		std::cout << "you are an adult" << std::endl;
			if ((age >= 50) && (age < 65))
			{
				std::cout << "and are eligible to join AARP" << std::endl;
		}
			else if (age >= 65)
			{
				std::cout << "and are eligible for retirement benefits" << std::endl;
			}
	}

	//problem 4 - The smallest of three numbers

	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	std::cout << "input three numbers" << std::endl;
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;

	if (number1 < number2/* && number1 <= number3*/)
	{
		if (number1 < number3)
		{
			std::cout << number1 << std::endl;
		}
	}
	else if (number2 < number3)
	{
		std::cout << number2 << std::endl;
	}
	else 
	{
		std::cout << number3 << std::endl;
	}

	//(open) problem 1

	int num = 0;
	std::cout << "Please input a whole number" << std::endl;
	std::cin >> num;

	num = num % 2;

	if (num == 1)
	{
		std::cout << "odd" << std::endl;
	}
	else if (num == 0)
	{
		std::cout << "even" << std::endl;
	}
	// the value of true: 1, value of false: 0


	// 4 % 2 = 0 = false
	// 3 % 2 = 1 = true

	//problem 2
	std::cout << "give me a range and a number" << std::endl;
	int lower = 0;
	int upper = 0;
	int value = 0;

	std::cin >> lower;
	std::cin >> upper;
	std::cin >> value;

	if (value < lower)
	{
		value = lower;
	}
	else if (value > upper)
	{
		value = upper;
	}

	std::cout << value << "is your clamped val" << std::endl;

	system("pause");
}