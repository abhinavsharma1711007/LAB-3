#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<< "Enter any three numbers";
cin >>a >> b >>c;
if((a>b)&&(a>c))
{
cout <<a;
}
else if (b>c)
{
cout<<b;
}
else
{
cout <<c;
}
return 0;
}  
