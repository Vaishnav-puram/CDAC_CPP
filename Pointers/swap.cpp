#include<iostream>
using namespace std;
void swap(int *a,int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main(){
    int a=10;
    int b=20;
    int *aptr=&a;
    int *bptr=&b;
    cout<<a<<" ";
    cout<<b<<" "<<endl;
    swap(*aptr,*bptr);
    cout<<a<<" ";
    cout<<b<<" "<<endl;
}