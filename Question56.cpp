#include<iostream>
using namespace std;
int main()
{	int a=1,b,c,d,e,f;
	cout << "Enter Number:	";
	cin >> f;
	while(a<=f)
	{	b = a, c = 0,d,e=1;
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
			cout << a << endl ;
		a++;
	}
   return 0;
}
