//Write a C++ program to print multiplication table of any number.
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout << "Enter natural Number'n': \t ";
  cin >> a;
  b = 0;
  for(c= 1; c<= 10; c++)
  { b = a * c;
    cout << a << " * " << c << " = " << b << "\n";
  }
  return 0;
}
