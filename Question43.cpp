#include<iostream>
using namespace std;
int main()
{	int a,b=1;
	cout << "Enter number:	";
	cin >> a;
	while( b < a)
	{	if(a%b==0)
			cout << b <<endl;
		b++;
	}
    return 0;
}
