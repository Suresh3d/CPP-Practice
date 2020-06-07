#include "InsertionSort.h"

#ifndef InsertionSort_H
#define InsertionSort_H

void InsertionSort :: SortArray(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j-1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
		
			j--;
		}
	}
}


InsertionSort::InsertionSort()
{
}

InsertionSort::~InsertionSort()
{
}

#endif // !InsertionSort_H