#include <iostream>
using namespace std;
int main()
{ int year;
  cout<< "Enter the year \t ";
  cin>> year;
  if (year%400==0)
    cout<< year << "\t" << "is not a leap year.";
  else
  { if(year%4==0)
     cout<< year << "\t" << "is a leap year.";
    else
     cout<< year << "\t" << "is not a leap year.":
  }
  return 0;
}
