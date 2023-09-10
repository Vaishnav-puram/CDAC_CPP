#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number till you want prime nos :"<<endl;
    cin>>n;
    // for any number 'n', its factors (if any) cannot be greater than its square root. So, we only need to check up to the square root of 'i'.
    for (int i = 2; i <n; i++)
    {
        bool flag=false;
        for(int j=2;j*j<=i;j++){ //or j<=i/2 till less than equal to its square root
            if(i%j==0){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<i<<" ";
        }
    }

    // int m;
    // cout<<"Enter number till you want prime nos :"<<endl;
    // cin>>m;
    // for(int i=2;i<m;i++){
    //     bool f=false;
    //     for(int j=2;j<i;j++){
    //         if(i%j==0){
    //             f=true;
    //             break;
    //         }
    //     }
    //     if(!f){
    //         cout<<i<<" ";
    //     }
    // }



    return 0;
}