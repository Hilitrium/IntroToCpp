#pragma once

// defining piggybank
struct piggyBank {
	float oneBills;
	float twoBills;
	float fiveBills;
	
	float quarters;
	float dimes;
	float nickels;
	float pennies;

	float total;
};

void calcPiggybankNotes(piggyBank bills);
void calcPiggybankCoins(piggyBank coins);