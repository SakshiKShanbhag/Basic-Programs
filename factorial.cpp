#include <iostream>
using namespace std;
int main(){
int n;
long double factorial = 1.0;

cout<<"enter the number: ";
cin>>n;
if (n<0)
    {cout<<"factorial doesnt exist";}


else{
    for( int i=1;i<=n;++i){
        factorial*=i;}
    cout<<"the factorial of  "<<n<<" ="<<factorial;

}
return 0;
}
