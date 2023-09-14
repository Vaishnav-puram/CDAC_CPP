#include<iostream>
using namespace std;
class Student{
    int rollno,marks1,marks2,marks3,total;
    double percentage;
    char grade;
    public:
        void acceptData(int rollno,int marks1,int marks2,int marks3){
            this->rollno=rollno;
            this->marks1=marks1;
            this->marks2=marks2;
            this->marks3=marks3;
        }
        char calGrade(int percentage){
            if (percentage>=75)
            {
                grade='A';
            }else if(percentage>=55&&percentage<75){
                grade='B';
            }else{
                grade='C';
            }
            return grade;
        }
        void display(){
            total=marks1+marks2+marks3;
            percentage=total/3;
            grade=calGrade(percentage);
            cout<<"Student details :"<<endl;
            cout<<"Rollno : "<<rollno<<endl;
            cout<<"Total : "<<total<<endl;
            cout<<"Percentage : "<<percentage<<endl;
            cout<<"Grade :"<<grade<<endl;
            
        }
};
int main(){
    int rollno,marks1,marks2,marks3;
    cout<<"Enter student details , rollno and marks :"<<endl;
    cin>>rollno>>marks1>>marks2>>marks3;
    Student s;
    s.acceptData(rollno,marks1,marks2,marks3);
    s.display();
}