//Write a C++ program to print all natural numbers in reverse (from n to 1). - using while loop
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter Natural Number 'n': \t";
  cin >> n;
  while ( n>0)
  { cout << n << "\n";
    n--;
  }
  return 0;
}
