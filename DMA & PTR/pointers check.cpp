#include<iostream>
using namespace std;

int main(void)
{
	int a = 45;
	int *ptr1;
	ptr1=&a;
	
	int **ptr2=&ptr1;
	int ***ptr3;
	ptr3=&ptr2;
	
	cout<<"The value of variable a is : "<<a<<endl;
	cout<<"The address of variable a is : "<<&a<<endl;
	cout<<"The value of first pointer  is : "<<*ptr1<<endl;
	cout<<"The address of first pointer is : "<<&ptr1<<endl;
	cout<<"The value of 2nd pointer is : "<<**ptr2<<endl;
	cout<<"The address of 2nd pointer  is : "<<	&ptr2<<endl;
	cout<<"The value of 3rd pointer is : "<<***ptr3<<endl;
	cout<<"The address of 3rd pointer  is : "<<	&ptr3<<endl;
}
