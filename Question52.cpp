#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int a,b,c=0,d=1;
	cout << "Enter Number:	";
	cin >> a;
	while(d<=a)
	{	b=d;
		c=0;
		while(b>0)
		{	c=c+pow(b%10,3);
			b = b/10;
		}
		if(c==d)
			cout << d << endl;
		d++;
	}
    return 0;
} 
