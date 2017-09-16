#include<iostream>
using namespace std;
int main()
{	int a,b=1,c=0,d=0;
	cout << "Enter Number:	";
	cin >> a;
	while(a>1)
	{	while(b<a)
		{	if(a%b==0)
				c++;
			b++;
		}
		if( c==1)
			d = d+a;
		b = 1;
		c = 0;
		a--;	
	}
	cout << "Sum of prime numbers = " << d;
    return 0;
}
