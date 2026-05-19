#include<iostream>
using namespace std;
class add {
     
    public:

    int show(int a = 23,int b = 3)
    {
       
            return (a + b);

        }
    };

    int main(){

        add d;
        cout<<"add is : "<<d.show();
        cout<<"\nadd is : "<<d.show(3,43);
        return 0;

    }
