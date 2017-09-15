//Write a C++ program to find first and last digit of any number.
#include<iostream>
using namespace std;
int main()
{	int a,c;
	cout << "Enter any number:   ";
	cin >> a;
	c = a%10;
	while(a>10)
		a = a/10;
	cout << "last digit =   " << c << endl << "first digit =   " << a;
    return 0;
}
