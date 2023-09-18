#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char start,end;
    cout<<"Enter first character : "<<endl;
    cin>>start;
    cout<<"Enter last character : "<<endl;
    cin>>end;
    fstream inputfile("char2.txt",ios::out);
        for (char i = start; i <=end; i++)
        {
            /* code */
            inputfile<<i<<" ";
        }
    inputfile.close();
    return 0;
    
}