#include<iostream>
using namespace std;

int main(void)
{
	int days;
	
	cout<<"Enter the number of days";
	cin>>days;
	
	if(days<1)
	{
		exit(0);
	}
	int i;
	int sum=0;
	int start=1;
	int total=0;
	
	for(i=0;i<days;i++)
	{
	     start*=2;
	     total=total+start;
	     
	     cout<<"The person is earning "<< start<< "in a days" <<i+2<<endl;
	}
	
  cout<<"Total is "<<total;
	
	
	return 0;
}
