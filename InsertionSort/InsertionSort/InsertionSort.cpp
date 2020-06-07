#include <iostream>

using namespace std;

/*void InsertionSort (int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;

			j--;
		}
	}
}*/

void InsertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;

			j--;
		} 
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[5] = { 5,4,3,2,1 };

	InsertionSort(arr, 5);
	printArray(arr, 5);

	return 0;
}