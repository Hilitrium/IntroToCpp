#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int age = 19;

	std::cout << "this is written into the code" << std::endl;  // print a text literal
	std::cout << "age" << std::endl;						   // print an text literal
	std::cout << age << std::endl;							   // print an integer variable

	age = age + 1;

	std::cout << age << std::endl;

	int first = 2;
	int second = 55;

	int sum = first + second;
	std::cout << first << " plus " << second << " equals " << sum << std::endl;

	float numA = 5.5f;
	float numB = 0.5f;

	float numSum = numA + numB;
	std::cout << numA << " plus " << numB << " equals " << numSum << std::endl;

	int userInput = 0;

	std::cin >> userInput;

	std::cout << "Here is your number: " << userInput << std::endl;
	
	//Problem A - Correct

	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;

	//problem B - Correct

	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;

	//problem C - Correct

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;

	//Problem D - Correct

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;

	//Problem E - Correct

	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	//Problem F - Correct

	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;

	//Celsius To Fahrenheit

	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f; 

	std::cout << "Input Celsius" << std::endl;
	std::cin >> degCelsius;

	degFahrenheit = degCelsius * 1.8f + 32;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	// Area of a Rectangle

	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	std::cout << "Input Rectangle Width" << std::endl;
	std::cin >> rectWidth;
	std::cout << "Input Rectangle Height" << std::endl;
	std::cin >> rectHeight;
	
	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	// Average of Five
	
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	std::cout << "Input Five Numbers" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	avg = (a + b + c + d + e) / 5;

	std::cout << "Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg:  " << avg << std::endl;

	// Number Swap
	
	int x1 = 13;
	int y1 = 24;
	int temp = 0;
	
	std::cout << "Input Two Numbers" << std::endl;
	std::cin >> x1;
	std::cin >> y1;

	temp = y1;
	y1 = x1;
	x1 = temp;
	

	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x1 << std::endl;
	std::cout << "y is " << y1 << std::endl;

	// Fun Facts For Your Age

	int age1 = 0;
	int months = 0;

	std::cout << "Input your age" << std::endl;
	std::cin >> age1;

	months = age * 12;


	std::cout << "Howdy! You are " << age1 << " years old!";
	std::cout << "You've been alive for at least " << months << " months!" << std::endl;
	std::cout << "Decades Existed: " << age / 10 << "\n";
	std::cout << "Scores Existed: " << age / 20 << "\n";

	


	system("pause");
} 

