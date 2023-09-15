#include<iostream>
#include<typeinfo>
using namespace std;
class Car{
    int modelno;
    string brand;
    double mileage;
    long price;
    public:
        Car(){

        }
        Car(int modelno,string brand,double mileage,long price){
            this->modelno=modelno;
            this->mileage=mileage;
            this->brand=brand;
            this->price=price;
        }
        void display(){
            cout<<"Car details"<<endl;
            cout<<"Brand : "<<brand<<endl;
            cout<<"Model : "<<modelno<<endl;
            cout<<"Price : "<<price<<endl;
            cout<<"Mileage : "<<mileage<<endl;
        }
        virtual void speed(){
            cout<<"Speed is 60 km/hr"<<endl;
        }

};
class Sedan:public Car{
    string luxary;
    public:
        Sedan(int modelno,string brand,double mileage,long price,string luxary):Car(modelno,brand,mileage,price){
            this->luxary=luxary;
        }
        void specialFeatures(){
            cout<<"Sedan Features : "<<endl;
            cout<<"Second row comfort"<<endl;
        }
        void speed(){
            cout<<"Speed of sedan is 120 km/hr"<<endl;
        }

};
class SUV:public Car{
    string offRoad;
    public:
        SUV(int modelno,string brand,double mileage,long price,string offRoad):Car(modelno,brand,mileage,price){
            this->offRoad=offRoad;
        }
        void speacialFeatures(){
            cout<<"SUV Features : "<<endl;
            cout<<"Large Boot Space"<<endl;
            cout<<"OffRoading capability"<<endl;
        }
        void speed(){
            cout<<"Speed of SUV is 220 km/hr"<<endl;
        }
};
void displayCars(Car *c){
    cout<<"\n----------------------------"<<endl;
    c->display();
    c->speed();
    if(typeid(*c)==typeid(Sedan)){
        Sedan* s=dynamic_cast<Sedan*>(c);
        s->specialFeatures();
       // s->speed();
    }else if(typeid(*c)==typeid(SUV)){
        SUV* suv=dynamic_cast<SUV*>(c);
        suv->speacialFeatures();
        //suv->speed();
    }
}
int main(){
    Sedan s(123,"Honda",19,1200000,"second row confort");
    SUV suv(1432,"XUV",15,2000000,"4x4");
    // s.display();
    // s.specialFeatures();
    // Car* c;
    
    // c=&s;
    // c->display();
    // c->speed(); //if there is no speed() in sedan class it goes to the parent and if sedan class has speed() we have to declare the speed() of parent as 'virtual'
    Car *c1[3];
    Car c(101,"car",10,100000);
    c1[0]=&c;
    c1[1]=&s;
    c1[2]=&suv;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        c1[i]->display();
        c1[i]->speed();
        
    }
    displayCars(&s);
    displayCars(&suv);

    
}