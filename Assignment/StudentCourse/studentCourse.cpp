#include <iostream>
#include <vector>
#include<cstring>
using namespace std;
class Course
{
    string courseName;
    int fees;

public:
    Course(string courseName, int fees)
    {
        this->courseName = courseName;
        this->fees = fees;
    }
    void display(){
        cout<<"Course name : "<<courseName<<endl;
        cout<<"Fees : "<<fees<<endl;
    }
};
class Student
{
    int rollno;
    char name[50];
    string mob;
    vector<Course> courseList;

public:
    Student(int rollno, const char* name, string mob)
    {
        this->rollno = rollno;
        strncpy(this->name,name,sizeof(this->name));
        this->name[sizeof(this->name)-1]='\0';
        this->mob = mob;
    }
    void takeCourse(string courseName, int fees)
    {
        Course c(courseName, fees);
        courseList.push_back(c);
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Rollno : "<<rollno<<endl;
        cout<<"Mobile : "<<mob<<endl;
        cout<<"Courses Enrolled : "<<endl;
        for (auto i :courseList)
        {
            /* code */
            i.display();
        }
        
    }
};
int main()
{
    int rollno, fees;
    string courseName,mob;
    char name[50];
    char c;
    cout << "Enter student details : " << endl;
    cout << "Name : \n";
    cin.ignore();
    cin.getline(name,sizeof(name));
    cout << "rollno : \n";
    cin >> rollno;
    cout << "Mobile : \n";
    cin >> mob;
    Student s(rollno, name, mob);
    cout << "Student created ! " ;
    while (true)
    {
        cout << "Want to enroll course ? (Y/N) \n";
        cin.ignore();
        cin >> c;
        if (c == 'Y' || c== 'y')
        {
            cout << "Enter course name : \n";
            cin >> courseName;
            cout << "Enter fees : \n";
            cin >> fees;
            s.takeCourse(courseName, fees);
        }else if(c=='N' || c== 'n'){
            break;
        }
    }
    s.display();
}