#include<iostream>
#include<math.h>
using namespace std;
int amstrong(int x){
    int temp1=x;
    int temp2=x;
    int count=0;
    int res=0;
    while(temp1!=0){
        temp1=temp1/10;
        count++;
    }
    //cout<<count<<endl;
    while(temp2!=0){
        int last=temp2%10;
        int digit=pow(last,count);
        res+=digit;
        temp2=temp2/10;
    }
    //cout<<res;
    return res;

}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int y=amstrong(n);
    if(n==y){
        cout<<"Amstring number";
    }else{
        cout<<"Not an Amstrong number";
    }
    return 0;
}