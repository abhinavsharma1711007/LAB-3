//Write a C++ program to find sum of first and last digit of any number.
#include<iostream>
using namespace std;
int main()
{	int a,c;
	cout << "Enter any number:   ";
	cin >> a;
	c = a%10;
	while(a>10)
		a = a/10;
	cout << "Sum =   " << a + c;
    return 0;
}
