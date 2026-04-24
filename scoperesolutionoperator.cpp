#include<iostream>
#include<string>

using namespace std;

class student{

    private:

    int roll ;
    
    char name[34];
    string address;
    public:
    void input(){
    cout<<"enter roll and name ";
    cin>>roll;
    cin>>name;
    }
    void show(){

        cout<<"here are the student details"<<roll<<" \n"<<name;
    }
    void inpu();
    void sho();
    
};
    void student::inpu()
    {
        cout<<"enter address of student";
        cin>>address;
    }
    void student::sho()
{
    cout<<"address of student is :"<<address;
}

int main(){

    student s;
    s.input();
    s.show();
    s.inpu();
    s.sho();
    return 0;
}

  