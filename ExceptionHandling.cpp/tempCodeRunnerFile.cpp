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
    string name;
    int age;
    public:
        Student(string name,int age){
            this->name=name;
            this->age=age;
        }
        void display(){
            if(age<18){
                StudentException ex("Invalid age !");
                throw ex;
            }else{
                cout<<"Name : "<<name<<" "<<"Age : "<<age<<endl;; 
            }
        }
};
int main(){
    Student s("vijay",18);
    try{
        s.display();
    }catch(StudentException &e){
        e.name();
    }
}