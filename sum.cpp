#include<iostream>
using namespace std;

int main(){

    int i ,n, sum;
    sum = 0;

    cout<<" enter n";
    cin>>n;

    for(i = 0;i <= n;i++)
    {
        sum = sum +i;
    }
    cout<<"sum is = "<<sum;

    return 0;
}