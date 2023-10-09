#include<iostream>
using namespace std;
//void solve(int *); func declaration 
void solve(int *ptr){
    *ptr=99;
}
int main(){
    int x=10;
    cout<<"x = "<<x<<endl; 
    solve(&x);
    cout<<"x = "<<x<<endl;
}
