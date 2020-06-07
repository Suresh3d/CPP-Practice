#include "BubbleSort.h"


void BubbleSort :: SortArray(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j<n - i - 1; j++)
		{
			bool isSwapped = false;
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				
				isSwapped = true;
			}

			if (!isSwapped)
				break;
		}
	}
}

BubbleSort::BubbleSort()
{
}

BubbleSort ::~BubbleSort()
{
}
