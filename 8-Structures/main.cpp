	
#include"Person.h"
#include"wallet.h"
#include"student.h"

 float main() {
	 Person me;
	 me.age = 22;
	 me.weight = 189.0f;

	 me.charisma = 3;
	 me.strength = 150;
	 me.dexterity = 90;

	 me.cash = 2500.0f;

	 Person you = { 90, 120.0f, 23, 0, 300, 0 };

	 describePerson(me);
	 levelUp(me);

	// closed problems 1 and 2
	 piggyBank bills;
	 bills.oneBills = 5;
	 bills.twoBills = 3;
	 bills.fiveBills = 10;

	 piggyBank coins;
	 coins.quarters = 15;
	 coins.dimes = 9;
	 coins.nickels = 14;
	 coins.pennies = 13;
	
	 calcPiggybankNotes(bills);
	 calcPiggybankCoins(coins);
	 
	 //open problems
	 //Problem 1
	 students info;
	 info.sID = 23006;
	 info.enroll = 1;
	 info.lastExam = 45;

	 students jerry;
	 jerry.sID = 23006;
	 jerry.enroll = 1;
	 jerry.lastExam = 65;
	 
	 students clyde;
	 clyde.sID = 23006;
	 clyde.enroll = 1;
	 clyde.lastExam = 22;

	 students classroom[3] = { info,jerry,clyde };

	 
	 studentInfo(info);
	 
	 std::cout << scoreAvg(classroom, 3) << std::endl;

	 while (true) {} // 
	 
}