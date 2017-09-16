#include<iostream>
using namespace std;
int main()
{	int a,b=1,c=0;
	cout << "Enter Number:	";
	cin >> a;
	while(a>1)
	{	while(b<a)
		{	if(a%b==0)
				c++;
			b++;
		}
		if(c==1)
			cout << a << endl;
		b = 1;
		c = 0;
		a--;	
	}
    return 0;
}
