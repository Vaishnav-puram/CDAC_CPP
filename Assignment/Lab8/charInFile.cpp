#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    char start,end;
    cout<<"Enter starting character and ending character : "<<endl;
    cin>>start>>end;
    // ofstream inputfile("char.txt");
    ofstream inputfile;
    inputfile.open("char.txt",ios::out);
        for (char i = start; i <=end; i++)
        {
            /* code */
            inputfile<<i<<" ";
        }
    inputfile.close();
    // ifstream outputfile("char.txt");
    ifstream outputfile;
    outputfile.open("char.txt",ios::in);
   if (!outputfile.is_open()) {
        cout << "Failed to open char.txt for reading." << endl;
        return 0;
        }
    while (outputfile)
    {
        /* code */
        char ch;
        outputfile>>ch;
        
        if (!outputfile.eof())
        {
            /* code */
            cout<<ch<<" ";
        }
        
        
        
    }
    outputfile.close();
    
    

}