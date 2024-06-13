#include<iostream>
using namespace std;

int main(void)
{
	int pennies,nickels,dimes,quarters;
	
	cout<<"Enter the numbers of pennies";
	cin>>pennies;
	
	cout<<"Enter the numbers of nickels";
	cin>>nickels;
	
	cout<<"Enter the numbers of dimes";
	cin>>dimes;
	
	cout<<"Enter the numbers of quarters";
	cin>>quarters;
	
	float dollar = (pennies*1)+(nickels*5)+(dimes*10)+(quarters*25);
	
	if(dollar=100)
	{
		cout<<"congratulate you enter the value which is equal to one dollar";
	}
	else{
		cout<<"Your value is excedding from one dollar ";
	}
}
