#include<iostream>
using namespace std;


typedef struct Employee
{
	int id;
	string name;

}EMP;



int main()
{
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 10;

	int* p = new int(10);//assign value 10 to the adress pointed by ptr
	cout << *ptr << "\t" << *p << endl;
	cout << "sizeof(ptr)" << sizeof(*ptr) << endl;
	cout << "sizeof(p)" << sizeof(*p) << endl;


	int* a = new int[10];
	cout << sizeof(a) << "\t" << sizeof(*a) << endl;

	for (int i = 0;i < 10;i++)
	{
		a[i] = (i + 1) * 2;
	}

	for (int i = 0;i < 10;i++)
	{
		cout << *a++<<endl;
	}



	EMP* e = new EMP[10];
	EMP* e1 = new EMP{ 101,"abhi" };
	cout << e1->id << "\t" << e1->name;

	cin >> e->id;
	cin >> e->name;
	cout << e->id << "\t" << e->name;



	delete e1;
	delete[]e;

	return 0;

}