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
Complex operator++(Complex &c){
    int real=c.getReal();
    int img=c.getImaginary();
    real+=1;
    img+=1;
    c.setReal(real);
    c.setImaginary(img);
    return c;
    
}


int main(){
    Complex c(3,5);
    c.display();
    Complex c1=++c;
    c1.display();

}