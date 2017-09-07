#include<iostream>
using namespace std;
int main()
{ float a,b,c;
  cout<< "Enter any three numbers";
  cin >>a >> b >>c;
  if((a>b)&&(a>c))
    cout << a <<" is maximum number.";
  else if (b>c)
    cout << b <<" is maximum number.";
  else
    cout << c <<" is maximum number.";
  return 0;
}  
