#include<iostream>
using namespace std;
template<class T>
void Swap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5,b=7;
    cout<<a<<" - "<<b<<endl;
    Swap(a,b);
    cout<<a<<" - "<<b<<endl;
    char c='A',d='B';
    cout<<c<<" - "<<d<<endl;
    Swap(c,d);
    cout<<c<<" - "<<d<<endl;

}