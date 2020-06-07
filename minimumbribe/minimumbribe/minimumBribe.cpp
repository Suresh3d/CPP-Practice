#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void minimumBribes(vector<int> q) {
	int i = q.size();
	int no_bribes = 0;
	bool isChaotic = false;
	vector<int>::iterator end = q.end();
	while (q.begin() != end)
	{

		int max_index = distance(q.begin(), max_element(q.begin(), end));
		int max_value = q[max_index];

		if (max_index != (max_value - 1))
		{
			int no_swap = 0;
			while (max_index != (max_value - 1))
			{
				if (no_swap == 2)
				{
					cout << "Too chaotic" << endl;
					isChaotic = true;
					break;
				}
				no_bribes += 1;
				int temp = q[max_index];
				q[max_index] = q[max_index + 1];
				q[max_index + 1] = temp;
				max_index += 1;
				no_swap += 1;
			}
			if (isChaotic)
				break;
		}

		end = end - 1;

	}

	if (!isChaotic)
		cout << no_bribes << endl;

}

int main()
{
	vector<int> arr = { 2,5,1,3,4 };
	minimumBribes(arr);

	return 0;
}