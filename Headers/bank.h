#pragma once
#include<iostream>
using namespace std;
class Bank{
	int acc;
    string name;
    double bal;
    static int custCount;
    static int custId;
	public:
		Bank();
		Bank(string name,double bal);
		void withdrawal(int amount);
		void deposit(int amount);
		int getBalance();
		void transfer(double amount,Bank &obj);	
		static int totalCustomers();
		void display();	 
};	