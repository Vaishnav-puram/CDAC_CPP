#include<iostream>
using namespace std;
inline int square(int x){ // to reduce function call overhead (push/pop of stack) , reduce overhead of return calls
    return x*x;
}
int main(){
    int x=2;
    cout<<"Square of "<<x<<" is : "<<square(2); //while called the whole code of inline func is substituted cout<<"Square of "
    return 0;
}