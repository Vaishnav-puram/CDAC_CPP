#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Employee {
    int empno;
    char name[100];
    double sal;

public:
    Employee() {}

    // Employee(int empno, const char* name, double sal) {
    //     this->empno = empno;
    //     strncpy(this->name, name, sizeof(this->name));
    //     this->name[sizeof(this->name) - 1] = '\0';
    //     this->sal = sal;
    // }

    void setEmpno(int empno) {
        this->empno = empno;
    }

    void setName(const char* name) {
        strncpy(this->name, name, sizeof(this->name));
        this->name[sizeof(this->name) - 1] = '\0';
    }

    void setSal(double sal) {
        this->sal = sal;
    }

    int getEmpno() {
        return empno;
    }

    const char* getName() {
        return name;
    }

    double getSal() {
        return sal;
    }

    void display() {
        cout << "---------------------------" << endl;
        cout << "Emp no : " << empno << endl;
        cout << "Emp name : " << name << endl;
        cout << "Emp sal : " << sal << endl;
    }
};

int main() {
    int choice;
    Employee e;
    ofstream outputfile;
    ifstream inputfile;
    int empno;
    double salary;
    char name[100];

    do {
        cout << "--------------Options-------------" << endl;
        cout << "1.Create employee" << endl;
        cout << "2.Display Employees" << endl;
        cout << "3.Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                outputfile.open("employee1.dat", ios::app | ios::binary);

                cout << "Enter emp no. : " << endl;
                cin >> empno;
                cout << "Enter emp name : " << endl;
                cin.ignore(); // Clear newline character from previous input
                cin.getline(name, sizeof(name)); // Read name as a line
                cout << "Enter emp sal : " << endl;
                cin >> salary;

                e.setEmpno(empno);
                e.setName(name);
                e.setSal(salary);

                if (!outputfile) {
                    cout << "Error in opening file!" << endl;
                    break;
                }

                outputfile.write((char*)&e, sizeof(e));
                cout << "Employee details stored!" << endl;
                outputfile.close();
                break;

            case 2:
                inputfile.open("employee1.dat", ios::in | ios::binary);

                if (!inputfile.is_open()) {
                    cout << "Error! No data found!!!" << endl;
                    break;
                }

                cout << "Employee details: " << endl;

                while (inputfile.read((char*)&e, sizeof(e)) && !inputfile.eof()) {
                    e.display();
                }

                inputfile.close();
                break;

            case 3:
                break;

            default:
                break;
        }

    } while (choice != 3);

    return 0;
}
