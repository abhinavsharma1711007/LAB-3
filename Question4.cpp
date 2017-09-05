#include<iostream>
using namespace std;
int main(){
int a;
cout<< "Enter any number  ";
cin >>a;
if(a%55==0)
{
cout << "No. is divisible by both 5 and 11";
}
else if ((a%5!=0 && a%11!=0))
{
cout <<" No. is not divisible by 5 or 11";
}
else{
if(a%5==0)
{
cout <<" No. is divisible by 5";
}
if(a%11==0)
{
cout <<" No. is divisible by 11";
}
