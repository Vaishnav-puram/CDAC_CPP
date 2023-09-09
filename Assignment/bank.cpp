#include<iostream>
using namespace std;
class Bank{
    int acc;
    string name;
    double bal;
    public:
    Bank(int acc,string name,double bal){
        this->acc=acc;
        this->name=name;
        this->bal=bal;
    }
    void withdrawal(int amount){
        if(amount>0&&amount<bal){
            bal=bal-amount;
            cout<<"Withdrawed amount is : "<<amount<<endl;
            cout<<"Current balance is : "<<bal<<endl;
        }else if(amount<0||amount>bal){
            cout<<"Insufficient balance !!! "<<endl;
        }
        return;
    }
    void deposit(int amount){
        if(amount>0){
            bal=bal+amount;
            cout<<"Successfully amount : "<<amount<<" credited ! "<<endl;
            cout<<"Current balance is : "<<bal<<endl;
        }else if(amount<0){
            cout<<"Please enter amount correctly ! "<<endl;
        }
        return;
    }
    int getBalance(){
        return bal;
    }
};
int main(){
    Bank b(123,"Vaishnav",30000);
    b.deposit(400);
    b.getBalance();
    b.withdrawal(400);
}