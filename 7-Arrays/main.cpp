#include<iostream>	

//void  printNumbers(int nums[], int size) {
//	for (int i = 0; i < size; ++i) {
//		std::cout << nums[i] << std::endl;
//	}
//}

	//closed Problem 1
void printNums1(int nums1[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << nums1[i] << std::endl;
	}
}
void printNums2(int nums2[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << nums2[i] << std::endl;
	}
}
void printNums3(int nums3[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << nums3[i] << std::endl;
	}
}

	//closed Problem 2
void printSum1(int Sum1[], int size) {
	
	
}
int main() {
	////declare and define integers arrays
	//int numbers[5];

	//for (int i = 0; i < 5; ++i) {
	//	numbers[i] = 0;
	//}
	//
	//int numbersList[]{ 0, 0, 0, 0, 0 };

	//// accessing arrays using indicites
	//numbers[0] = 5;
	//std::cout << numbers[0] << std::endl;
	////iteration over an array	
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << numbers[i] << std::endl;
	//}

	//// assign one to every other element
	//for (int i = 0; i < 5; i += 2) {
	//	numbers[i] = 1;
	//}
	//// passing arrays into a function
	//printNumbers(numbers, 5);
	
	//closed Problem 1
	int nums1[]{ 0, 1, 2, 3};
	printNums1(nums1, 4);
	int nums2[]{ 2, 4, 8, 16, 32, 64};
	printNums2(nums2, 6);
	int nums3[]{ 33, 74, 52, 9 };
	printNums3(nums3, 4);
	system("pause");

	//closed Problem 2
	int Sum1[]{ 0, 1, 2, 3 };
	printSum1(Sum1, 4);
	int Sum2[]{ 2, 4, 8, 16, 32, 64 };
	//printSum2(Sum2, 6);
	int Sum3[]{ 33, 74, 52, 9};
	//printSum3(Sum3, 4)
}