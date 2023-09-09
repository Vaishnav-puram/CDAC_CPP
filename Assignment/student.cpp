#include<iostream>
using namespace std;
class Student{
    int roll;
    int marks1;
    int marks2;
    int marks3;
    public:
        void acceptInfo(){
            cout<<"Enter roll no . : "<<endl;
            cin>>roll;
            cout<<"Enter marks1 out of 100 : "<<endl;
            cin>>marks1;
            cout<<"Enter marks2 out of 100 : "<<endl;
            cin>>marks2;
            cout<<"Enter marks3 out of 100 : "<<endl;
            cin>>marks3;
        }
        void display(){
            cout<<"Roll no : "<<roll<<endl;
            cout<<"Marks1 : "<<marks1<<endl;
            cout<<"Marks2 : "<<marks2<<endl;
            cout<<"Marks3 : "<<marks3<<endl;
            int total=marks1+marks2+marks3;
            cout<<"Total : "<<total<<endl;
            double percentage=static_cast<double>(total)/300.0*100.0;
            cout<<"Percentage : "<<percentage<<endl;
            if(percentage>=75){
                cout<<"Grade A"<<endl;
            }else if(percentage>=55&&percentage<75){
                cout<<"Grade B"<<endl;
            }else{
                cout<<"Grade C"<<endl;
            }
        }
};
int main(){
    Student s;
    s.acceptInfo();
    s.display();
    return 0;
}