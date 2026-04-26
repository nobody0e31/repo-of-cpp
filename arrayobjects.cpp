#include<iostream>
using namespace std;
class employee
{

    public:
    int id;
    char name[33];
    void input()
    {
        cout<<"enter the id & name";
        cin>>id>>name;
    }
    void display(){
        cout<<"details of id and name"<<id<<" "<<name<<endl;
    
    }};

        int main()
        {
            class employee E[5];
            int i , n;
            cout<<"enter the no of employee for print  details";
            cin>>n;
            for(i=1;i<=n;i++)
            {

            E[i].input();
            
            }

            for(i=1;i<n;i++)
            {
            E[i].display();
            
            }
        return 0;
        
        }
        