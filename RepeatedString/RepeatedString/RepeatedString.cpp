#include <iostream>
#include <String>

using namespace std;

int repeatedString(string s, int n)
{
	int n_s = s.size();
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (s[i % n_s] == 'a')
			count++;		
	}

	return count;
}

int main()
{
	string ss = "aba";
	int count = repeatedString(ss, 10);

	cout << count << " ";

	return 0;
}