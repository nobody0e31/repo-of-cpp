#include<iostream>
using namespace std;
class sum
{
private:
int n,sum,a;
public:
void input()
{

    cout<<"enter n";
    cin>>n;     

}
void out()
{
   
  
   sum=0;
while(n>0)
    {
        a=n%10;
        sum=sum+a;
       
        n=n/10;

    }
    cout<<"sum is"<<sum<<endl;

}
};
int main()
{
    sum s;
    s.input();
    s.out();
    return 0;
}
