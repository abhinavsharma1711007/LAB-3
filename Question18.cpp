//Write a C++ program to calculate profit or loss.
#include<iostream>
using namespace std;
int main()
{ int sp,cp;
  cout << "Selling price = ";
  cin >> sp;
  cout << "Cost price = ";
  cin >> cp;
  if ( cp > sp)
    cout << "Loss = " << sp-cp;
  else
    cout << "Profit = " << sp-cp;
  return 0;
}
