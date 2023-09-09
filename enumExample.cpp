#include<iostream>
using namespace std;
enum season{spring,summer,autumn,winter};
int main(){
    cout<<spring<<endl; //default ->0
    cout<<autumn<<endl;
    cout<<winter<<endl; //next increment by 1
    enum season s;
    s=autumn;
    cout<<s<<endl;
    s=spring;
    cout<<s;
    return 0;
}