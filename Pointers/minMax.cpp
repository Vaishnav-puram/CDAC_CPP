#include<iostream>
using namespace std;
void getMinMax(int arr[],int size,int* min,int* max){
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]>*max){
            *max=arr[i];
        }else if(arr[i]<*min){
            *min=arr[i];
        }
    }   
    
}
int main(){
    int arr[6]={-2,-1,5,66,77,45};
    int min=arr[0];
    int max=arr[0];
    getMinMax(arr,6,&min,&max);
    cout<<"Min -> "<<min<<" Max -> "<<max<<endl;

}