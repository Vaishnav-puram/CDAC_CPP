#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int res=0;
    while (n>0)
    {
        int digit=n%10;
        res=res*10+digit;
        n=n/10;

    }
    cout<<res;
    return 0;
}