#include<iostream>
using namespace std;
int main()
{   
	int a = 10;
	int b = 20;

	cout << "after swap" << endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << a << "=" << b << endl;
	return 0;
}