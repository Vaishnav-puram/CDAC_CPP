#include<iostream>
using namespace std;
class Parent1
{
	private:void privateMethodParent(){
		cout<<"----privateMethodParent---"<<endl;
	}
	public:void publicMethodParent(){
		 cout<<"-----publicMethodParent-----"<<endl;
	}
	protected:
		void protectedMethodParent(){
			cout<<"---protectedMethodParent-----"<<endl;
		}
	
		
	
};

class Child1:public Parent1{

public: void Test(){
	cout<<"---Child1 Test Method-----"<<endl;
	//this->protectedMethodParent();
	//protected and public are accsiible only in child class
}	
};

class Child2:private Parent1{
public :void Test(){
	
	cout<<"------Test Method Of Child 2-----"<<endl;
	this->protectedMethodParent();
}	
	
};
class Child3:protected Parent1{
	public :void Test(){
	
	cout<<"------Test Method Of Child 3-----"<<endl;
 this->protectedMethodParent();
}
	
};
int main()
{
	
	Parent1 pObj;
	pObj.publicMethodParent();
	cout<<"--------------------------"<<endl;
	
	Child1 ch1;
	ch1.publicMethodParent();
	ch1.Test();
	
	Child2 ch2;
//	ch2.publicMethodParent();//error
	ch2.Test();
	
	
	Child3  ch3;
	//ch3.publicMethodParent();//error
	return 0;
}






