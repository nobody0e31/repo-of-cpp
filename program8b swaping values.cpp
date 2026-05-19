#include<iostream>
using namespace std;
template<class T>
class swaping

{
 public:
T a ,b;


    void input()
    {

        cout<<"entr value of a and b";
        cin >> a >> b;

    }

    void operation()
    {

        T temp;
        temp = a;
        a = b;
        b = temp;

    }

    void show ()
    {

    cout<<"value after swap"<<a<<" "<<b;

    }

};

    int main()
    {
     swaping <float> s;
    s.input();
    s.operation();
    s.show();
   
return 0;

    }

  