#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    double sal;
    double hra;
    double medical=1000;
    double pf;
    double pt=20;
    double netSal;
    double grossSal;
    public:
        void getDetails(){
            hra=0.5*sal;
            pf=0.12*sal;
            grossSal=sal+hra+medical;
            netSal=grossSal-(pt+pf);
            cout<<"Employee Details : "<<endl;
            cout<<"ID : "<<id<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Basic Salary : "<<sal<<endl;
            cout<<"Medical : "<<medical<<endl;
            cout<<"HRA : "<<hra<<endl;
            cout<<"PF : "<<pf<<endl;
            cout<<"PT : "<<pt<<endl;
            cout<<"Gross Salary : "<<grossSal<<endl;
            cout<<"Net Salary : "<<netSal<<endl; 
        }
        Employee(int id,string name,double sal){
            this->id=id;
            this->name=name;
            this->sal=sal;
        }
};
int main(){
    Employee e(239110,"Vaishnav",30000);
    e.getDetails();
}