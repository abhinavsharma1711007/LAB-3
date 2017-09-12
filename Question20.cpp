//Write a C++ program to input basic salary of an employee and calculate its Gross salary 
#include<iostream>
using namespace std;
int main()
{ float a,b,c,d;
  cout << "Enter Salary\t";
  cin >> a;
  if( a<= 10000)
  { b=20;
    c=80;
  }
  else if( a<= 20000)
  { b=25;
    c=90;
  }
  else
  { b=30;
    c=95;
  }
  d = a*(100 + b + c)/100;
  cout << "Your gross salary = " << d;
  return 0;
} 
