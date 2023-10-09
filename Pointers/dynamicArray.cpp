#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : "<<endl;
    cin>>size;
    int* arr;
    arr=new int[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    delete [] arr;
    arr=NULL;  
}