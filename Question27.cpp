//Write a C++ program to find sum of all natural numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout << "Enter natural Number'n': \t ";
  cin >> a;
  b = 0;
  for(c= 1; c<= a; c++)
    b = b+ c;
  cout << "Sum = " << b;
  return 0;
}
