#include<iostream>
#include"bank.h"

using namespace std;
int main(){
	Bank a("Vaishnav",20000);
	Bank b("shubham",40000);
	b.deposit(4000);
	cout<<b.getBalance()<<endl;
	b.withdrawal(3000);
	cout<<b.getBalance();
	cout<<"-------------"<<endl;
	a.transfer(200,b);
	cout<<b.getBalance()<<endl;
	cout<<a.getBalance()<<endl;
	b.display();
	a.display();
	Bank c("dummy",5000);
	c.display();
	Bank d("dummy1",54000);
	d.display();
	cout<<"Total customers : "<<a.totalCustomers()<<endl;
}