#include<iostream>
using namespace std;
int main()
{
	int n, i, j;
	cout << "enter the number" << endl;
	cin >> n;

	for (i = 1;i <= 5;i++)
	{

		for (j = 1;j <=i;j++) {

			cout << "*";
		}
	}	cout << endl;
	

	return 0;
}