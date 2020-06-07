#include<iostream>

using namespace std;

class Base
{
public:
	int x;
	Base(int x) :x{ x } {};
	virtual void print() {};
};

class Derived : public Base
{
	int a, b;
public:
	Derived() :Base(0) { a = 0; b = 0; };
	Derived(int x) :Base(x) { a = x; b = 0; };
	void print() {
		cout << x << endl;
	}

	void print(Base a[], int size) {
		/*for (int i = 0; i< size; i++)
		{
			//a++;
			cout << a[i].x << endl;
		}*/
		
		cout << a[1].x << end;
	}
};

int main()
{
	Base* b = new Derived(10);

	Derived arr[10];
	Base *d = new Derived[10];
	b->print();
	Derived d1;
	//int a[] = { 1,2,3,4 };

	d1.print(arr, 10);
	return 0;
}

