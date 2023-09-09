#include<iostream>
using namespace std;
void display(int ,int x=10 ); //func declaration with default argument and it has to be on right side
int main(){
    int y=5;
    display(y);
    int x=20; //overrides the default value
    display(y,x);
}
void display(int a,int b){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
