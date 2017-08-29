#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"survivePaths.h"
#include"charictorStats.h"
using namespace std;

int main() {
	//intro screen
	cout << "welcome to Survive - Warhammer 40k. During this game you will be prompted to input	" << endl;
	cout << "either a number or letters, please only input the options you are given. In the next screen you " << endl;
	cout << "will be able to name and create your charictor." << endl;
	cout << "---------------Press any key to continue---------------" << endl;
	char name[50];
	cout << "Please name your Primaris Marine." << endl;
	cin.getline(name, 50);
	system("pause");

	//Charictor creator
	while (true) {
		void charictorCreator(); {
			system("cls");
			//char name[50];
			int sT = 0;
			int aG = 0;
			int wH = 0;
			primarisMarine player;
			//cout << "Please name your Primaris Marine." << endl;
			//cin.getline(name, 50);
			//cout << name << endl;
			//system("pause");
			cout << "you have 9 points to spend between your strength, weapon handling, and your agility. " << endl;
			cout << "you will also be able to equip your chosen weapons which will effect your stats." << endl;
			cout << "Set your strength." << endl;
			cin >> player.ST;
			sT = player.ST;
			cout << "set your weapon handling." << endl;
			cin >> player.WH;
			wH = player.WH;
			cout << "set your agility." << endl;
			cin >> player.AG;
			aG = player.AG;
			//cout << sT;
			cout << player.ST;
			cout << player.WH;
			cout << player.AG;

			if (sT + aG + wH == 9) {
				cout << "it worked." << endl;
				break;
				//choiceOne;
			}
			else {
				cout << "please use exactly 9 skill points." << endl;
				//charictorCreator();
			}
			system("pause");
		}
	}
	cout << "it worked " << name << endl;
	system("pause");
}
