#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    // cin>>s; hello world
    // cout<<s; hello
    getline(cin,s); //hello world
    cout<<s<<endl; // hello world
    cout<<s.reserve()<<endl;
    cout<<s.length()<<endl;
    cout<<s.append(" hi")<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.clear();
    cout<<s<<" "<<s.length()<<endl;
}