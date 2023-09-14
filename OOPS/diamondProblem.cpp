#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A constructor"<<endl;
        }
        void print(){
            cout<<"Print of A"<<endl;
        }

};
class B:virtual A{ //will create only single copy of base class
    public:
        B(){
            cout<<"B constructor"<<endl;
        }
        void print(){
            cout<<"Print of B"<<endl;
        }

};
class C:virtual A{ //will create only single copy of base class
    public:
        C(){
            cout<<"C constructor"<<endl;
        }
        void print(){
            cout<<"Print of C"<<endl;
        }

};
class D:public B,public C{
    public:
        D(){
            cout<<"D constructor"<<endl;
        }
        // void print(){
        //     cout<<"Print of D"<<endl;
        // }
        void print(){
            C::print();
        }

};
int main(){
    D d;
    //d.print(); //ambiguous -> compile time error
    d.B::print(); //now it will call B's method without any ambiguity
    d.print(); //this won't create any ambiguity as D class has a method print and that method indeed calling print of C's method




}