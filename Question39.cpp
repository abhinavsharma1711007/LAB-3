#include<iostream>
using namespace std;
int main()
{	long long a;
	int b,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,f0=0;
	cout << "Enter any number:	";
	cin >> a;
	while(a>0)
	{	b = a%10;
		switch(b) 
		{	case 1:
                                f1++;
                                break;
                        case 2:
                                f2++;
                                break;
			case 3:
				f3++;
				break;
			case 4:
				f4++;
				break;
			case 5:
                                f5++;
                                break;
                        case 6:
                                f6++;
                                break;
			case 7:
                                f7++;
                                break;
                        case 8:
                                f8++;
                                break;
			case 9:
                                f9++;
                                break;
                        case 0:
                                f0++;
                                break;
		}
		a = a/10;
	}
	cout << "Frequency of 0 = " << f0 << endl;
	cout << "Frequency of 1 = " << f1 << endl;
	cout << "Frequency of 2 = " << f2 << endl;
	cout << "Frequency of 3 = " << f3 << endl;
	cout << "Frequency of 4 = " << f4 << endl;
	cout << "Frequency of 5 = " << f5 << endl;
	cout << "Frequency of 6 = " << f6 << endl;
	cout << "Frequency of 7 = " << f7 << endl;
	cout << "Frequency of 8 = " << f8 << endl;
	cout << "Frequency of 9 = " << f9 ;
    return 0;
}
