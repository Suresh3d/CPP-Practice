#include<iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int maxSubsetSum(vector<int> arr) {
	set<int> maxArray;


	for (int i = 0; i < arr.size() - 2; i++)
	{
		int max = 0;
		for (int j = i; j < arr.size(); j += 2)
		{
			max += arr[j];
		}
		maxArray.insert(max);
	}

	set<int>::iterator it;
	it = maxArray.end();

	return *--it;


}

void removeDupWord(string str)
{
	string word = "";
	for (auto x : str)
	{
		if (x == ' ')
		{
			cout << word << endl;
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	cout << word << endl;
}


int main()
{

	map<string, int> myMap;
	myMap["first"] = 0;
	myMap["second"] = 2;

	map<string, int>::iterator it;

	myMap["first"] += 2;
	cout << myMap["First"] << endl;

	removeDupWord("Suresh kumar");
	//vector<int> arr = { 4,3,2,5,8 };

	//int max = maxSubsetSum(arr);





	return 0;
}