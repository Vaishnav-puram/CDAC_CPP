#include<iostream>
using namespace std;
class abstractionExample{
    private:
        int a, b; //can't be accessed
    public :
        void set(int x,int y){ //use setters to assign values to the member variables , this is 'Mutator function'
            a=x;  //here the 'a' and 'b' are accessible because scope of private modifier is within the class
            b=y;
        }
        void acceptDetails(){ //helper function
            cout<<"Enter value a : "<<endl;
            cin>>a;
            cout<<"Enter value b : "<<endl;
            cin>>b;
           display();
        }
        void display(){ //Accessor function
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl; 
        }
        void display1(); //func declaration
}; //end of class

void abstractionExample::display1(){ //defining function outside class using scope resolution operator
            cout<<"a = "<<a<<endl; //with this we can also access the private data members
            cout<<"b = "<<b<<endl; 
}

int main(){
    abstractionExample abs; //object creation
    abs.set(10,20);
    abs.display();
    cout<<"Calling func outside the class :"<<endl;
    abs.display1();
    cout<<"Accepting values :"<<endl;
    abs.acceptDetails();
    return 0;
}