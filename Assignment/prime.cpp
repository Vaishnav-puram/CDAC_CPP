#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to check prime :"<<endl;
    cin>>n;
        bool flag=false;
        for(int j=2;j*j<=n;j++){ 
            if(n%j==0){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"Prime ";
        }else{
            cout<<"Not Prime";
        }


    return 0;
}