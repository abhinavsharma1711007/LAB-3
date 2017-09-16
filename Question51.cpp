#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int a,b,c=0;
	cout<< "Enter Number:	";
	cin>> a;
	b = a;
	while(b>0)
	{	c= c + pow(b%10,3);
		b = b/10;
	}
	if(a==c)
		cout << a << " is an armstrong number.";
	else
		cout << a << " is not an armstrong number.";
    return 0;
}
