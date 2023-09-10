#include<iostream>
#include<list>
using namespace std;
class Employee{
    public:
        int id;
        string name;
        int deptId;
        double basicSal;
            double netSal(){
                return 0.0;
            }
            Employee(){
                
            }
            Employee(int id,string name,int deptId,double basicSal){
                this->id=id;
                this->name=name;
                this->deptId=deptId;
                this->basicSal=basicSal;
            }
};
class Manager:public Employee{
    public:
    double prefBonus;
    double net;
    
        void netSal(){
            net=basicSal+prefBonus;
        }
        Manager(){

        }
        Manager(int id,string name,int deptId,double basicSal,double prefBonus){
            this->id=id;
            this->name=name;
            this->deptId=deptId;
            this->basicSal=basicSal;
            this->prefBonus=prefBonus;
        }       
};
class Worker:public Employee{
    public:
    int hrsWorked;
    double hrlyRate;
    double net;
    
        void setHrlyRate(double rate){
            hrlyRate=rate;
        }
        double getHrlyRate(){
            return hrlyRate;
        }
        void netSal(){
            net=basicSal+(hrsWorked*hrlyRate);
        }
        Worker(){

        }
        Worker(int id,string name,int deptId,double basicSal,int hrsWorked){
            this->id=id;
            this->name=name;
            this->deptId=deptId;
            this->basicSal=basicSal;
            this->hrsWorked=hrsWorked;
        }
};
int main(){
    list<Manager> manager;
    list<Worker> worker;
    while (true) {
        cout << "Options:\n";
        cout << "1. Hire Manager\n";
        cout << "2. Hire Worker\n";
        cout << "3. Display information of all employees net salary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        if(choice==4){
            break;
        }
        if(choice==1){
            int id;
            string name;
            int deptId;
            double basicSal;
            double prefBonus;
            double netSal;
            cout<<"Enter id : "<<endl;
            cin>>id;
            cout<<"Enter name : "<<endl;
            cin>>name;
            cout<<"Enter deptId : "<<endl;
            cin>>deptId;
            cout<<"Enter basic salary : "<<endl;
            cin>>basicSal;
            cout<<"Enter preferable bonus : "<<endl;
            cin>>prefBonus;
            Manager m(id,name,deptId,basicSal,prefBonus);
            m.netSal();
            manager.push_back(m);

        }
        if(choice==2){
            int id;
            string name;
            int deptId;
            double basicSal;
            int hrsWorked;
            double hrlyRate;
            double netSal;
            cout<<"Enter id : "<<endl;
            cin>>id;
            cout<<"Enter name : "<<endl;
            cin>>name;
            cout<<"Enter deptId : "<<endl;
            cin>>deptId;
            cout<<"Enter basic salary : "<<endl;
            cin>>basicSal;
            cout<<"Enter no.of hours worked : "<<endl;
            cin>>hrsWorked;
            cout<<"Enter hourly rate : "<<endl;
            cin>>hrlyRate;
            Worker w(id,name,deptId,basicSal,hrsWorked);
            w.setHrlyRate(hrlyRate);
            w.netSal();
            worker.push_back(w);
        }
        if(choice==3){
            cout<<"Managers net salary list : "<<endl;
            for(auto it:manager){
                cout<<it.net<<endl;
            }
            cout<<"Workers net salary list : "<<endl;
            for(auto it:worker){
                cout<<it.net<<endl;
            }
        }
    }
    return 0;
}