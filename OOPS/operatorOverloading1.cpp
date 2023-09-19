#include<iostream>
using namespace std;
class Student{
    int age;
    string name;
    public:
        Student(string name,int age){
            this->name=name;
            this->age=age;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};
void operator<<(ostream &c,Student &s){
    c<<"Name : "<<s.getName()<<endl;
    c<<"Age : "<<s.getAge()<<endl;
} 
int main(){
    Student s("Vaishnav",23);
    cout<<s;
    
}