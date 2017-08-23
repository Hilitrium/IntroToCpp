#pragma once
#include<iostream>
//student
struct students {
	int sID;
	int enroll;
	int lastExam;
};

float scoreAvg(students kids1[], int size); 

void studentInfo(students info);