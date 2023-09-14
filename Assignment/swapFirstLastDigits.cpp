#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n; //5432
    int count=log10(n); //3
    int divide=pow(10,count); //1000
    int first=n/divide; //5
    n=n%divide; //432
    int last=n%10; //2
    n=n/10; //43
    int res=last*divide+n*10+first;
    cout<<res;
    



}