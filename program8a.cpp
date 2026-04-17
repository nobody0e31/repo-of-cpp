#include<iostream>
#include<string>
using namespace std;

template<class T>
T larger(T a, T b)
{


    return a > b? a:b;
}

int main()
{

    int x , y;
    float m , n;
    char ch1 , ch2 ;
    cout<<"enter two integer then two float then two character "<<endl;
    cin>>x>>y>>m>>n>>ch1>>ch2;
    //cin>>


    cout<<"larger integer is :"<<larger(x,y);
    cout<<"larger float is :"<<larger(m,n);
    cout<<"larger character is"<<larger (ch1,ch2)<<endl;


    return 0;


}