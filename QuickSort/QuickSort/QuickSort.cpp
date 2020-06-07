#include<iostream>

using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
 
/*int getPivot(int arr[], int sI, int eI)
{
	int pivot = arr[eI];

	int i = (sI - 1);
	for (int j = sI; j <= eI -1; j++)
	{

		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[eI]);
	return (i + 1);
}

void quickSort(int arr[], int startIndex, int endIndex)
{
	if (startIndex < endIndex)
	{
		int  p;
		p = getPivot(arr,startIndex,endIndex);
		quickSort(arr, startIndex, p-1);
		quickSort(arr, p + 1, endIndex);
	}
}*/

/*int getPivot(int arr[], int sI, int eI)
{
	int j = (sI - 1);
	int pivot = arr[eI];

	for (int i = sI; i <= eI - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			j++;
			swap(&arr[j], &arr[i]);
		}
	}

	swap(&arr[j + 1], &arr[eI]);

	return j + 1;
}*/

int getPivot(int arr[], int sI, int eI)
{
	int j = sI;
	int pivot = arr[eI];

	for (int i = sI; i <= eI - 1; i++)
	{
		if (arr[i] <= pivot)
		{
			swap(&arr[j], &arr[i]);
			j++;
		}
	}

	swap(&arr[j], &arr[eI]);

	return j;
}


void quickSort(int arr[], int s_Index, int r)
{
	if (r > s_Index)
	{
		int p;
		p = getPivot(arr, s_Index, r);
		quickSort(arr, s_Index, p - 1);
		quickSort(arr, p + 1, r);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	int arr[10] = { 10,10,8,7,6,5,4,3,2,1 };
	
	quickSort(arr,0,9);

	printArray(arr, 10);

	return 0;
}