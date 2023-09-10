#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<*ptr<<endl; //10
    cout<<ptr<<endl;  //address of 'a' in p 0x61ff08
    int **q=&ptr;
    cout<<*q<<endl; //value of ptr 0x61ff08
    cout<<**q<<endl; //value of a
    cout<<q<<endl; //address of q 0x61ff04
    int arr[3]={1,2,3};
    cout<<*arr<<endl; // value at index 0 - > 1
    int *aptr=arr; // since arr is already a base address
    for(int i=0;i<3;i++){
        cout<<*aptr<<" ";
        cout<<*(arr+i)<<" ";
        aptr++; //*arr++ is illegal
    }

}