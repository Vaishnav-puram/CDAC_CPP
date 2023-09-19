#include<iostream>
using namespace std;
class Complex{
    int real;
    int imaginary;
    public:
        Complex(){

        }
        Complex(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        void display(){
            cout<<real<<"+i"<<imaginary<<endl;
        }
        void setReal(int real){
            this->real=real;
        }
        void setImaginary(int imaginary){
            this->imaginary=imaginary;
        }
        int getReal(){
            return real;
        }
        int getImaginary(){
            return imaginary;
        }
};
Complex operator+(Complex &c,Complex &c1){
    Complex res;
    int Real=c.getReal()+c1.getReal();
    int Imaginary=c1.getImaginary()+c1.getImaginary();
    res.setReal(Real);
    res.setImaginary(Imaginary);
    return res;
}
// void operator+(Complex &c,Complex &c1){
//     int Real=c.getReal()+c1.getReal();
//     int Imaginary=c1.getImaginary()+c1.getImaginary();
//     cout<<Real<<"+i"<<Imaginary<<endl;
// }
int main(){
    Complex c(3,5);
    c.display();
    Complex c1(4,5);
    c1.display();
    //c+c1; method-1
    Complex sum=c+c1;
    sum.display();
}