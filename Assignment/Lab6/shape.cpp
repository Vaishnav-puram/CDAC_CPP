#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void area()=0;
};
class Reactangle:public Shape{
    int l,b;
    public:
        Reactangle(int l,int b){
            this->l=l;
            this->b=b;
        }
        void area(){
            cout<<"Area of rectangle : "<<l*b<<endl;
        }
};
class Circle:public Shape{
    int r;
    public:
        Circle(int r){
            this->r=r;
        }
        void area(){
            cout<<"Area of circle : "<<3.14*r*r<<endl;
        }

};
class Square:public Shape{
    int s;
    public:
        Square(int s){
            this->s=s;
        }
        void area(){
            cout<<"Area of square : "<<s*s<<endl;
        }

};
int main(){
    //Shape s; object creation is not allowed
    Circle c(10);
    c.area();
    Square s(10);
    s.area();
    Reactangle r(10,10);
    r.area();
}
