//Jaelan Howell
//November, 2025

#include "myheaders.h"

void r_quicksort(long data[], long first, long last) {
    long lower = first + 1;
    long upper = last;

    //swapping the first element with the middle element
    swap(data[first], data[(first + last) / 2]);

    long bound = data[first]; // The pivot

    while (lower <= upper) {
        //moving the lower index up while element is less than pivot
        while (bound > data[lower]) {
            lower++;
        }

        //moving the upper index down while element is greater than pivot
        while (bound < data[upper]) {
            upper--;
        }

        //if the indexes haven't crossed, swap the elements
        if (lower < upper) {
            swap(data[lower++], data[upper--]);
        }
        else {
            lower++;
        }
    }

    //moving the bound to the final sorted position
    swap(data[upper], data[first]);

    //recursively sorting the left sub-array
    if (first < upper - 1) {
        r_quicksort(data, first, upper - 1);
    }

    //recursively sorting the right sub-array
    if (upper + 1 < last) {
        r_quicksort(data, upper + 1, last);
    }
}


//QuickSort Wrapper Function
void QuickSort(long data[], long n) {
    if (n < 2) return;

    //finding the largest element and move it to the very end
    long max = 0;
    for (long i = 1; i < n; i++) {
        if (data[max] < data[i]) {
            max = i;
        }
    }
    //swapping the largest element to the last position
    swap(data[n - 1], data[max]);

    //calling the recursive sort on the range
    r_quicksort(data, 0, n - 2);
}

