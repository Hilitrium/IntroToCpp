#include"student.h"

float scoreAvg(students kids1[], int size)
{
	float avg = 0;
	for (int i = 0; i < size; i++) {
		//avg = kids1[size]
		avg += kids1[i].lastExam;
	}
	return avg / size;
}

void studentInfo(students info) {
	std::cout << "student ID: " << info.sID << " Enrolled Course: " << info.enroll << " Last Exam: " << info.lastExam << std::endl;
}

void studentAnalytics(students analize) {
	//float avgScore(float kid[], int size); {
	//	for (int i = 0; i < size; i++)
	//}
}