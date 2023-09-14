#include<iostream>
using namespace std;
class Date{
    int dd,mm,yy;
    public:
        Date(){
            cout<<"----------Default Constructor-----------"<<endl;
            dd=12;
            mm=03;
            yy=1947;
        }
        Date(int dd,int mm,int yy){
            this->dd=dd;
            this->mm=mm;
            this->yy=yy;
        }
        void display(){
            if(dd>31||mm>12){
                cout<<"Invalid input !!!"<<endl;
                return;
            }else{
                cout<<"Date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
            }
        }
        //setters
        void setDate(int dd){
            this->dd=dd;
        }
        void setMonth(int mm){
            this->mm=mm;
        }
        void setYear(int yy){
            this->yy=yy;
        }
        //getters
        int getDate(){
            return dd;
        }
        int getMonth(){
            return mm;
        }
        int getYear(){
            return yy;
        }
};
int main(){
    Date d;
    d.display();
    int dd,mm,yy;
    cout<<"Enter Date : "<<endl;
    cin>>dd;
    cout<<"Enter Month : "<<endl;
    cin>>mm;
    cout<<"Enter Year : "<<endl;
    cin>>yy;
    Date d1(dd,mm,yy);
    d1.display();
    char c;
    cout<<"Do you want to change the date ? (Y/N) "<<endl;
    cin>>c;
    if(c=='N'){
        return 0;
    }else{
        cout<<"Enter date,month,year :"<<endl;
        cin>>dd>>mm>>yy;
        d1.setDate(dd);
        d1.setMonth(mm);
        d1.setYear(yy);
        cout<<"Date changed ! "<<endl;
        d1.display();
        cout<<d1.getDate()<<"/"<<d1.getMonth()<<"/"<<d1.getYear();
    }
    return 0;

}