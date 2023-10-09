#include<iostream>
using namespace std;

class Point{
    private:
    int x;
    int y;

    private:
    int sum(int a, int b){
        int add = a + b;
        return add;
    }

    public:
    Point(){
        cout<<"-------Default-------"<<endl;
        x=55;
        y=77;
    }

    Point(int x, int y){
        cout<<"-------Parameterised------"<<endl;
        this->x=x;
        this->y=y;
    }

    void displayDetails(){
        cout<<"x = "<<x<<", y = "<<y<<", addition is "<<sum(x,y)<<endl;
    }
    
    void setX(int x){
        this->x=x;
        cout<<"X has updated."<<endl;
    }
    int getX(){
        return x;
    }
    
    void setY(int y){
        this->y=y;
        cout<<"Y has updated."<<endl;
    }
    int getY(){
        return y;
    }
};

int main(){
    Point p1;
    p1.displayDetails();

    Point p2(5, 7);
    p2.displayDetails();

    p1.setX(9);
    cout<<"Updated X : "<<p1.getX()<<endl;

    p1.setY(2);
    cout<<"Updated X : "<<p1.getY()<<endl;

    return 0;
}