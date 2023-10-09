#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if((a%5==0)&&(a%11==0)){
        cout<<"Divisible by 5 and 11";
    }
    else{
        cout<<"Not divisible by 5 and 11";
    }
}