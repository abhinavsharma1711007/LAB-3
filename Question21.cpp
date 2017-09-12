//Write a C++ program to input electricity unit charges and calculate total electricity bill 
#include<iostream>
using namespace std;
int main()
{ float a,b,c;
  cout << "Enter units consummed: \t";
  cin >> a;
  if(a>50)
  { b = 50 * 0.50;
    a = a-50;
    if(a>100)
    { b = b + 100 * 0.75;
      a = a-100;
      if(a>100)
      { b = b + 100 * 1.20;
        a = a-100;
        if(a> 0)
          b = b + a*1.50;
      }
      else 
        b = b + a * 1.20;
    }
    else
      b = b + a * 0.75;
  }
  else 
    b = a * 0.50;
  c = b*1.20;
  cout << "Total Charge = " << c;
  return 0;
}
