//Write a C++ program to input all sides of a triangle and check whether triangle is valid or not.
#include<iostream>
using namespace std;
int main()
{ float a, b, c;
  cout << "Enter side lenghts: \t ";
  cin >> a >> b >> c;
  if( a+b>c && b+c>a && c+a>b)
    cout << "Given sides form a triangle.";
  else
    cout << "No triangle is possible.";
  return 0;
}
