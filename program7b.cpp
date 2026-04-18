#include<iostream>
#include<string>
using namespace std;
class point
{

    public:
    int a , b;

    point(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    
     point operator +(const point & obj)
    {
        point result;
        result.a = this-> a + obj.a;
        result.b = this-> b + obj.b;

        return result;

    }



    point operator -(const point & obj){
        point result;
        result.a = this->a - obj.a;
        result.b = this->b - obj.b;

        return result;
    }
 void display(){
    cout<<"here are the operation "<<a<<" "<<b<<endl;
 }
};
int main(){

    point p1(19,35);
    point p2(5,3);
    cout<<"point p1 :";

    p1.display();
    p2.display();
    point p3 = p1+ p2;
    point p4 = p1 - p2;
    p3.display();
    p4.display();


    return 0;
    
}