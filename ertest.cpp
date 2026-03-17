#include<iostream>
using namespace std;
class patten
{
    private:
    int i,n;
    public:
    
    void input()
    {
        cout<<"enter n: ";
        cin>>n;
    }
       
    void display()
    {
        while(n>0)
        {
            for(i=1; i<=n; i++)
            {
                cout<<"* ";
            }
            cout<<endl;
            n--;
        }
    }
    };

int main()
{
    patten p;
    p.input();
    p.display();
    return 0;
}
