#include "Quicksort.h"

int Quicksort::partition(int start, int end) {
	int partElement = array[start];
	int i = start;
	int j = end;
	int temp;
	
	
}
void Quicksort::quickSort(int start, int end){
	if (start < end) {
		int breakpoint = partition(start, end);
		quickSort(start, breakpoint);
		quickSort(breakpoint + 1, end);
	}
}

void Quicksort::outputArray(){
	for (int i = 0; i < 10; i++) {
		cout << this->array[i] << " ";
	}
	cout << endl;
}
