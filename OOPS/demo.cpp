#include<iostream>
using namespace std;
class Student
{
public: //by default data members and member functions are 'private'
    /* data */
    int rollno;
    string name;
public:
    void display(){
        cout<<name<<endl;
        cout<<rollno<<endl;
    }
};

int main(){
    Student s; //object creation
    s.name="Vaishnav";
    s.rollno=14;
    s.display();
    return 0;
}


