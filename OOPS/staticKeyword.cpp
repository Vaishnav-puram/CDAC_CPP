#include<iostream>
using namespace std;
class A{
    int a;
    public:
         static int staticVariable;
         static int staticFunc(){
            cout<<"From static function : "<<endl;
            return staticVariable;
         }
};
int A::staticVariable=5;
int main(){
    cout<<A::staticVariable<<endl;
    A a;
    cout<<a.staticVariable<<endl;
    A a1;
    a1.staticVariable=10;
    cout<<a1.staticVariable<<endl;
    cout<<a1.staticFunc();
}