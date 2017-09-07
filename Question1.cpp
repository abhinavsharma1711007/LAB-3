#include<iostream>
using namespace std;
int main()
{ float a,b;
  cout<< "Enter any two numbers";
  cin >>a >> b;
  if(a>b)
    cout<< "Maximum Number is " << a;
  else if (b>a)
    cout<< "Maximum Number is " << b;
  else
    cout <<"Both are equal.";
  return 0;
}
