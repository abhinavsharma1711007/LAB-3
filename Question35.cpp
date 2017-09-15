//Write a C++ program to calculate sum of digits of any number.
#include<iostream>
using namespace std;
int main()
{	int a,b=0;
	cout << "Enter any number:	";
	cin >> a;
	while(a>0)
	{	b = b + a%10;
		a = a/10;
	}
	cout << "Sum of digits = " << b;
    return 0;
}
