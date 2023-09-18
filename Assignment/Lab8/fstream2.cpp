#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream inputfile("char2.txt",ios::in);
    
    fstream outputfile("char3.txt",ios::out);
    string line;
    while (getline(inputfile,line))
    {
        /* code */

        outputfile<<line;
    }
    inputfile.close();
    outputfile.close();
    return 0;
}