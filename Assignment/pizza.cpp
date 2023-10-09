#include<iostream>
using namespace std;

int main()
{
    int qty=0;
    int n=0;
 int a,b,c;  
 cout<<"Menu of the Pizza \n" ;
 cout<<"1.cheese Pizza=100 , 2.veggie Pizza=150 , 3.both Pizza =225 4.Exit \n"  ; 
 
 cin>>a;
 n=a;
 cout<<"Enter the quantity of Pizza \n";
 cin>>qty;
 
 
 if(a==1)
 {
   int total;
   total=100*qty;
   cout<<"You Ordered cheese Pizza\n"; 
   cout<<"Total Amount = "<<total;
 }

 else if(a==2)
 {
   int total;
   total=150*qty;
   cout<<"You Ordered veggie Pizza\n"; 
   cout<<"Total Amount = "<<total;
 }

 else 
 {
   int total;
   total=250*qty;
   cout<<"You Ordered cheese pizza and veggie Pizza \n"; 
   cout<<"Total Amount = "<<total;
 }


}