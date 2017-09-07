//Write a C++ program to input any character and check whether it is alphabet, digit or special character.
#include<iostream>
using namespace std;
int main()
{ char a;
  cout << "Enter any character   ";
  cin >> a;
  if(( a>='a' && a<='z' )||( a>='A' && a<='Z' ))
    cout << a << " is an alphabet.";
  else if( a>='0' && a<='9' )
    cout << a << " is a digit.";
  else
    cout << a << " is a special character.";
  return 0;
}
