#include<iostream>

using namespace std;

int main(void)
{
	float sec;
	float min;
	float days;
	float hours;
	
	cout<<"Enter the seconds";
	cin>>sec;
	
	
	 if(sec>=86400)
	 {
	 	
	 	days=sec/3600;
	 	cout<<"The number of days  is : "<<days;
	
	 	
	 }
	 
	 else if(sec>=3600)
	 {
	 	  hours=sec/60;
	 	  cout<<"The number of hours is : "<<hours;
		
	 }
	
	else if(sec>=60)
	{
		min=sec/60;
		
		cout<<"The number of min is : "<<min;
		
		
	}
}
