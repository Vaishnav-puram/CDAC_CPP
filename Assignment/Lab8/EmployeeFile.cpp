#include<iostream>
#include<fstream>
using namespace std;
class Employee{
    int empno;
    string name;
    double sal;
    public:
        Employee(){

        }
        Employee(int empno,string name,double sal){
            this->empno=empno;
            this->name=name;
            this->sal=sal;
        }
        void setEmpno(int empno){
            this->empno=empno;
        }
        void setName(string name){
            this->name=name;
        }
        void setSal(double sal){
            this->sal=sal;
        }
        int getEmpno(){
            return empno;
        }
        string getName(){
            return name;
        }
        double getSal(){
            return sal;
        }
        void display(){
            cout<<"---------------------------"<<endl;
                cout<<"Emp no : "<<empno<<endl;
                cout<<"Emp name : "<<name<<endl;
                cout<<"Emp sal : "<<sal<<endl;
        }
};
int main(){
    int choice;
    Employee e;
    ofstream outputfile;
    ifstream inputfile;
    int empno;
    double salary;
    string name;
    do{
        cout<<"--------------Options-------------"<<endl;
        cout<<"1.Create employee"<<endl;
        cout<<"2.Display Employees"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        outputfile.open("employee.dat", ios::app|ios::binary);
            /* code */
            cout<<"Enter emp no. : "<<endl;
            cin>>empno;
            cout<<"Enter emp name : "<<endl;
            cin>>name;
            cout<<"Enter emp sal : "<<endl; 
            cin>>salary;
            e.setEmpno(empno);
            e.setName(name);
            e.setSal(salary);
            
            if (!outputfile)
            {
                /* code */
                cout<<"Error in opening file  !"<<endl;
                break;
            }
            
            outputfile.write((char*)&e,sizeof(e));
            cout<<"Employee details stored !"<<endl;
            outputfile.close();
            break;
        case 2:
        inputfile.open("employee.dat",ios::in|ios::binary);
        
            if (!inputfile.is_open())
            {
                cout<<"Error ! no data found !!!"<<endl;
                break;
            }
            
            cout<<"Student details : "<<endl;

         while (inputfile.read((char*)&e, sizeof(e))&&!inputfile.eof())
         {
            /* code */
            
            e.display();
         }
             inputfile.close();
            break;
        case 3:
            break;
        default:
            break;
        }

    }while(choice!=3);

    
}