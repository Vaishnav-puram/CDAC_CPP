#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class Hero{
    private :
        int health;
    public:
        char *name;
        char level;
    Hero(){
        //cout<<"Default constructor called "<<endl;
        name=new char[20]; //dynamic allocation
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char c){
        level=c;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Health : "<<this->health<<endl;
        cout<<"Level : "<<this->level<<endl;
    }

    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
        cout<<"Name : "<<name<<endl;
        cout<<"Health : "<<health<<endl;
        cout<<"Level : "<<level<<endl;
    }
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

};
int main(){
    Hero h1;
    h1.setHealth(1201);
    h1.setLevel('C');
    char name[9]="Vaishnav";
    h1.setName(name);
    //h1.print();

    //use default copy constructor
    Hero h2(h1);
    //h2.print();

    h1.name[0]='Y'; //h1 object changed then h2 object will also be changed - > 'shallow copy'
    h1.print();
    h2.print();

}