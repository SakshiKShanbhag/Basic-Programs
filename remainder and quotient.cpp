//find quotient and remainder
#include<iostream>
using namespace std;
int main(){
int x,y;
float quotient,remainder;
cout<<"enter the dividend and divisor:";
cin>>x>>y;
quotient=x/y;
remainder=x%y;
cout<<"the quotient is : "<<quotient<<endl;
cout<<"the remainder is : "<<remainder;
return 0;
}
