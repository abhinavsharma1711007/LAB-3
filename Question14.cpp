//Write a C++ program to input angles of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;
int main()
{ float a, b, c;
  cout << "Enter angles: \t ";
  cin >> a >> b >> c;
  if( a+ b+ c== 180)
    cout << "Valid Triangle";
  else
    cout << "Triangle not possible.";
  return 0;
} 
