//Write a C++ program to check whether a character is alphabet or not.
#include<iostream>
using namespace std;
int main()
{ char a;
  cout << "Enter any character   ";
  cin >> a;
  if(( a>='a' && a<='z' )||( a>='A' && a<='Z' ))
    cout << a << " is an alphabet.";
  else
    cout << a << " is not an alphabet.";
  return 0;
}
