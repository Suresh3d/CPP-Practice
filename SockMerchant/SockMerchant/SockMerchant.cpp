#include <iostream>
#include <vector>

using namespace std;


int sockMerchant(int arr[], int n)
{
	vector<int> arr1;
	int pairs = 0;
	for (int i = 0; i < n - 1; i++)
	{
		bool alreadySorted = false;
		for (int j = 0; j < arr1.size(); j++)
		{
			if (arr1[j] == arr[i])
			{
				alreadySorted = true;
				break;
			}
		}

		if (alreadySorted)
			continue;
		else
		{
			int count = 0;
			for (int j = 0; j < n ; j++)
			{
				if (arr[i] == arr[j])
				{
					arr1.push_back(arr[j]);
					count++;
				}
			}
			if ((count % 2) != 0)
			{
				count = (count - 1) / 2;
			}
			else
				count = count / 2;

			pairs = pairs + count;
		}
	}

	return pairs;
}

int main()
{
	int arr[15] = { 6, 5, 2, 3, 5, 2, 2, 1, 1, 5, 1, 3, 3, 3, 5 };
	int pairs = sockMerchant(arr,15);

	cout << pairs << endl;

	return 0;
}