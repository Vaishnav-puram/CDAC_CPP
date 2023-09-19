#include<iostream>
using namespace std;
class Printer{
    string name;
    int availablePapers;
    public:
        Printer(string name,int availablePapers){
            this->name=name;
            this->availablePapers=availablePapers;
        }
        void Print(string data){
            int requiredPapers=data.length()/10;
            if(requiredPapers>availablePapers){
                string s="Insufficient Papers ! ";
                throw s;
            }else{
                cout<<"Printing .... "<<data<<endl;
            }
            availablePapers-=requiredPapers;
        }
};
int main(){
    Printer p("HP Printer",10);
    try{
        p.Print("Hello , My name is Vaishnav and I'm a Java Developer");
        p.Print("Hello , My name is Vaishnav and I'm a Java Developer");
        p.Print("Hello , My name is Vaishnav and I'm a Java Developer");
    }catch(string &s){
        cout<<s<<endl;
    }catch(...){ //handles any type of exceptions and this default handler should be at last
        cout<<"Exception happened !"<<endl;
    }
    return 0;
}