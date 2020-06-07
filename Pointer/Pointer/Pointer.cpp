#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 2;

	int* c = &a;
	int* d = &b;

	cout << "c is " << c << endl;
	cout << "*c is " << *c << endl;

	cout << "d is " << d << endl;
	cout << "*d is " << *d << endl;

	c = d;

	cout << "c is " << c << endl;
	cout << "*c is " << *c << endl;

	return 0;

}