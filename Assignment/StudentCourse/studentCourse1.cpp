#include <iostream>
#include <vector>
#include <cstring>
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
    void display()
    {
        cout << "Course name : " << courseName << endl;
        cout << "Fees : " << fees << endl;
    }
};
class Student
{
    int rollno;
    char name[50];
    string mob;
    vector<Course> courseList;

public:
    Student()
    {
    }
    Student(int rollno, const char *name, string mob)
    {
        this->rollno = rollno;
        strncpy(this->name, name, sizeof(this->name));
        this->name[sizeof(this->name) - 1] = '\0';
        this->mob = mob;
    }
    void setName(const char *name)
    {
        strncpy(this->name, name, sizeof(this->name));

        this->name[sizeof(this->name) - 1] = '\0';
    }
    void setMob(string mob)
    {
        this->mob = mob;
    }
    void setRoll(int roll)
    {
        this->rollno = roll;
    }
    void takeCourse(string courseName, int fees,Student &s)
    {
        Course c(courseName, fees);
        s.courseList.push_back(c);
    }
    int getRoll()
    {
        return rollno;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Rollno : " << rollno << endl;
        cout << "Mobile : " << mob << endl;
        cout << "Courses Enrolled : " << endl;
        for (auto i : courseList)
        {
            /* code */
            i.display();
        }
    }
};
int main()
{
    int rollno, fees;
    string courseName, mob;
    char name[50];
    char c;
    Student stud[50];
    Student s;
    int choice;
    
    int index = 0;
    do
    {
        cout << "1. Student creation " << endl;
        cout << "2. Enroll course " << endl;
        cout << "3. Display " << endl;
        cout << "4. Display all " << endl;
        cout<<"5. Exit "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            /* code */
            cout << "Enter student details : " << endl;
            cout << "Name : \n";
            cin.ignore();
            cin.getline(name, sizeof(name));
            cout << "rollno : \n";
            cin >> rollno;
            cout << "Mobile : \n";
            cin >> mob;
            s.setName(name);
            s.setRoll(rollno);
            s.setMob(mob);
            cout << "Student created ! "<<endl;
            stud[index++] = s;
            break;
        case 2:
            cout << "Enter student rollno : ";
            cin >> rollno;
            for (int i=0;i<index;i++)
            {
                /* code */
                if (stud[i].getRoll() == rollno)
                {
                    cout << "Enter course name : \n";
                    cin >> courseName;
                    cout << "Enter fees : \n";
                    cin >> fees;
                    stud[i].takeCourse(courseName,fees,stud[i]);
                }
                
            }

            break;
        case 3:
            cout << "Enter student rollno : ";
            cin >> rollno;
            for (int i=0;i<index;i++)
            {
                /* code */
                if (stud[i].getRoll() == rollno)
                {
                    stud[i].display();
                }
            }

            break;
        case 4:
            for (int i=0;i<index;i++)
            {
                /* code */
                stud[i].display();
            }

            break;
        case 5:
            break;
        default:
            break;
        }
    } while (choice != 5);
}