//Write a C++ program to print all natural numbers from 1 to n. - using while loop
#include<iostream>
using namespace std;
int main()
{ int n,b;
  cout << "Enter integer 'n':\t";
  cin >> n;
  b = 1;
  while(b<=n)
  { cout << b <<"\n";
    b++;
  }
  return 0;
}
