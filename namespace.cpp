#include<iostream>
using namespace std;
namespace A{
    void display(){
        cout<<"Hello ";
    }
}
namespace B{
    void display(){
    cout<<"Vaishnav ";
    }
}
int main(){
    A::display();
    B::display();
}