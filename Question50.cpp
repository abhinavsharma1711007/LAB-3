#include<iostream>
using namespace std;
int main()
{	int a,b=1,c,d=0;
	cout << "Enter Number:	";
	cin >> a;
	while(a >=b)
	{	if(a%b==0)
		{	c=1;
			while(c<b)
			{	if(b%c==0)
					d++;
				c++;
			}		
			if(d==1)
				cout << b << endl;
			d=0;
		}
		b++;
	}
    return 0;
}
