#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    string city;
    public:
        void setter(string name,int age,string city){
            this->name=name;
            this->age=age;
            this->city=city;
        }
        string getName(){
            return name;
        }
        string getCity(){
            return city;
        }
        int getAge(){
            return age;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"City : "<<city<<endl;
        }
};
int main(){
    Person p;
    p.setter("vaishnav",23,"nizamabad");
    p.display();
    cout<<p.getName()<<endl;
    cout<<p.getAge()<<endl;
    cout<<p.getCity()<<endl;
    return 0;
}