#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int a,b=0,c,d,e,f,g;
	cout << "Enter any number:   ";
	cin >> a;
	d =a;
	c = a%10;
	while(d>0)
	{	b++;
		d = d/10;
	}
	e = pow(10,b-1);
	f = (a%e)/10;
	g = a/e;
	cout << "Required number =    " << c*e + f*10 + g;
    return 0;
}
