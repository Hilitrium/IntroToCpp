#include <iostream>

#include <cmath>


//closed Problem 1
		void helloFunctions() {
			std::cout << "Hello World" << std::endl;
		}

		int squared(int n)
		{
			return n * n;
		}

		/*
		int pythagoras(int a, int b)
		{
			int csquared = squared(a) + squared(b);
			return sqrt(csquared);
		}
		*/

		void squareConsole() {
			int userInt = 0;
			std::cout << "please input a whole number" << std::endl;
			std::cin >> userInt;

			//userInt = userInt * userInt; // square op

			userInt = squared(userInt);

			std::cout << "the square of your number is " << userInt << std::endl;
		}

		void decimal() {
			float numerator = 0;
			float denominator = 0;
			float decimal = 0;
			std::cout << "please input a fraction, numerator then denominator" << std::endl;
			//std::cin >> numerator;
			//std::cin >> denominator;

			decimal = numerator / denominator;

			std::cout << "your decimal is " << decimal << std::endl;
		}
		void difference() {
			float user1 = 0;
			float user2 = 0;
			float user3 = 0;
			float temp1 = 0;
			float temp2 = 0;
			float temp3 = 0;
			std::cout << "please input three positive numbers largest to smallest" << std::endl;
			//std::cin >> user1;
			//std::cin >> user2;
			//std::cin >> user3;

			temp1 = user1 - user2;
			temp2 = user1 - user3;
			temp3 = user2 - user3;

			if (temp1 > temp2/* && number1 <= number3*/)
			{
				if (temp1 > temp3)
				{
					std::cout << temp1 << std::endl;
				}
			}
			else if (temp2 > temp3)
			{
				std::cout << temp2 << std::endl;
			}
			else
			{
				std::cout << temp3 << std::endl;
			}
		}

	//Problem 2
		void numberComma() {
			int input1 = 0;
			int input2 = 0;
			std::cout << "input two whole numbers" << std::endl;
			//std::cin >> input1;
			//std::cin >> input2;

			std::cout << input1 << "," << input2 << std::endl;
		}

	//problem 3
		int sum1(int a, int b, int c) {
			int result = a + b + c;
			return result;
		}

		void sum() {
			int input3 = 0;
			int input4 = 0;
			int input5 = 0;
			int output2 = 0;
			std::cout << "input three whole numbers" << std::endl;
			//std::cin >> input3;
			//std::cin >> input4;
			//std::cin >> input5;

			output2 = sum1(input3, input4, input5);

			std::cout << "the sum of your numbers is " << output2 << std::endl;
		}

		int min1(int a, int b) {
			int result;
				if (a <= b) {
					return a; 
				}
				else {
					return b;
				}
			return result;
		}

		void min() {
			int number1 = 0;
			int number2 = 0;
			int output3 = 0;
			std::cout << "input two whole numbers" << std::endl;
			std::cin >> number1;
			std::cin >> number2;

			output3 = min1(number1, number2);

			std::cout << "the smaller number is " << output3 << std::endl;
		}

		int max1(int a, int b) {
			int result;
			if (a >= b) {
				return a;
			}
			else {
				return b;
			}
			return result;
		}

		//open Problem 1

		void max() {
			int number3 = 0;
			int number4 = 0;
			int output4 = 0;
			std::cout << "intput two whole numbers" << std::endl;
			std::cin >> number3;
			std::cin >> number4;

			output4 = max1(number3, number4);

			std::cout << "the larger number is " << output4 << std::endl;
		}


		//Problem 3

		int clamp1(int a, int b, int c) {
			int result;
			if (c < a) {
				return a;
			}
			else if (c > b) {
				return b;
			}
			else {
				return c;
			}
		}

		void clamp() {
			int userinp = 0;
			int userinp1 = 0;
			int userinp2 = 0;
			std::cout << "input three whole numbers" << std::endl;
			std::cin >> userinp;
			std::cin >> userinp1;
			std::cin >> userinp2;

			std::cout << "Your clamped number is "<<  << std::endl;


		}
		int main() {
			helloFunctions();
			squareConsole();
			decimal();
			difference();
			numberComma();
			sum();
			min();
			max();
			clamp();

			/*int input = 0;
			std::cout << "input a number to square: ";
			std::cin >> input;
			std::cout << squared(input) << std::endl;*/

			system("pause");
		}
