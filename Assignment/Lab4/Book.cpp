#include<iostream>
#include<cstring>
using namespace std;
class Book{
    string bname,author;
    int id,price;
    public:
        Book(){

        }
        Book(int id,string bname,int price,string author){
            this->id=id;
            this->bname=bname;
            this->price=price;
            this->author=author;
        }
        void setId(int id){
            this->id=id;
        }
        void setBName(string bname){
            this->bname=bname;
        }
        void setPrice(int price){
            this->price=price;
        }
        void setAuthor(string author){
            this->author=author;
        }
        string getAuthor(){
            return author;
        }
        string getBName(){
            return bname;
        }
        int getPrice(){
            return price;
        }
        int getId(){
            return id;
        }
        void display(){
            cout<<"Book Id : "<<this->getId()<<endl;
            cout<<"Book name : "<<this->getBName()<<endl;
            cout<<"Author name : "<<this->getAuthor()<<endl;
            cout<<"Price : "<<this->getPrice()<<endl;
        }
};
int main(){
    int choice;
    string author,bname;
    Book b1;
    int price;
    do{
        cout<<"----------Options-----------"<<endl;
        cout<<"1.Store a new book"<<endl;
        cout<<"2.Get the price of the book"<<endl;
        cout<<"3.Get the author of the book"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;
        int id=1;
        switch (choice)
        {
        case 1:
            cout<<"Enter book details : book name , author , price , :"<<endl;
            cin>>bname>>author>>price;
            b1.setBName(bname);
            b1.setAuthor(author);
            b1.setPrice(price);
            b1.setId(id++);
            b1.display();
            break;
        case 2:
            cout<<b1.getPrice()<<endl;
            break;
        case 3:
            cout<<b1.getAuthor()<<endl;
            break;
        case 4:
            break;
        default:
            break;
        }
    }while (choice!=4);    
     
}