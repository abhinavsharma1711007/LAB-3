#include<iostream>
using namespace std;
int main(){
float a,b;
cout<< "Enter any two numbers";
cin >>a >> b;
if(a>b)
    cout<<a <<">"<<b;
else if (b>a)
    cout<<b<<">"<<a;
else
    cout <<a <<"="<<b;
return 0;
}
