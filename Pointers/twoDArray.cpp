#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter no.of rows : "<<endl;
    cin>>rows;
    cout<<"Enter no .of cols : "<<endl;
    cin>>cols;
    int** arr=new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        /* code */
        arr[i]=new int[cols];
    }
    
    for(int i=0;i<rows;i++){
        for (int j = 0; j < cols; j++)
        {
            /* code */
            cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<":";
            cin>>arr[i][j];
        }
        
    }
    for(int i=0;i<rows;i++){
        for (int j = 0; j < cols; j++)
        {
            /* code */
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

}