#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
	const int ITEMS = 7;
	string meals[ITEMS] = {"Sausage Rs.220", "Cheese & Mushroom omelete Rs.50", "Paratha Rs.25","French toast Rs.45",
	 "Coffee Rs.120" , "Tea Rs.40" , "Pancake with nutella Rs.395"};
	int prices[ITEMS] = {220,50,25,45,120,40,395};
	int orders[ITEMS] = {0};
	int orderNum;
	int n;	
	int totalCost = 0;
	
	cout<<endl<<endl<<"\t\t\tMenu"<<endl<<endl;
	for(int i = 0; i < ITEMS; i++)
	{
		if(i%2 == 0) 
			cout<<endl;
		cout<<i+1<<" - "<<setw(15)<<meals[i]<<"\t";
	}
	
	cout<<endl<<endl<<" How many items you would like to order? "<< endl;
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter item "<<i+1<<" : ";
		cin>>orderNum;
		totalCost += prices[orderNum-1];
		orders[orderNum -1] = 1;
	}
	
	cout<<endl<<"Your total bill is "<<endl<<endl;
	
	cout<<setw(15)<<"Meal item"<<"  "<<setw(5)<<"Price"<<endl;
	cout<<"-----------------------"<<endl;
	for(int i = 0; i < ITEMS; i++)
	{
		if(orders[i] == 1)
			cout<<setw(15)<<meals[i]<<"   "<<setw(3)<<prices[i]<<endl;
	}
	cout<<endl<<"\t\t"<<"Total : "<<totalCost<<endl;
	
	return 0;
}
