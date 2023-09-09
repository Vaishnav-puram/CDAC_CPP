#include<iostream>
using namespace std;
class Date{
    int date;
    int month;
    int year;
    public:
        void getDetails(){
            cout<<"Enter date : "<<endl;
            cin>>date;
            cout<<"Enter month : "<<endl;
            cin>>month;
            cout<<"Enter year : "<<endl;
            cin>>year;
        }
        void displayDate(){
            cout<<date<<"-"<<month<<"-"<<year;
        }
};
class Student{  // Student 'has-a' Date
    int rollno;
    string name;
    Date d; //date has a relationship 
    public:
        void getDetails(){
            cout<<"Enter name : "<<endl;
            cin>>name;
            cout<<"Enter rollno : "<<endl;
            cin>>rollno;
            d.getDetails();
        }
        void display(){
            cout<<name<<endl;
            cout<<rollno<<endl;
            d.displayDate();
        }
};
int main(){
    Student s;
    s.getDetails();
    s.display();
    return 0;

}