#include<iostream>
#include<list>
#include<typeinfo>
using namespace std;
class Employee{
    protected:
        int id;
        string name;
        int deptId;
        double basicSal;
        public:
            virtual double netSal(){
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
    protected:
    double prefBonus;
    double net;
    public:
    
        double netSal(){
            return net=basicSal+prefBonus;
        }
        Manager(){

        }
        Manager(int id,string name,int deptId,double basicSal,double prefBonus):Employee(id,name,deptId,basicSal){
            this->prefBonus=prefBonus;
        }       
};
class Worker:public Employee{
    protected:
    int hrsWorked;
    double hrlyRate;
    double net;
    public:
        void setHrlyRate(double rate){
            hrlyRate=rate;
        }
        double getHrlyRate(){
            return hrlyRate;
        }
        double netSal(){
            return basicSal+(hrsWorked*hrlyRate);
        }
        Worker(){

        }
        Worker(int id,string name,int deptId,double basicSal,int hrsWorked):Employee(id,name,deptId,basicSal){
            this->hrsWorked=hrsWorked;
        }
};
int main(){
    Employee* bptr[50];
    int index=0;
    // list<Manager> manager;
    // list<Worker> worker;
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
            // Manager m(id,name,deptId,basicSal,prefBonus);
            // m.netSal();
            // bptr[index++]=&m;
            Manager* m=new Manager(id,name,deptId,basicSal,prefBonus);
            m->netSal();
            bptr[index++]=m;

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
            // Worker w(id,name,deptId,basicSal,hrsWorked);
            // w.setHrlyRate(hrlyRate);
            // w.netSal();
            // bptr[index++]=&w;
            Worker* w=new Worker(id,name,deptId,basicSal,hrsWorked);
            w->setHrlyRate(hrlyRate);
            w->netSal();
            bptr[index++]=w;
        }
        if(choice==3){
            cout<<"Managers net salary list : "<<endl;
            for(int i=0;i<index;i++){
                if(typeid(*bptr[i])==typeid(Manager)){
                    Manager* m1=dynamic_cast<Manager*>(bptr[i]); //down casting
                double sal=m1->netSal();
                cout<<sal<<endl;
                }
            }
            cout<<"Workers net salary list : "<<endl;
            for(int i=0;i<index;i++){
                if(typeid(*bptr[i])==typeid(Worker)){
                    Worker* w1=dynamic_cast<Worker*>(bptr[i]); //down casting
                double sal=w1->netSal();
                cout<<sal<<endl;
                }
            }
        }
    }
    for (int i = 0; i < index; i++) {
        delete bptr[i];
    }
    return 0;
}