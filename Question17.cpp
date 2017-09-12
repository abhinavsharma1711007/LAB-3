//Write a C++ program to find all roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ float a,b,c,d,e,f;
  cout << " Ax^2 + Bx + C = 0" << "\nEnter A, B, C respectively: \t";
  cin >> a >> b >> c;
  d = pow(b,2) - 4*a*c;
  e = (-1*b + d)/(a*2);
  f = (-1*b - d)/(a*2);
  if( d<0)
    cout << "No real solutions.";
  else 
    cout << "Solutions are " << e << " and " << f;
  return 0;
}
