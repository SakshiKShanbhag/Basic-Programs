#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
           count++;
    }
if (count==2)
     cout<<" is a prime number"<<endl;
else
    cout<< " is not prime"<<endl;
return 0;
}
