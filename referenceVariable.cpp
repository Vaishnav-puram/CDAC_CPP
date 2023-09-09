#include<iostream>
using namespace std;
void swap(int &,int&); // function declaration
int main(){
    int x=10;
    int &r=x; //while creating reference variable it has to be initialized and defined at the same time 
    cout<<"r = "<<r<<endl; //10
    r++;
    cout<<"x = "<<x<<endl; //11
    cout<<"r = "<<r<<endl; //11
    x--;
    cout<<"x = "<<x<<endl; //10
    cout<<"r = "<<r<<endl; //10
    int a=89;
    int b=99;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
void swap(int &x,int &y){ //reference variables will reflect on the original values ie., dummy variables or formal variables are not created 
    x=x^y;
    y=x^y;
    x=x^y;
}