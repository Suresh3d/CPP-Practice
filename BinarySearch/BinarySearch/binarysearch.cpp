#include <iostream>

using namespace std;

int BinarySearch(int arr[], int size, int target)
{
	int  min = 0;
	int max = size - 1;
	int steps = 0;

	while (max >= min)
	{
		steps++;
		int mid = (min + max) / 2;

		if (arr[mid] == target)
		{
			cout << "the target found in steps :" << steps << endl;
			return mid;
		}
		else if (arr[mid] > target)
		{
			max = mid - 1;
		}
		else if (arr[mid] < target)
			min = mid + 1;
	}

	return -1;
}

int main() {

	int arr[] = { 1,2,3,4,5,6,7,8 };

	int index = BinarySearch(arr, 8, 3);

	cout << "The index is :" << index << endl;

	return 0;
}