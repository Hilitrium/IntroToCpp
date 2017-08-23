#include "wallet.h"
#include <iostream>
// Helper Functions for piggybank
void calcPiggybankNotes(piggyBank bills) {
	bills.total = bills.oneBills + (bills.twoBills * 2) + (bills.fiveBills * 5);
	std::cout << "total bill value: " << bills.total << std::endl;
}

void calcPiggybankCoins(piggyBank coins) {
	coins.total = (coins.quarters * 25) + (coins.dimes * 10) + (coins.nickels * 5) + coins.pennies;
	std::cout << "total coin value:	" << coins.total << std::endl;
}