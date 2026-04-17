#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    int rollno;
    string name;
    ofstream file("student.txt");
    if (file.is_open()) {
        cout<<"name and roll no enter";
        cin>>name>>rollno;
        file<<"name:"<<name <<"\n rollno:"<<rollno<<endl;
        file.close();
        cout<<"file is created successfully"<<endl;
    
    } else {

        cout<<"could not create file";
                           
        return 0;


}}
