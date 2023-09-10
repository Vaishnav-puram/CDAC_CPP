#include<iostream>
using namespace std;
int main(){
    int eSum=0;
    int oSum=0;
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            eSum+=i;
        }else{
            oSum+=i;
        }
    }
    cout<<"Even sum : "<<eSum<<endl;
    cout<<"Odd sum : "<<oSum<<endl;
    return 0;
}