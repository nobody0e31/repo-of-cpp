/*#include<iostream>
using namespace std;
class jj
{

    private:
    int n,a,count;
    public:
    void input()
    {
        cout<<"enter n";
        cin>>n;
    
    }

    void show()
    {
        count=0;
        a=0;
        while(n>0)
        {
            a=n%10;
              
           
            cout<<"digits in number are:"<<a<<endl;
           
          
        a++;
            count++;
            n=n/10;
        }
        cout<<"total or count of numbers is  "<<count<<endl;
          
        }
    };

    int main()
    {
        jj j;
        j.input();
        j.show();
        return 0;
      
    }*/
#include<iostream>
using namespace std;
class sum
{
private:
int n,i,sum,a;
public:
void input()
{

    cout<<"enter n";
    cin>>n;     

}
void out()
{
    sum =0;
    for(i=0;i>0;)
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
