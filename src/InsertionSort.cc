//Amos Colocho

//Insertion Sort
#include<iostream>
//long variables needed to deal with larger data sets
void insertionSort(long arr[],long n) {
    for (long i =1; i< n; ++i) {
        long g=arr[i];
        long j = i -1;
        while (j >= 0 && arr[j] >g) {
            arr[j +1] = arr[j];
            j = j-1;
        }
        arr[j +1]= g;
    }
}



