#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void area()=0;
};
class Rectangle:public Shape{
    int l,b;
    public:
        void setPar(int l,int b){
            this->l=l;
            this->b=b;
        }
        void area(){
            int a=l*b;
            cout<<"Area of Rectangle : "<<a<<endl;
        }
        
};
class Circle:public Shape{
    int r;
    public:
        void setPar(int r){
            this->r=r;
        }
        void area(){
            double a=3.14159265*r*r;
            cout<<"Area of Circle : "<<a<<endl;
        }

};
class Square:public Shape{
    int side;
    public:
        void setPar(int side){
            this->side=side;
        }
        void area(){
            int a=side*side;
            cout<<"Area of Square : "<<a<<endl;
        }

};
int main(){
    Rectangle r;
    r.setPar(10,20);
    r.area();
    Circle c;
    c.setPar(10);
    c.area();
    Square s;
    s.setPar(10);
    s.area();
}