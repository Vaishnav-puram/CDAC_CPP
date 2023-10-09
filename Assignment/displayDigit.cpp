#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"Enter a single digit :";
    cin>>val;
    if(val>9){
        printf("Sorry you have to enter only single digit..!");
        return 0;
    }
    switch (val)
    {
    case 1:
        cout<<"One";
        break;
    case 2:
        cout<<"Two";
        break;
    case 3:
        cout<<"Three";
        break;
    case 4:
        cout<<"Four";
        break;
    case 5:
        cout<<"Five";
        break;
    case 6:
        cout<<"Six";
        break;
    case 7:
        cout<<"Seven";
        break;
    case 8:
        cout<<"Eight";
        break;            
    case 9:
        cout<<"Nine";
        break;
    case 0:
        cout<<"Zero";
        break;
    }
    return 0;
}