#include <iostream>
#include "Product.h"
#include "ProductManager.h"
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()  
{
	int id,choice;
	std::string name,desc;
	double price;
	vector<Product *> productArray;
	while(1)
	{
		cout<<"1.insetData 2.updateData 3.deleteData 4.getByid "<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					cout<<"enter id"<<endl;
					cout<<"enter name, description "<<endl;
					cout<<"Enter price "<<endl;
					cin>>id;
					cin>>name;
					cin>>desc;
					cin>>price;
					
					bool status = ProductManager::Insert(new Product(id,name,desc,price),productArray);
					if(status)
					{
						cout<<"Data inserted successfully "<<endl;
					}
					
					break;
				}
			case 2:
			 	{
			 		cout<<"Enter Exising id , Enter name , Enter description ,Enter Price "<<endl;
			 		cin>>id;
			 		cin>>name;
			 		cin>>desc;
			 		cin>>price;
			 		
			 		bool status = ProductManager::Update(id,new Product(id,name,desc,price),productArray);
			 		if(status)
			 		{
			 			cout<<"Data Updated Successfully "<<endl;
					 }
			 		break;
				 }
				 
			case 3 : 
			{
				cout<<"Enter id of item to be deleted "<<endl;
				cin>>id;
				
				bool status = ProductManager::Delete(id,productArray);
				if(status)
				{
					cout<<"Data Deleted Successfully "<<endl;
				}
				break;
			}
			
			case 4 :
				{
					cout<<"Enter id "<<endl;
					cin>>id;
					
					ProductManager::getById(id,productArray);
					break;
				}
				
			default : 
				cout<<"Enter valid choice "<<endl;
				break;
	}
}
	return 0;
}
