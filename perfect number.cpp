#include<iostream>
using namespace std;
int main(){
int n , sum = 0;
cout<<"enter the number: "<<endl;
cin>>n;
for(int i = 1; i <=n ; i++)
{
    if (n%i==0)
    {
        sum+=i;
    }
}
if(2*n==sum)
{
    cout<<n<<" is a perfect number"<<endl;
}
else cout<<n<<" is not a perfect number";

return 0;
}
