#include<iostream>
#include<vector>
using namespace std;
class Student{
    string name;
    int age;
    char grade;
    public:
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setGrade(char grade){
            this->grade=grade;
        }
        int getAge(){
            return this->age;
        }
        string getName(){
            return this->name;
        }
        char getGrade(){
            return this->grade;
        }
};
int main(){
    int n;
    int age;
    string name;
    char grade;
    Student s;
    vector<Student>v;
    do{
        cout<<"1.Enter student details "<<endl;
        cout<<"2.Display details "<<endl;
        cout<<"3.Exit"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            cout<<"Enter name of the student"<<endl;
            cin>>name;
            cout<<"Enter age "<<endl;
            cin>>age;
            cout<<"Enter grade "<<endl;
            cin>>grade;
            s.setAge(age);
            s.setGrade(grade);
            s.setName(name);
            v.push_back(s);
            /* code */
            break;
        case 2:
            for (auto i :v)
            {
                /* code */
                cout<<i.getName()<<endl;
                cout<<i.getAge()<<endl;
                cout<<i.getGrade()<<endl;
                cout<<"----------------------\n";
            }
            break;
        case 3:
            break;
        default:
            break;
        }

    }while(n!=3);
}