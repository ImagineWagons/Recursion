#ifndef QUICKSORT
#define QUICKSORT

#include <iostream>
#include <vector>
using namespace std;

struct Quicksort {
	//Functions
	Quicksort() {}
	Quicksort(int anArray[10]) { this->array[10] = anArray[10]; }
	int partition(int start, int end);
	void quickSort(int start, int end);

	void outputArray();
	//Data
	int array[10];

};
#endif