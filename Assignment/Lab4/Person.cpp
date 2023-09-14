#include<iostream>
using namespace std;
class Person{
    string name,city;
    int age;
    public:
        Person(){
            cout<<"-----------Default constructor-------"<<endl;
            name="Raghu";
            age=23;
            city="Bombay";
        }
        Person(string name,int age,string city){
            cout<<"---------Parameterised constructor-------------"<<endl;
            this->name=name;
            this->age=age;
            this->city=city;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"City : "<<city<<endl;
        }

        //setters
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setCity(string city){
            this->city=city;
        }
        //getters
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getCity(){
            return city;
        }
};
int main(){
    int age;
    string  name,city;
    cout<<"Enter person details : name , age , city :"<<endl;
    cin>>name>>age>>city;
    Person p;
    p.display();
    Person p1(name,age,city);
    p1.display();
    cout<<"Through gettters : "<<endl;
    cout<<p1.getAge()<<endl;
    cout<<p1.getName()<<endl;
    cout<<"Enter city to change : "<<endl;
    cin>>city;
    p1.setCity(city);
    p1.display();


}