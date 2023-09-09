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
class Employee{  // Student 'has-a' Date
    int id;
    string name;
    Date d; //date has a relationship 
    public:
        void getDetails(){
            cout<<"Enter name : "<<endl;
            cin>>name;
            cout<<"Enter id : "<<endl;
            cin>>id;
            d.getDetails();
        }
        void display(){
            cout<<name<<endl;
            cout<<id<<endl;
            d.displayDate();
        }
};
int main(){
    Employee e;
    e.getDetails();
    e.display();
    return 0;

}