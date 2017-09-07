//Write a C++ program to check whether a number is even or odd.
#include<iostream>
using namespace std;
int main()
{ int a;
  cout<< "Enter a number \t ";
  cin>> a;
  if(a%2==0)
    cout<< "Number is even.";
  else
    cout<< "Number is odd.";
  return 0;
}
