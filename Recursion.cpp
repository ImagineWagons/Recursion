#include <iostream>
#include <vector>
#include <cstdlib> //for random array testing
#include <ctime>   //for random array testing

#include "Quicksort.h"

using namespace std;
//functions
int partition(int array[], int start, int end);
void quickSort(int array[], int start, int end);
 
int main() {
	//DATA
	srand(time(0));
	const int SIZE = 100; //number of integers to sort
	int array[SIZE];
	for (int i = 0; i < SIZE; i++) array[i] = rand() % 100;
	int* arrayPtr = array;


	//output unsorted array
	cout << "unsorted array = ";
    for (int i = 0; i < SIZE; i++) cout << array[i] << " ";
	cout << endl;
	//sort array
	quickSort(array, 0, SIZE - 1);
	//output sorted array
	cout << "Sorted array = ";
	for (int i = 0; i < SIZE; i++) cout << array[i] << " ";
	
	cin.ignore();
	return 0;
}

int partition(int array[], int start, int end) {
	int sortVal = array[start]; //number to partition elements with
	int breakpoint = start; //tracks position of sortVal
	int i = start;
	int j = end;
	int temp; //holds values for swap
	bool swapped = true;
	//cout << "Partition called" << endl;
	while (swapped) {
		swapped = false;
		while ((j >= breakpoint)) {
			if (array[j] < sortVal) {
				//swap
				temp = array[breakpoint];
				array[breakpoint] = array[j];
				array[j] = temp;
				breakpoint = j;
				//cout << "J = " << j << endl;
				swapped = true;
				break;
			}
			else j--;
		}
		while ((i <= breakpoint)) {
			if (array[i] > sortVal) {
				//swap
				temp = array[breakpoint];
				array[breakpoint] = array[i];
				array[i] = temp;
				breakpoint = i;
				//cout << "I = " << i << endl;
				swapped = true;
				break;
			}
			else i++;
		}
	}
	//cout << "breakpoint = " << breakpoint << endl;
	return breakpoint;
}

void quickSort(int array[], int start, int end) {
	if (start < end) {
		int breakpoint = partition(array, start, end); //set breakpoint
		quickSort(array, start, breakpoint); //first half
		quickSort(array, breakpoint + 1, end); //last half
	}
}
