#include <iostream>
#include <vector>
using namespace std;

bool isAvailable(vector<int> arr, int n)
{
	bool isAvailable = false;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == n)
		{
			isAvailable = true;
			break;
		}
	}

	return isAvailable;
}

int jumpingOnTheCloud(int arr[], int n)
{
	vector<int> avoid;

	for (int i = 0; i < n; i++)
	{
		if (arr[i])
			avoid.push_back(i);
	}

	int c_p = 0;
	int jump = 0;
	bool J_Completed = false;

	while (!J_Completed)
	{
		
		if ((c_p + 2) <= n-1 && !isAvailable(avoid,c_p+2))
		{
			jump++;
			c_p = c_p + 2;
		}
		else if ((c_p + 1) <= n - 1 && !isAvailable(avoid, c_p + 1))
		{
			jump++;
			c_p = c_p + 1;
		}
		else 
		{
			J_Completed = true;
		}
	}

	return jump;
}

int main()
{
	int arr[7] = { 0, 0, 1, 0, 0, 1, 0 };

	int n_jump = jumpingOnTheCloud(arr, 7);

	cout << n_jump << " ";

	return 0;
}