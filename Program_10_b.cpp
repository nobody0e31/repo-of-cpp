#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{


    string data;

    
    ifstream file("student.txt");

    if (file.is_open()) {

               while( getline( file , data))
                          {

                            cout<<data<<endl;
                        }

                          file.close();
    }

    else {
        cout<<"could not find";

    }

    return 0;




}
