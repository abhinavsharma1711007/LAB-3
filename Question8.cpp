//Write a C++ program to input any alphabet and check whether it is vowel or consonant.
#include<iostream>
using namespace std;
int main()
{ char a;
  cout << "Enter any alphabet \t ";
  cin >> a;
  if(( a>='a' && a<='z' )||( a>='A' && a<='Z' ))
  { if( a>='a' && a<='z' )
      cout << "Lower case";
    else
      cout << "Upper case";
  }
  else
    cout << "This Character is not an alphabet.";
  return 0;
}
