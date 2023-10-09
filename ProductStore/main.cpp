#include <iostream>
#include "Product.h"
#include "ProductManager.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int choice;
	int id,quantity,likes;
	double price;
	char name[100];
	Product p;
	ProductManager pm;
	
	do{
		cout<<"----------------Product Management----------------"<<endl;
		cout<<"1.Insert a Product"<<endl;
		cout<<"2.Display all Products"<<endl;
		cout<<"3.Display particular Product"<<endl;
		cout<<"4.Delete a Prodcut"<<endl;
		cout<<"5.Update a product"<<endl;
		cout<<"6.Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter product id :"<<endl;
				cin>>id;
				p.setId(id);
				cout<<"Enter product name :"<<endl;
				cin.ignore();
				cin.getline(name,sizeof(name));
				p.setName(name);
				cout<<"Enter product quantity:"<<endl;
				cin>>quantity;
				p.setQuantity(quantity);
				cout<<"Enter price of the product:"<<endl;
				cin>>price;
				p.setPrice(price);
				cout<<"Enter the likes:"<<endl;
				cin>>likes;
				p.setLikes(likes);
				pm.insertProd(p);
				break;
			case 2:
				pm.display();
				break;
			case 3:
				cout<<"Enter the id of the product :"<<endl;
				cin>>id;
				pm.find(id);
				break;
			case 4:
				cout<<"Enter the product id you want to delete :"<<endl;
				cin>>id;
				pm.deleteProd(id);
				break;
			case 5:
				cout<<"Enter the product id you want to update :"<<endl;
				cin>>id;
				p.setId(id);
				cout<<"Enter product name :"<<endl;
				cin.ignore();
				cin.getline(name,sizeof(name));
				p.setName(name);
				cout<<"Enter product quantity:"<<endl;
				cin>>quantity;
				p.setQuantity(quantity);
				cout<<"Enter price of the product:"<<endl;
				cin>>price;
				p.setPrice(price);
				cout<<"Enter the likes:"<<endl;
				cin>>likes;
				p.setLikes(likes);
				pm.updateProd(id,p);
				break;
			case 6:
				break;
			default:
				break;
		}
	}while(choice!=6);
	return 0;
}
