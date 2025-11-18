//Jaelan Howell
//November, 2025

#include "myheaders.h"

void SelectionSort(long data[], long n) {
	long i;
	long j;
	long least;

	//iterating through the array until the second to last element
	for (i = 0; i < n - 1; i++) {

		//assuming the current i is the smallest...
		least = i;

		//looking at the rest of the array to find the literal smallest
		for (j = i + 1; j < n; j++) {
			if (data[j] < data[least]) {
				least = j;
			}
		}

		//swapping the literal smallest value with the value of position i
		if (least != i) {
			swap(data[least], data[i]);
		}

	}
}
