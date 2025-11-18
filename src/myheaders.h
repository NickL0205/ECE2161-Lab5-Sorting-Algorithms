// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);

//SORTING ALGORITHMS
void 	BubbleSort(long data[], int size);
void 	ShellSort (long data[], int size);
void	InsertionSort(long data[], int size);
void	MergeSort(long data[], int size);
void	QuickSort(long data[], int size);
void	SelectionSort(long data[], int size);
