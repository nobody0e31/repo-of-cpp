#include<iostream>
using namespace std;

class meta {

    private:
    int a , b;
     public:
  
     meta(int x , int y)
     {
       a = x;
       b = y;
     }


    void show(){

        cout<<"value of x and y \n"<<a<<endl<<b;
     }
    };
    int main(){
        int val1,val2;
        cout<<"enter  v1 and v2. = ";
        cin>>val1>>val2;
        meta m(val1,val2) ;
       
        m.show();
}