#include<iostream>
using namespace std;
int main()
{


/*int a,b,c;


cout<<"enter the value of a\n"<<endl;
cin>>a;
cout<<"enter the value of b\n"<<endl;

cin>>b;
c=a+b;
cout<<"the sum is \n"<<c;


float v=65.8f;
long double m=65.8L;;
cout<<"\nthe value of v is "<<v<<endl<<"\nthe value of m is "<<(65.8);  

cout<<"\nthe size of v is "<<sizeof(65.8)<<endl<<"size of m is "<<sizeof (65.8)<<endl;
cout<<"\nthe size of v is "<<sizeof(65.8f)<<endl<<"size of m is "<<sizeof (65.8l)<<endl;


*/
    //*******referncd variables******* */
   // float x=98;
   // float &y=x;
    //cout<<x<<endl;
    //cout<<y<<endl;


    //**********type casting************* */
    int a=56;
    float x=89.55;
    cout<<"the value of a is "<<(float)a<<endl;
    cout<<"the value of x is "<<(int)x<<endl;



cout<<"the expression of a+x is "<<a+x<<endl;
cout<<"the expression of a+x is "<<a+int(x)<<endl;

cout<<"the expression of a+x is "<<a+(int)x<<endl;




return 0;

}