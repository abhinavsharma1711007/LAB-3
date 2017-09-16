#include<iostream>
using namespace std;
int main()
{	int a;
	cout << "Enter Number:	";
	cin >> a;
	int b = a, c = 0,d,e=1;
	while( b>0 )
	{	d = b%10;
		if(d==0)
			e=1;
		else
		{	while( d>0)
			{	e = e*d;
				d--;			 
			}
		}	
		c = c+e;
		b = b/10;
		e = 1;
	}
	if(a==c)
		cout << "Strong Number" ;
	else
		cout << "Not A strong Number";
	return 0;
}
