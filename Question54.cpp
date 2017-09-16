#include<iostream>
using namespace std;
int main()
{       int a,b,c,d=1;
        cout << "Enter Number:  ";
        cin >> a;
	while(d<=a)
	{	b=1;
		c=0;
		while(b<d)
	        {       if(d%b==0)
        	                c = c+b;
   		        b++;
		}
      		if(d==c)
               		cout << d << endl;
		d++;
	}
    return 0;
}
