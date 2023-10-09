#include<iostream>
using namespace std;
class DateException{
    string msg;
    public:
        DateException(string msg){
            this->msg=msg;
        }
        void name(){
            cout<<"Exception !"<<msg<<endl;
        }
};
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
        void display(){
            DateException e("Invalid date !");
            if(this->day>31||this->month>12){
                throw e;
            }
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    int d,m,y;
    cout<<"Enter day,month and year : "<<endl;
    cin>>d>>m>>y;
    Date d1;
    Date d2(d,m,y);
    try{
        d1.display();
        d2.display();
    }catch(DateException &e){
        e.name();
    }
    return 0;
    
}