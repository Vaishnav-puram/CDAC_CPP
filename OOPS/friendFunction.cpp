#include<iostream>
using namespace std;
class EquiTriangle{
    int side;
    double circumference;
    double area;
    
    public:
        void setSide(int a){
            side=a;
            circumference=a*3;
            area=(1.73*a*a)/4;
        }
        //friend functions are not mutual and is not inherited
        friend void access(EquiTriangle);

};
void access(EquiTriangle e){
    cout<<e.circumference<<endl;
    cout<<e.area<<endl;
}
int main(){
    EquiTriangle e;
    e.setSide(3);
    access(e);

}