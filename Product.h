#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
using namespace std;
class Product
{
	public:
			int id;
			std::string name;
			std::string description;
			double price;
	public:
			Product();
		    Product(int id , std::string name , std::string desc,double price);
		   ~Product();

};

#endif
