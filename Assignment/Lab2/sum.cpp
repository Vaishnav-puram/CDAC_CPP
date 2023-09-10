#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    while(n>0){
        cout<<"Enter number:";
        cin>>n;
        if(n<0){
            break;
        }
        sum+=n;
        cout<<"sum is : "<<sum<<endl;
    }
    cout<<"Total sum : "<<sum;
    return 0;
}