//Write a C++ program to count number of digits in any number.
#include<iostream>
using namespace std;
int main()
{	int a,b=0;
	cout << "Enter any number:   ";
	cin >> a;
	while(a>0)
	{	b++;
		a = a/10;
	}
	cout << "Number of digits =    " << b;
    return 0;
}
