#include<iostream>
using namespace std;

int reverse(int x){
    int res=0;
    while (x>0)
    {
        int digit=x%10;
        res=res*10+digit;
        x=x/10;

    }
    return res;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    int reversed=reverse(n);
    if(n==reversed){
        cout<<"Number is palindrome ";
        return 0;
    }
    cout<<"Number is not a palindrome";
    return 0;

}