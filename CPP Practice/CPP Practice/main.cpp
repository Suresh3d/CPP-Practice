//#include "Sort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include <iostream>
using namespace std;

int main()
{
	int x = 80;
	int& y = x;
	x++;
	cout << x << " " << --y << endl;;
	int arr[6] = {6,5,4,3,2,1};
	//BubbleSort B;
	InsertionSort I;

	I.SortArray(arr , 6);
	I.printArray(arr, 6);

	return 0;

}
