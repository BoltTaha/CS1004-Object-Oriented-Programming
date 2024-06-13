#include<iostream>
using namespace std;
int main(void)
{
	int arr[2][3]={{1,2,3},{4,2,9}};
	int (*ptr)[3]=arr;
//	cout<<*(*(ptr+0)+0)<<endl;
//	cout<<&arr[1][0]<<endl;  //Prin tthe addressof the [1][0] element of the array
//	cout<<*(ptr+1)<<endl;    //print the base address of the 2nd 1d Array
//	cout<<&arr[0][2]<<endl ;   //This will print the address of 	[0][3] Element of the address
//	cout<<*(ptr+0)+2<<endl;    //print the addres which is store in the pointer
	
	cout<<endl<<endl;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"The address of the array is "<<&arr[i][j]<<endl;
		}
	}
	
	cout<<endl<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"The value that store in pointer  is "<<*(ptr+i)+j<<endl;
		}
	}

   cout<<&arr[1][3]<<endl;
	cout<<arr[1][3]<<endl;
}
