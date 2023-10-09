#include<iostream>
using namespace std;
class Date{
    int day;
    int month;
    int year;
    public:
        Date(){
            this->day=28;
            this->month=1;
            this->year=1999;
        }
        Date(int day,int month,int year){
            this->day=day;
            this->month=month;
            this->year=year;
        }
        void accceptDate(){
            cin>>day>>month>>year;

        }
        void display(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
class Employee{
    int empno;
    string name;
    Date d;
    public:
        void acceptDetails(){
            cout<<"Enter emp id :\n";
            cin>>empno;
            cout<<"Enter emp nmae : \n";
            cin>>name;
            cout<<"Enter Date : \n";
            d.accceptDate();
        }
        void display(){
            cout<<"Emp Id : "<<empno<<endl;
            cout<<"Emp name : "<<name<<endl;
            d.display();
        }
};
int main(){
    Employee e;
    e.acceptDetails();
    e.display();
    return 0;
}