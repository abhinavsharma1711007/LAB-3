#include<iostream>
using namespace std;
int main()
{	int a,b,HCF;
	cout << "Enter any two numbers:	";
	cin >> a >> b;
	HCF = a;
	while( (a%HCF!=0) || (b%HCF!=0))
	{	HCF--;
	}
	cout << "HCF = " << HCF;
    return 0;
}
