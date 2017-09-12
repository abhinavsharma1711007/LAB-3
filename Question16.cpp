//Write a C++ program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<iostream>
using namespace std;
int main()
{ float a, b, c;
  cout << "Enter side lenghts: \t ";
  cin >> a >> b >> c;
  if( a+b>c && b+c>a && c+a>b)
  { if( a==b && a==c)
      cout << "Given sides form a equilateral triangle.";
    else if( a==b || b==c || c==a) 
      cout << "Given sides form a isosceles triangle.";
    else
      cout << "Given sides form as scalene triangle.";
  }
  else
    cout << "No triangle is possible.";
  return 0;
}
