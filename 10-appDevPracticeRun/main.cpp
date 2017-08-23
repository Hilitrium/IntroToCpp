#include<Iostream>
#include<conio.h>
#include<stdlib.h>
#include"branchingPaths.h"
using namespace std;

int main() {
	// Intro Screen
	char name[50];
	cout << "what is your name?" << endl;
	cin.getline(name, 50);
	system("cls");
	//cout << name << endl;
	cout << "Hello " << name << ", Welcome to <Name of Game undecided> during this game you will" << endl;
	cout << "be asked to input a number to choose your path, please don't input" << endl;
	cout << "letters unless asked to." << endl;
	cout << "---------------Press any key to continue---------------" << endl;
	system("pause");

	//First Choice
	system("cls");
	int choiceOne = 0;
	cout << "You wake up in the middle of a very dry desert, you need to find a water source or somewhere to get shade" << endl;
	cout << "or you will die. In the distance you see two things, the first is a shack you assume to be abandoned." << endl;
	cout << "The second is a small group of trees and cacti which could mean a nearby water source." << endl;
	cout << "where do you want to go?" << endl;
	while (choiceOne != 1 && choiceOne != 2)
	{
		cout << "Enter '1' to go to the shack, or press '2' to go to the trees." << endl;
		cin >> choiceOne;
	}
	
	if (choiceOne == 1) {
		system("cls");
		optionOne();
		system("pause");
	}
	else if (choiceOne == 2) {
		system("cls");
		cout << "it worked" << endl;
		system("pause");
	}
}