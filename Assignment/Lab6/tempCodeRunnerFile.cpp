#include<iostream>
using namespace std;

class Bank{
    int acc;
    string name;
    double bal;
    public:
    Bank(){

    }
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
    void setAccno(int accno){
        this->acc=accno;
    }
    void setName(string name){
        this->name=name;
    }
    void setBal(double bal){
        this->bal=bal;
    }
};
int main(){
    int accno,choice,amount;
    string name;
    double bal;
    Bank b;
    // cout<<"Enter details to create a/c : "<<endl;
    // Bank b(123,"Vaishnav",30000);
    // b.deposit(400);
    // b.getBalance();
    // b.withdrawal(400);
    do{
        cout<<"------------Options-----------"<<endl;
        cout<<"1.Create a/c "<<endl;
        cout<<"2.Withdraw "<<endl;
        cout<<"3.Deposit "<<endl;
        cout<<"4.Exit "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            /* code */
            cout<<"Enter a/c no : "<<endl;
            cin>>accno;
            cout<<"Enter Name : "<<endl;
            cin>>name;
            cout<<"Enter Balance : "<<endl;
            cin>>bal;
            // Bank b(accno,name,bal);
            b.setAccno(accno);
            b.setName(name);
            b.setBal(bal);
            cout<<"A/C created successfully ! "<<endl;
            break;
        case 2:
            cout<<"Enter the amount to withdraw : "<<endl;
            cin>>amount;
            b.withdrawal(amount);
            break;
        case 3:
            cout<<"Enter the amount to deposit : "<<endl;
            cin>>amount;
            b.deposit(amount);
            //depositHelper(amount);
            break;
        case 4:
            break;
        default:
            break;
        }
    }while (choice!=4);
    
}
