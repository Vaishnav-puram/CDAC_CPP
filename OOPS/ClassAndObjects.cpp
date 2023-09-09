#include<iostream>
using namespace std;
class Car{
    public:
        string brand,model;
        int milage=0;
        void drive(int drive){
            milage+=drive;
        }
        void display(){
            cout<<"Brand name = "<<brand<<endl;
            cout<<"Model name " <<model<<endl;
            cout<<"Milage = "<<milage<<" miles"<<endl;
        }
        //default constructor
        Car(){

        }
        //parameterized constructor
        Car(string b,string m,int d){ 
            brand=b;
            model=m;
            drive(d);
        }
        //copy constructor   
        Car(Car &obj){
            brand=obj.brand;
            model=obj.model;
            drive(obj.milage);
        }
}; //end of class
int main(){
    cout<<"By default constructor"<<endl;
    Car c; //object creation
    c.brand="Mahindra";
    c.model="XUV300";
    c.drive(50);
    c.display();
    cout<<"By parameterized constructor"<<endl;
    Car c1("Tata","Altroz",60); //creating object using parameterized constructor
    c1.display();
    cout<<"By copy constructor"<<endl;
    Car c2(c1); //creating copy constructor
    c2.display();
}

//if there is only parameterized constructor in the class and if we try to create object using default constructor will give error
//by default there will be default constructor , but once a parameterized constructor is  written we need to explicitly write the default constructor as well
//NOTE : constructors should be public