#include<iostream>
using namespace std;
int main(void)
{
	int arr[]={19,2,39,4,57};
	int *ptr=arr;
	int i;
	cout<<"Array Elements are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"The value at the Element "<<i+1<<" is : "<<arr[i]<<endl;
	}
	cout<<endl;
	cout<<"Array Addresses are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"The address of the Element "<<i+1<<" is : "<<&arr[i]<<endl;
	}
	cout<<endl<<"Array Element access with the help of pointer "<<endl;
		for(i=0;i<5;i++)
	{
		cout<<"The value at pointer Element "<<i+1<<" after derefrencing  is : "<<*(ptr+i)<<endl;
	}
	cout<<endl<<"Pointer value are"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"The value at Element "<<i+1<<" are "<<ptr+i<<endl;
	}
	cout<<endl<<endl;
	cout<<*(ptr+1)<<endl;   //output is 2
	cout<<*ptr<<endl;       //output is 19
	ptr=ptr+1;        //Now ouput is always 2 else we done in any change like in assiginning value
	cout<<*ptr<<endl;             //output is 2
	cout<<*ptr+2<<endl;           //ouput is 4
	cout<<*ptr<<endl  ;          //ouput is 2
	*ptr=*ptr+6;             //ouput is 8
	cout<<*ptr;
	cout<<arr[1]<<endl;    //So this 8 store in place of of 2
	ptr=ptr+3;
	cout<<*ptr<<endl;        //Output should be 57
	*ptr=7;
	cout<<*ptr<<endl  ; cout<<arr[4];       //This 57 is replace with the new value of 7
	
}
