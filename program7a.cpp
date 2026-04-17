#include<iostream>
using namespace std;

class A

{

    public:
    int a , b;
    virtual void display (){

        cout<<"i've created here a virtual function "<<endl;


    }
};

class B:public A
{


    public:
    void display() override {
        cout<<"it is child class"<<endl;
    }
};
int main()

{
B ob;
A *  ptr;
ptr = & ob;
ptr->display();
return 0;    
}