#include<iostream>
using namespace std;
int main(){
    double a,b;
    char op;
    cout<<"Enter first operand : "<<endl;
    cin>>a;
    cout<<"Enter second operand :"<<endl;
    cin>>b;
    cout<<"Enter the operator : "<<endl;
    cin>>op;
    double res;
    switch (op)
    {
    case '+':
        res=a+b;
        cout<<"Result is :"<<res<<endl;
        break;
    case '-':
        res=a-b;
        cout<<"Result is :"<<res<<endl;
        break;
    case '*':
        res=a*b;
        cout<<"Result is :"<<res<<endl;
        break;
    case '/':
        res=a/b;
        cout<<"Result is :"<<res<<endl;
        break;        
    
    }
    return 0;
}