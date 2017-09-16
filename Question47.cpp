#include<iostream>
using namespace std;
int main()
{	int a,b=1,c=0;
	cout << "Enter Number:	";
	cin >> a;
	while(b<a)
	{	if(a%b==0)
			c++;
		b++;
	}
	if (c==1)
		cout << "The number is prime.";
	else 
		cout << "The number is not prime.";
    return 0;
}
