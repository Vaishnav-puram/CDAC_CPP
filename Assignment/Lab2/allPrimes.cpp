#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number till you want prime nos :"<<endl;
    cin>>n;
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
    return 0;
}