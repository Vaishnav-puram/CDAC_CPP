#include<iostream>
using namespace std;
class Color{
    public:
        void display(){
            cout<<"Color"<<endl;
        }
};
class Red:public Color{
    public:
        //overriding func of base class (run-time polymorphism)
        void display(){
            cout<<"Red Color"<<endl;
        }
};
int main(){
    Color c; //base class object creation
    Red r;   //derived class object creation
    c.display(); 
    r.display();
    return 0;
}