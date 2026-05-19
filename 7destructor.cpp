#include<iostream>
using namespace std;

class demo{

    public:

    demo(){

        cout<<"constructor is called"<<endl;
    }
    ~demo(){

        cout<<"destructor is called"<<endl;
    }
};
    int main(){

        demo d;
        cout<<"ok "<<endl;
        
}