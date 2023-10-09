#include<iostream>
using namespace std;

class ComplexNumber{
    private : int real,img;

    public :
    ComplexNumber(){
        cout<<"------Default------"<<endl;
        real = 4;
        img = 9;
    }
    ComplexNumber(int real, int img){
        cout<<"------Parameterised-----"<<endl;
        this->real = real;
        this->img = img;
    }
    void displayComplexNumber(){
        cout<<"Complex Number is "<<real<<"+"<<img<<"i"<<endl;
    }

    void setReal(int real){
        this->real=real;
    }
    int getReal(){
        return real;
    }

    void setImg(int img){
        this->img=img;
    }
    int getImg(){
        return img;
    }
};

int main() {
    ComplexNumber cn1;
    cn1.displayComplexNumber();

    ComplexNumber cn2(5, 6);
    cn2.displayComplexNumber();

    cn2.setReal(2);
    cout<<"Updated real value : "<<cn2.getReal()<<endl;

    cn2.setImg(4);
    cout<<"Updated real value : "<<cn2.getImg()<<endl;
    return 0;
}