#include<iostream>
using namespace std;
int main()
{	int a,b=0,c;
	cout << "Enter any number:	";
	cin >> a;
	c = a;
	while(a>0)
	{	b = b*10 + (a%10);
		a = a/10;
	}
	if(c==b)
		cout << "Number is a palindrome.";
	else
		cout << "Number is not a palindrome.";
    return 0;
}
