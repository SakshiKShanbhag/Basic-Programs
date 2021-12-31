#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        if (n%i ==0)
            cout<<"the factors are : "<< i <<endl;

    }

return 0;
}
