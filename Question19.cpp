//Write a C++ program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade
#include<iostream>
using namespace std;
int main()
{ float a,b,c,d,e,f,g;
  char h;
  cout << "Enter maximum marks\t";
  cin >> a;
  cout << "Enter physics marks\t";
  cin >> b;
  cout << "Enter chemistry marks\t";
  cin >> c;
  cout << "Enter biology marks\t";
  cin >> d;
  cout << "Enter mathematics marks\t";
  cin >> e;
  cout << "Enter computer marks\t";
  cin >> f;
  g = (b+c+d+e+f)/(5*a)*100;
  if( g>= 90)
    h='A';
  else if( g>= 80)
    h='B';
  else if( g>= 70)
    h='C';
  else if( g>= 60)
    h='D';
  else if( g>= 40)
    h='E';
  else
    h='F';
  cout << "Precentage = " << g << "\nGrade = " << h;
  return 0;
}
