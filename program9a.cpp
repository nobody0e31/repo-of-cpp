#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{ 
      int a,b,result;
      
      cout<<"enter value of a and b"<<endl;
      cin>>a>>b;

      try
      {

        if (b == 0)
        {
            throw b;
        }
        result = a / b;
        cout<<"result is :"<<result;

        }

        catch(int c)
        {

            cout<<"divided by zero is not possible"<<endl;

        }

        return 0;

      }


 
