#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Select the options from below : "<<endl;
        cout<<"1. Area of Circle "<<endl;
        cout<<"2. Area of Rectangle"<<endl;
        cout<<"3. Area of Triangle "<<endl;
        cout<<"4. Exit "<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            /* code */
            int r;
            cout<<"Enter radius of circle :";
            cin>>r;
            cout<<3.14159265*r*r;
            break;
        case 2:
            /* code */
            int l,b;
            cout<<"Enter length and breadth of rectangle :";
            cin>>l>>b;
            cout<<l*b;
            break;
        case 3:
            /* code */
            int base,h;
            cout<<"Enter base and height of triangle";
            cin>>base>>h;
            cout<<0.5*base*h;
            break;
        case 4:
            /* code */
            break;
        default:
            cout<<"Enter valid choice !!";
            break;
        }
    }while(n!=4);
    return 0;
}