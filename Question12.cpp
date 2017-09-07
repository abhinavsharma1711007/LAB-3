//Write a C++ program to input month number and print number of days in that month.
#include<iostream>
using namespace std;
int main()
{ int a;
  cout << "Enter a month number.";
  cin >> a;
  switch(a)
  { case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout << " This month has 31 days.";
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      cout << "This month has 30 days.";
      break;
    case 2:
      cout << "This month has 28 or 29 days.";
    default:
      cout << "Incorrect month number.";
  }
  return 0;
}
