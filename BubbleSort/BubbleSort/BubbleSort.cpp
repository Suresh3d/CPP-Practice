#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool isSwapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				isSwapped = true;
				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

		if (!isSwapped)
			break;
	}
}
void printArray(int arr[],int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[5] = { 6,5,4,3,2};

	BubbleSort(arr, 5);

	printArray(arr,5);

	return 0;

}