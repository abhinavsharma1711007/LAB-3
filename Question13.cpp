//Write a C++ program to count total number of notes in given amount.
#include<iostream>
using namespace std;
int main()
{ long long a,b,c,d,e,f,g,h,i,j;
  cout << "Enter amount \t";
  cin >> a;
  b = a/2000;
  c = (a%2000)/500;
  d = (a%500)/100;
  e = (a%100)/50;
  f = (a%50)/20;
  g = (a%20)/10;
  h = (a%10)/5;
  i = (a%5)/2;
  j = (a%5)%2;
  cout << "Total number of notes = " << b+c+d+e+f+g+h+i+j ;
  return 0;
}
