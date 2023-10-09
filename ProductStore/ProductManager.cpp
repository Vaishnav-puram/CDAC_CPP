#include "ProductManager.h"
#include<vector>
#include <iostream>
using namespace std;

std::vector<Product> vp;
ProductManager::ProductManager()
{
}

void ProductManager::insertProd(Product p){
	
	vp.push_back(p);
	
}
void ProductManager::deleteProd(int id){
	for(int i=0;i<vp.size();i++){
		if(vp[i].getId()==id){
			vp.erase(vp.begin()+i);
				cout<<"Deleted "<<vp[i].getName()<<" successfully"<<endl;
				break;
		}
	}
}
void ProductManager::updateProd(int id,Product p){
	for(int i=0;i<vp.size();i++){
		if(vp[i].getId()==id){
			vp.erase(vp.begin()+i);
			vp.push_back(p);
			break;
		}
	}
}
void ProductManager::find(int id){
	for(int i=0;i<vp.size();i++){
		if(vp[i].getId()==id){
			vp[i].display();
			break;
		}
	}
}
void ProductManager::display(){
		for (int i = 0; i < vp.size(); i++)
	vp[i].display();
}

