#include<iostream>
#include<typeinfo>
using namespace std;

class Fruit{
	
    public:	string name;
	        string color;
	        float weight;
	        
	        
	        Fruit(string name,string color,float weight){
	        	
			}
	        
	public: virtual void taste()=0;        
	
};

class Mango:public Fruit{
	
	public: Mango(string name,string color,float weight):Fruit(name,color,weight){
					}
					
			void taste(){
				cout<<"Mango has sweet taste "<<endl;
			}		
			void pulp(){
				cout<<"making pulp..."<<endl;
			}
};

class Apple:public Fruit{
	
	public: Apple(string name,string color,float weight):Fruit(name,color,weight){
					}
					
			void taste(){
				cout<<"Apple has sweet taste "<<endl;
			}
					
			void jam(){
				cout<<"making jam..."<<endl;
			}
};

class Orange:public Fruit{
	
	public: Orange(string name,string color,float weight):Fruit(name,color,weight){
					}
					
			void taste(){
				cout<<"Orange has sweet taste "<<endl;
			}		
			void juice(){
				cout<<"making juice..."<<endl;
			}
};

int main(){
	
	Mango m("Mango","Yellow",1);
	Apple a("Apple","Red",1.75);
	Orange o("Orange","Orange",2);
	
	Fruit *p[3];
	p[0]=&m;
	p[1]=&a;
	p[2]=&o;
	
	for(int i=0;i<3;i++){
		p[i]->taste();
		
		if( typeid(*p[i]) == typeid(Mango) )
		   dynamic_cast<Mango*>(p[i])->pulp();
		   
		else if( typeid(*p[i]) == typeid(Apple) )
		   dynamic_cast<Apple*>(p[i])->jam();  
		   
		else if(typeid(*p[i])==typeid(Orange) )   
		    dynamic_cast<Orange*>(p[i])->juice(); 
	}
	
	
	return 0;
}
