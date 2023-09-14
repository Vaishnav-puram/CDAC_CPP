#include<iostream>
using namespace std;
void unionFind(int arr1[],int arr2[],int s1,int s2){
    int s=s1+s2;
    int *arr3;
    arr3=new int[s];
    int i=0;
    for(;i<s1;i++){
        arr3[i]=arr1[i];
    }
    int index=i;
    for(int j=0;j<s2;j++){
        arr3[index]=arr2[j];
        index++;
    }
    for (int k = 0; k < s; k++)
    {
        /* code */
        cout<<arr3[k]<<" ";
    }

}
int main(){
    int size1,size2;
    cout<<"Enter size of array one :"<<endl;
    cin>>size1;
    cout<<"Enter size of array two :"<<endl;
    cin>>size2;
    int *arr1 = nullptr;
    int *arr2 = nullptr;
    arr1=new int[size1];
    arr2=new int[size2];
    // int size1=sizeof(arr1)/sizeof(arr1[0]); to retrieve the size of array
    // int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"Enter array one details :"<<endl;
    for (int i = 0; i < size1; i++)
    {
        /* code */
        cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter array two details :"<<endl;
    for (int i = 0; i < size2; i++)
    {
        /* code */
        cin>>arr2[i];
    }
    cout<<endl;
    
    unionFind(arr1,arr2,size1,size2);
}