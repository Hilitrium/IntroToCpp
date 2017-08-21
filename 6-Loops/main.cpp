#include <iostream>
#include <cstdlib>
//void printXY(int a, int b)
//{
//	while (a <= b) {
//		std::cout << a << std::endl;
//		a++;
//	}
//}
//
//int promptLargest(int qtyRequested) {
//
//	int largest = INT_MIN;
//	for (int i = 0; i < qtyRequested; ++i) {
//		std::cout << "Num Please" << std::endl;
//		int input = 0;
//		std::cin >> input;
//
//		if (input > largest) {
//			largest = input;
//		}
//		return largest;
//	}
//}

void EvenOrOdd(int start, int end) {
	for (int i = start; i <= end; ++i)
	{
		if (i % 2) {
			std::cout << "odd" << std::endl;
		}
		else {
			std::cout << "even" << std::endl;
		}
	}
}

void fizzBuzz(int start, int end) {
	for (int i = start; i <= end; ++i) {
		if (i % 3 == 0) {
			std::cout << "Fizz";
			if (i % 5 == 0) {
				std::cout << "Buzz";
			}
		}
		if (i % 5 == 0)
			std::cout << "Buzz";
		if (i % 3 == 0) {
			std::cout << "Buzz";
			}
	}
	
	std::cout << "\n";
}

void gridGen(int width, int height) {
	for (int i = 0; i < height; ++i) {
		//printing out the characters for that line
		for (int i = 0; i < width; ++i) {
			std::cout << "X";
		}
		std::cout << "\n";
	}
}

void guessTheNumber(int lower, int upper, int tryCount) {
	int secret = rand() % (upper - lower) + lower;
	bool success = false;
	
	for (int i = 0; i < tryCount; ++i) {
		// prompt the user for imput
		int input = 0;
		std::cout << "Make a guess" << std::endl;
		std::cin >> input;
		//pass judgement on the input
		if (input > secret) {
			std::cout << "too high" << std::endl;
		}
		else if (input < secret) {
			std::cout << "too low" << std::endl;
		}
		else {
			success = true;
			break;
		}
	}
	if (success) {
		std::cout << "ya did it" << std::endl;
	}
	else {
		std::cout << "ya suck" << std::endl;
	}
	system("pause");
}

int main() {
	fizzBuzz(1, 10);
	gridGen(2, 5);
	guessTheNumber(1, 10, 5);
	//while

	int iter = 0;
	while (iter < 11) {
		
		std::cout << iter << std::endl;
		iter++;
	}

	//for
	// - init
	// - cond
	// - expr (at the end of an iteration)
	for (int i = 0; i < 11; ++i) {
		std::cout << i << std::endl;
	}

	// do-while

	int j = 0;
	do {
		std::cout << j << std::endl;
		++j;
	} while (j < 11);

	// simple input validation

	int userInput = 1;
	do {
		std::cout << "Give me a number between 1 and 5" << std::endl;
		//std::cin >> userInput;
	} while (userInput < 1 || userInput > 5);
	std::cout << "yay" << std::endl;

	//closed Problems
	//Problem 1

	for (int a = 1; a <= 100; ++a) {
		std::cout << a << std::endl;
	}

	//Problem 2

	int b = 100;
	while (b >= 1) {
		std::cout << b << std::endl;
		b--;
	}

	//Problem 3

	int c = 1995;
	do {
		std::cout << c << std::endl;
		++c;
	} while (c <= 2017);

	//Problem 4



	//int userInput1 = 0;
	//int userInput2 = 0;
	//int userInput3 = 0;
	//do {
	//std::cout << "What are your favorite positive numbers? Please answer one at a time." << std::endl;
	//std::cout << "what's the first number" << std::endl;
	//std::cin >> userInput1;
	//if (userInput1 < 0) {
	//	std::cout << "that doesn't look like a positive number." << std::endl;
	//}
	//} while (userInput1 >= 0);
	//std::cout << "okay, your first number is " << userInput1 << std::endl;
	//while (userInput2 >= 0);
	//std::cout << "okay, your favorites have been " << userInput1 << "and " << userInput2 << std::endl;

	//for (int a = userInput1; a >= 0;) {
	//	std::cout << "okay, your first number is " << userInput1 << std::endl;
	//	break;
	//}
	//
	//std::cout << "what's the second number" << std::endl;
	//std::cin >> userInput2;
	//if (userInput2 < 0) {
	//	std::cout << "that doesn't look like a positive number." << std::endl;
	//}
	//for (int a = userInput2; a >= 0;) {
	//	break;
	//}

	//std::cout << "okay your favorites have been " << userInput1 << " and " << userInput2 << std::endl;
	//std::cout << "what's your third number" << std::endl;
	//std::cin >> userInput3;
	//if (userInput2 < 0) {
	//	std::cout << "that doesn't look like a positive number." << std::endl;
	//}
	//for (int a = userInput3; a >= 0;) {
	//	break;
	//}
	//std::cout << "okay, your favorite numbers are " << userInput1 << ", " << userInput2 << " and " << userInput3 << std::endl;

	//open Problems
	//Problem 1

	
	//Problem 5
	/*int x = 0;
	int y = 0;
	std::cout << "input two numbers that will act as a range." << std::endl;
	std::cin >> x;
	std::cin >> y;

	if (x > y) {
		std::cout << "the count will start at " << y << " and count to " << x << std::endl;
		printXY(y, x);
	}
	else {
		std::cout << "the count will start at " << x << " and count to " << y << std::endl;
		printXY(x, y);
	}*/

	//Problem 6
	/*int start = -999999999999999;
	int userNum;
	std::cout << "input random numbers" << std::endl;
	std::cin >> userNum;
	while (userNum > start) {
		if (userNum >= start) {
			start = userNum;
			std::cout << userNum << std::endl;
		}
		else {
			std::cout << start;
		}
	}*/

	/*int start = 0;
	int userNum;
	std::cout << "input random numbers and i will output the largest one." << std::endl;*/
	//std::cout << "Largest " << promptLargest << std::endl;

	EvenOrOdd(2, 3);

	
	system("pause");
}