/*swapping two nos*/
#include<iostream>
using namespace std;
int main(){
int a,b,temp;

cout<<"enter 2 numbers: "<<endl;
cin>>a>>b;
temp= a;
a = b;
b = temp;
cout<<"the numbers after swapping are : "<<a<<"  "<<b;
return 0;

}
