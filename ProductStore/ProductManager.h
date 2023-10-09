#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include "Product.h"

class ProductManager
{
	public:
		ProductManager();
		void insertProd(Product p);
		void deleteProd(int id);
		void updateProd(int id,Product p);
		void find(int id);
		void display();
};

#endif
