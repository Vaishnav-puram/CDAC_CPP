#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three angles of the triangle : ";
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(sum==180&&a!=0&&b!=0&&c!=0){
        cout<<"The given angles will form a valid triangle ";
    }else{
        cout<<"The given angles will not form a valid triangle ";
    }
    return 0;
}