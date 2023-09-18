#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream inputfile;
    ifstream outputfile;
    outputfile.open("char.txt",ios::in);
    if (!outputfile.is_open())
    {
        /* code */
        cout<<"Error in opening file !";
        return 0;
    }
    inputfile.open("char1.txt",ios::out);
    while (outputfile)
    {
        /* code */
        char c;
        outputfile>>c;
        inputfile<<c;


    }
    cout<<"Copied Successfully ! "<<endl;
    inputfile.close();
    outputfile.close();
    return 0;
    
}