#include<iostream>
using namespace std;
int main()
{	int a,b=1;
	cout << "Enter number:	";
	cin >> a;
	while(a>0)
	{	b = b*a;
		a--;
	}
	cout << "Factorial = " << b;
   return 0;
}
