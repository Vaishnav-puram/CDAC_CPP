#include <iostream>
#include <cstring>
#include "Product.h"
using namespace std;
Product::Product()
{
}
//Product::Product(int id,const char *name,double price,int quantity,int likes){
//	this->id=id;
//	strncpy(this->name, name, sizeof(this->name));
//	this->price=price;
//	this->quantity=quantity;
//	this->likes=likes;
//}
void Product::setId(int id){
	this->id=id;
}
void Product::setLikes(int likes){
	this->likes=likes;
}
void Product::setName(const char *name)
    {
        strncpy(this->name, name, sizeof(this->name));

        this->name[sizeof(this->name) - 1] = '\0';
    }
void Product::setPrice(double price){
	this->price=price;
}
void Product::setQuantity(int quantity){
	this->quantity=quantity;
}
int Product::getId(){
	return this->id;
}
int Product::getLikes(){
	return this->likes;
}
const char* Product::getName(){
	return this->name;
}
double Product::getPrice(){
	return this->price;
}
int Product::getQuantity(){
	return this->quantity;
}
void Product::display(){
	cout<<this->getId()<<endl;
	cout<<this->getName()<<endl;
	cout<<this->getPrice()<<endl;
	cout<<this->getQuantity()<<endl;
	cout<<this->getLikes()<<endl;
	double t=this->getPrice()*this->getQuantity();
	cout<<"total value of product "<<this->getName()<<" is : "<<t<<endl;
}
		
