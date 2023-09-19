#include<iostream>
#include<vector>
using namespace std;
class Student{
    string name;
    int age;
    public:
        Student(string name,int age){
            this->name=name;
            this->age=age;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};
class Students{
    vector<Student> students; 
    public:
        Students(){

        } 
        void operator+=(Student &s){
            students.push_back(s);
        }
        void operator--(){
            students.pop_back();
        }
         Students operator--(int) {
            Students temp(*this);
            if (!students.empty()) {
                students.pop_back();
            }
            return temp;
        }
        vector<Student> getStudents(){
            return students;
        }
};
int main(){
    Student s("Vaishnav",23);
    Student s1("Ajay",24);
    Students S;
    S+=s;
    S+=s1;
    vector<Student> res=S.getStudents();
    for(auto i:res){
        cout<<i.getName()<<" "<<i.getAge()<<endl;
    }
    --S;
    cout<<"**********************\n";
    Students S1=S--;
    vector<Student> res1=S.getStudents();
    for(auto i:res1){
        cout<<i.getName()<<" "<<i.getAge()<<endl;
    }


}