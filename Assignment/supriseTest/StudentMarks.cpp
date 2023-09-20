#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Person{
    string fname,lname;
    int id;
    public:
        Person(){

        }
        Person(string fname,string lname,int id){
            this->fname=fname;
            this->lname=lname;
            this->id=id;
        }
        virtual int calScore(){
            return 0;
        }
};
class Student:public Person{
    int marks1,marks2,marks3,id;
    double avg;
    char grade;
    int scores[3];
    string fname,lname;
    public:
        Student(){

        }
        // Student(string fname,string lname,int id,int marks1,int marks2,int marks3):Person(fname,lname,id){
        //     this->marks1=marks1;
        //     this->marks2=marks2;
        //     this->marks3=marks3;
        // }
        void setFname(string fname){
            this->fname=fname;
        }
        void setLname(string lname){
            this->lname=lname;
        }
        void setId(int id){
            this->id=id;
        }
        string getFname(){
            return fname;
        }
        string getLname(){
            return lname;
        }
        int getId(){
            return id;
        }
        void setAvg(double avg){
            this->avg=avg;
        }
        double getAvg(){
            return avg;
        }
        void setGrade(char g){
            this->grade=g;
        }
        char getGrade(){
            return grade;
        }
        int calScore(){
            for (int i = 0; i < 3; i++)
            {
                /* code */
                 cout<<"Enter marks for "<<i+1<<" subjects:\n";
                 cin>>scores[i];

            }
            int sum=0;
            for (int j = 0; j < 3; j++)
            {
                /* code */
                sum+=scores[j];

            }
            return sum;
            
        }
        void display(){
            cout<<"----------------------------------------\n";
            cout<<"Student id : "<<this->getId()<<endl;
            cout<<"Student first name : "<<this->getFname()<<endl;
            cout<<"Student last name : "<<this->getLname()<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout<<"Marks "<<i+1<<" : "<<scores[i]<<endl;
            }
            cout<<"Student avg marks : "<<this->getAvg()<<endl;
            cout<<"Student grade : "<<this->getGrade()<<endl;
        }
        void addRecord(Student &s){
            ofstream outputfile("Student.dat",ios::out|ios::app|ios::binary);
            outputfile.write((char*)&s,sizeof(s));
            cout<<"Student record added successfully."<<endl;
            outputfile.close();
        }
        void readFromRecord(Student &s){
            cout<<"Reading from DAT file....\n";
            ifstream inputfile("Student.dat",ios::in|ios::binary);
            string line;
            while (inputfile.read((char*)&s,sizeof(s)))
            {
                /* code */
                s.display();
            }
            inputfile.close();
            
        }

};
int main(){
    int m1,m2,m3,id;
    string fname,lname;
    char g;
    Student s;
    cout<<"Enter student id :\n";
    cin>>id;
    s.setId(id);
    cout<<"Enter student first name :\n";
    cin>>fname;
    s.setFname(fname);
    cout<<"Enter student last name : \n";
    cin>>lname;
    s.setLname(lname);
    int res=s.calScore();
    int avg=res/3;
    s.setAvg(avg);
    if(avg>75){
        g='A';
    }else if(avg>=55&&avg<75){
        g='B';
    }else{
        g='C';
    }
    s.setGrade(g);
   // s.display();
    s.addRecord(s);
    s.readFromRecord(s);

}