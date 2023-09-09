#include<iostream>
using namespace std;
class Vehicle{ //base class
    public:
        string brand;
        void displayBrand(){
            cout<<"Brand = "<<brand<<endl;
        }
};
class Car:public Vehicle{ //Car class inherits Vehicle class , Car class is 'derived class' , 'Car 'is-a' Vehicle'
    public:
        string model;
        void displayModel(string m){
            model=m;
            cout<<"Model = "<<model<<endl;
        }
};
int main(){
    Car c; //creating object of derived class and accessing data members and member func's of base class
    c.brand="Mahindra";
    //c.model="XUV300";
    c.displayBrand();
    c.displayModel("XUV300");
    return 0;
}