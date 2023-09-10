#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    char c;
    cout<<"Enter a lower case charater :";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"vowel";
    }else{
        cout<<"consonant";
    }
    return 0;
}