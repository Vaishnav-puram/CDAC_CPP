#include<iostream>
using namespace std;
int main(){
    char c;
    int n;
    cout<<"Enter character :"<<endl;
    cin>>c;
    cout<<"Enter number till which you want to print characters :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch=c+i;
        cout<<ch<<" ";
    }
    return 0;
}