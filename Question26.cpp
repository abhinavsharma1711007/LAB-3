//Write a C++ program to print all odd number between 1 to 100.
#include<iostream>
using namespace std;
int main()
{ int n=1;
  do 
  { cout << n << "\n";
    n+=2;
  }
  while(n<100);
  return 0;
}
