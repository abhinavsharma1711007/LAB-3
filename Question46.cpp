#include<iostream>
using namespace std;
int main()
{	int a,b,l;
	cout << "Enter any two numbers:	";
	cin >> a >> b;
	l = a;
	while( l%a!=0 || l%b!=0)
	{	l++;
	}
	cout << "LCM = " << l;
    return 0;
}
