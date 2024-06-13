#include<iostream>

using namespace std;
int *pointer(int n);
int main(void)
{
//	int r,c;
//	cout << "Enter the number of rows in the first matrix: ";
//	cin>>r;
//	cout<< "Enter the number of column in the first matrix ";
//	cin>>c;
	   int *ptr=pointer(5);
	   
	   int i;
	   for(i=0;i<5;i++)
	   {
	   	cin>>ptr[i];
	   }
	   for(i=0;i<5;i++)
	   {
	   	cout<<ptr[i];
	   }
	   
	   delete [] ptr;
	   

	return 0;
}

int *pointer(int n)
{
	int *ptr=new int [n];
	int i;
	for(i=0;i<5;i++)
	{
		ptr[i]=0;
	}
	return ptr;
}
