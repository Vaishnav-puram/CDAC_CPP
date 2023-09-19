#include<iostream>
using namespace std;
class Complex{
    int real;
    int imaginary;
    public:
        Complex(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        void display(){
            cout<<real<<"+i"<<imaginary<<endl;
        }
        int getReal(){
            return real;
        }
        int getImaginary(){
            return imaginary;
        }
};
void operator+(Complex &c,Complex &c1){
    int Real=c.getReal()+c1.getReal();
    int Imaginary=c1.getImaginary()+c1.getImaginary();
    cout<<Real<<"+i"<<Imaginary<<endl;
}
int main(){
    Complex c(3,5);
    c.display();
    Complex c1(4,5);
    c1.display();
    c+c1;
}