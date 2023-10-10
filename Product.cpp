#include "Product.h"
#include<string>
using namespace std;
Product::Product(int id,string name,string desc,double price)
{
	this->id = id;
	this->name = name;
	this->description = desc;
	this->price = price;
}


