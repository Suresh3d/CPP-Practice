#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printValue(int n)
{
	if (n < 1) return;

	cout << n << endl;
	printValue(n - 1);
}

int sumOfDigits(int num)
{
	int i = 0;
	while (num > 0) {
			i = i + num % 10;
			num = num / 10;
		}

	return i;
}

void subString(string str)
{
	cout << " " << endl;
	int n = str.size();

	for (int i = 0; i < n - 1; i++)
	{
		cout << str[i] << endl;
		for (int j = i + 1; j < n; j++)
		{
			/*string s;
			s += str[i];
			s += str[j];
			//string s3 = s1 + s2;
			cout << s << endl;*/

			char c[2];
			c[0] = str[i];
			c[1] = str[j];
			cout << c << endl;
		}
	}

	cout << str << endl;
}

void rsubString(string str, string cur = "", int index = 0)
{
	if (index == str.size())
	{
		cout << cur << endl;
		return;
	}

	rsubString(str, cur, index + 1);
	rsubString(str, cur + str[index], index + 1);


}
int rSumOfDigits(int num, int i = 0)
{
	if (num == 0) return i;
	return rSumOfDigits(num / 10, i + num % 10);
}

bool isPalendrome(string str)
{
	int i = 0;

	for (int j = str.size() - 1; j >= str.size()/2; j--)
	{
		if (str[i] != str[j]) {
			return false;
		}
		i++;
	}

	return true;
}

//recursion - not tail recursion
bool rIsPalendrome(string str, int k, int n = 0)
{
	if (str[n] != str[k])
		return false;
	else if ((n == k) || (n > k))
		return true;
	else
		return rIsPalendrome(str, k-1, n+1);
}
int fact(int n)
{
	if (n < 1)
		return 1;

	return n * fact(n - 1);			// not tail recursive., bcz still fact (n-1 should store the value to return to parent)
}

void fun1(int n, int k = 1)
{
	if (n < 1)
		return;
	cout << k << endl;
	fun1(n - 1, k + 1);
}

void fun(int n)
{
	static int i = 0;			// for recursive call static variable will be initialised everytime
	cout << n << endl;
	if (i == n)
		return;
	else
		fun(i + 1);
}

int fabinacci(int n)
{
	return n < 2 ? n : fabinacci(n - 1) + fabinacci(n - 2);
}

void Josephus(int n, int k)
{
	vector<int> myArr(n);

	for (int i = 0; i < myArr.size(); i++)
		myArr[i] = i;


	int i = 1;
	int j = 0;
	
	while (myArr.size() > 1)
	{

		if (i % k == 0)
		{			
			myArr.erase(myArr.begin() + j);
			j -= 1;
		}

		i += 1;
		j += 1;
		j = j % myArr.size();
	}

	cout << myArr[0] << endl;
}

void rJosephus(vector<int> arr, int k, int j = 0, int i = 1)
{
	if (arr.size() == 1) {
		cout << arr[0] << endl;
		return;
	}
	if(i % k == 0)
	{
		arr.erase(arr.begin() + j);
		--j;
	}
	j += 1;
	j = j % arr.size();

	rJosephus(arr, k, j, i + 1);
}

void findOccurance(string str, int sI = 0, int count = 0)
{
	if (sI == (str.size() - 2))
	{
		cout << count << endl;
		return;
	}

	string s;
	s += str[sI];
	s += str[sI + 1];
	s += str[sI + 2];

	if (s == "gfg") count += 1;

	findOccurance(str, sI + 1, count);
}

int main()
{
	//fun1(5);
	//cout << fabinacci(4);
	//cout << fact(6) << endl;

	//cout << rIsPalendrome("aabaa", 4) << endl;
	//cout<<rIsPalendrome("abba",3)<<endl;
	
	//cout << sumOfDigits(123) << endl;
	//cout << rSumOfDigits(123) << endl;
	//rsubString("ABC");
	//printValue(5);

	vector<int> myArr(6);

	/*for (int i = 0; i < myArr.size(); i++)
		myArr[i] = i;*/

//	rJosephus(myArr, 1);

	findOccurance("geefgfgksforgfgeeks");

	return 0;
}