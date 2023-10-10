//#ifndef PRODUCTMANAGER_H
//#define PRODUCTMANAGER_H
#include<vector>
#include "Product.h"

class ProductManager
{
	public:
	ProductManager();
	
	static bool Insert(Product *P,std::vector<Product *>& productArray);
	static bool Update(int id,Product *,vector<Product *> &productArray );
	static bool Delete(int id,vector<Product *> &productArray);
	static void getById(int id,vector<Product *> &productArray);

};


