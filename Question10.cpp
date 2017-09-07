//Write a C++ program to check whether a character is uppercase or lowercase alphabet.
#include<iostream>
using namespace std;
int main()
{ char a;
  cout << "Enter any character   ";
  cin >> a;
  if(( a>='a' && a<='z' )||( a>='A' && a<='Z' ))
    { if( a>='a' && a<='z' )
      cout << "Lower case";
      else
      cout << "Upper case";
    }
  else
    cout << a << " is not an alphabet.";
  return 0;
}
