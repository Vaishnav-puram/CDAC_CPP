#ifndef PRODUCT_H
#define PRODUCT_H
#include<cstring>
class Product
{
	private :
		int id;
		char name[100];
		double price;
		int quantity;
		int likes;
	public:
		Product();
		void setId(int num);
		void setName(const char *name);
		void setPrice(double price);
		void setQuantity(int quantity);
		void setLikes(int likes);
		int getId();
		const char* getName();
		double getPrice();
		int getQuantity();
		int getLikes();
		void display();
	protected:
};

#endif
