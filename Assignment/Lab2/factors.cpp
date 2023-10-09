#include<iostream>
using namespace std;
void findFactors(int n){
    cout<<"Factors are : "<<endl;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }   
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    findFactors(n);
}