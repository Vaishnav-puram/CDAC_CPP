#include<iostream>
using namespace std;
class A{
    int a;
    char c;
    char d;
    int b;
};
class B:public A{
    char d;
    int c;
};
int main(){
    A a;
    cout<<sizeof(a)<<endl; //12 -> 4+1+1+2+2+2
    B b;
    cout<<sizeof(b)<<endl; //20 -> 12+4 
}