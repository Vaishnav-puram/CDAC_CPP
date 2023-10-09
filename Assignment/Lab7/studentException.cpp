#include<iostream>
using namespace std;
class StudentException{
    string msg;
    public:
        StudentException(string msg){
            this->msg=msg;
        }
        void name(){
            cout<<msg<<endl;
        }
};
class Student{
    int rollno;
    string name;
    int age;
    public:
        Student(int rollno,string name,int age){
            this->rollno=rollno;
            this->name=name;
            this->age=age;
        }
        void display(){
            if(age<18){
                StudentException ex("Invalid age !");
                throw ex;
            }else{
                cout<<"Rollno : "<<rollno<<" Name : "<<name<<" "<<" Age : "<<age<<endl;; 
            }
        }
};
int main(){
    int rollno,age;
    string name;
    cout<<"Enter student roll no :"<<endl;
    cin>>rollno;
    cout<<"Enter student name :"<<endl;
    cin>>name;
    cout<<"Enter student age : "<<endl;
    cin>>age;
    Student s(rollno,name,age);
    try{
        s.display();
    }catch(StudentException &e){
        e.name();
    }
}