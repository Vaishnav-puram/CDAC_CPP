#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<"Enter power :"<<endl;
    cin>>x;
    int res=1;
    for(int i=1;i<=x;i++){
        res*=n;
    }
    cout<<"Result : "<<res;
    return 0;
    
}