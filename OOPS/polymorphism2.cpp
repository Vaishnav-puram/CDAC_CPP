#include<iostream>
using namespace std;
class Color{
    public:
        void display(){
            cout<<"Color"<<endl;
        }
        //overloading func
        void display(string color){
            cout<<"Color is : "<<color<<endl;
        }
};
int main(){
    Color c;
    c.display();
    c.display("Red");
    return 0;
}