#include<iostream>
#include<string>
using namespace std;
struct student {


    int roll;
    char Name[33];

    void details(){
    cout<<"enter name of student ";
    cin>>Name;
    cout<<" name of student is : "<<Name<<endl;
}
};

int main(){

    student s;
    s.details();
    return 0;

}