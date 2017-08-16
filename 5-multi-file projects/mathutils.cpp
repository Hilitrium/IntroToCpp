#include<iostream>
#include"mathutils.h"

int min(int a, int b){
	int result;
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
	return result;
}

int max(int a, int b) {
	int result;
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
	return result;
}

int clamp(int lower, int upper, int value) {
	int results;
	if (value < lower) {
		return lower;
	}
	else if (value > upper) {
		return upper;
	}
	else {
		return value;
	}
}

int dist(float x1, float y1, float x2, float y2) {
	float temp1 = 0;
	float temp2 = 0;
	float temp3 = 0;
	float final = 0;

	temp1 = (x2 - x1) * (x2 - x1);
	temp2 = (y2 - y1) * (y2 - y1);
	temp3 = temp1 + temp2;
	final = sqrt(temp3);

	return final;
}