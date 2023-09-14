#include<iostream>
using namespace std;
#include"Bank.h"
	int Bank::custCount=0;
	int Bank::custId=1;
	Bank::Bank(){
	}
	Bank::Bank(string name,double bal){
		custCount++;
		this->acc=custId++;
		this->name=name;
		this->bal=bal;
	}
    void Bank::withdrawal(int amount){
        if(amount>0&&amount<bal){
            bal=bal-amount;
            cout<<"Withdrawed amount is : "<<amount<<endl;
            cout<<"Current balance is : "<<bal<<endl;
        }else if(amount<0||amount>bal){
            cout<<"Insufficient balance !!! "<<endl;
        }
        return;
    }

    void Bank::deposit(int amount){
        if(amount>0){
            bal=bal+amount;
            cout<<"Successfully amount : "<<amount<<" credited ! "<<endl;
            cout<<"Current balance is : "<<bal<<endl;
        }else if(amount<0){
            cout<<"Please enter amount correctly ! "<<endl;
        }
        return;
    }
    int Bank::getBalance(){
        return bal;
    }
    void Bank::transfer(double amount,Bank &obj){
    	double balance=this->bal;
    	if(balance<amount){
    		cout<<"Insufficient balance"<<endl;	
		}
		else{
			this->bal=this->bal-amount;
			//cout<<this->bal<<endl;
			obj.bal+=amount;
			cout<<"transfer successful";
		}
		
	}
	 int Bank::totalCustomers(){
		return custCount;
	}
	void Bank::display(){
		cout<<"Cust id : "<<acc<<endl;
		cout<<"Name : "<<name<<endl;
	}