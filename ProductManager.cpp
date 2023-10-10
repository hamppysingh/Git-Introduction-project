#include "ProductManager.h"
#include "Product.h"
#include<vector>
#include<iostream>
using namespace std;
ProductManager::ProductManager()
{
	
}

bool ProductManager::Insert(Product *p,vector<Product *> &productArray)
{
	productArray.push_back(p);
	return true;
}

bool ProductManager::Update(int lid,Product *p,vector<Product *> &productArray)
{
	for(int iCnt = 0; iCnt < productArray.size();iCnt++)
	{
		if(productArray[iCnt]->id == lid)
		{
			productArray[iCnt] = p;
			break;
		}
	}
	return true;
}

//bool ProductManager::Delete(int lid,vector<Product *> &productArray)
//{
//	for(int iCnt = 0;iCnt < productArray.size();iCnt++)
//	{
//		if(productArray[iCnt]->id == lid)
//		{
//			productArray.erase(iCnt);
//		}
//	}
//}

void ProductManager::getById(int lid,vector<Product *> &productArray)
{
	for(int iCnt = 0; iCnt < productArray.size();iCnt++)
	{
		if(productArray[iCnt]->id == lid)
		{
			std::cout<<productArray[iCnt]->id<<std::endl;
			std::cout<<productArray[iCnt]->name<<std::endl;
			std::cout<<productArray[iCnt]->description<<std::endl;
			std::cout<<productArray[iCnt]->price<<std::endl;
			break;
		}
	}
}
