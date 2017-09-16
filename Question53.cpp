#include<iostream>
using namespace std;
int main()
{	int a,b=1,c=0;
	cout << "Enter Number:	";
	cin >> a;
	while(b<a)
	{	if(a%b==0)
			c = c+b;
		b++;
	}
	if(a==c)
		cout << "This is a perfect number.";
	else
		cout << "Not a perfect number.";
    return 0;
}
