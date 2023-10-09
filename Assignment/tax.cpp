#include<iostream>
using namespace std;

int main()
{
  float s;
  cout<<"Enter an Annual Salary : ";
  cin>>s;

  if(s>0 && s<=150000)
    {
      cout<<"No TAX";  
    }

  else if(s>150000 && s<=300000)
    {
        float tax;
        tax=(s*0.20);
        cout<<"you have to pay"<<" "<<tax<<" "<<"as a TAX";  
    }  

  else if( s>300000)
    {
        float tax;
        tax=(s*0.30);
       cout<<"you have to pay"<<" "<<tax<<" "<<"as a TAX";  
    }  
  else 
       cout<<"Invalid Input";  

  return 0;     

}