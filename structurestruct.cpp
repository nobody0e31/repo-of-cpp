#include<iostream>
#include<string>
using namespace std;
struct address {

    int pin;
    char adrs[33];

};
struct student{

    int roll;
    char name[65];
    address adr;
};

int main(){

    student s;
    
    cout<<"enter address"<<endl;
    cin>>s.adr.pin>>s.adr.adrs;
    cout<<"enter student roll no and name";
    cin>>s.roll>>s.name;

    cout<<"here are sudent details :"<<s.adr.pin<<s.adr.adrs<<s.name<<s.roll<<endl;
    return 0;


}