//Write a C++ program to find sum of all even numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
  cout << "Enter natural Number'n': \t ";
  cin >> a;
  b = 0;
  for(c= 2; c<= a; c+=2)
    b = b+ c;
  cout << "Sum = " << b;
  return 0;
}
