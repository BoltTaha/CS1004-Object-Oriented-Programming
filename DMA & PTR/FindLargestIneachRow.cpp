#include<iostream>
using namespace std;
int main(void)
{
	int arr[3][2]={{45,89},{1,78},{0,12}};
	int (*ptr)[2]=arr;
	int i;
	int temp=arr[0][0];
	for(i=0;i<2;i++)
	{
		if(temp<*(*(arr + i) + 0))
		{
			
			cout<<*(*(arr + i) + 0);
		}
	}
	temp=arr[1][0];
	for(i=0;i<2;i++)
	{
		if(*(*(arr + 1) + i)>temp)
		{
			
			cout<<*(*(arr + 1) + i);
		}
	}
	temp=arr[2][0];
	for(i=0;i<2;i++)
	{
		if(*(*(arr + 2) + i)>temp)
		{
			
			cout<<*(*(arr + 2) + i);
		}
	}
}
