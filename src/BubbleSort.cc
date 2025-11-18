//Nicholas Licata
//Lab #5, ECE 2161-001
//This program implements the Bubble Sort Algorithm

#include "myheaders.h"

void BubbleSort(long data[], int sz){
	for (int i = 0; i < sz-1; i++){
		for (int j = sz-1; j > i; --j){
			if (data[j] < data[j-1])
				swap(data[j], data[j-1]);
		}
	}
}
