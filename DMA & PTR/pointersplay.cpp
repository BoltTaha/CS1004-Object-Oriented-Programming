#include<iostream>
using namespace std;
int main(void)
{
    int a=8;
    int *ptr1;
    ptr1 = &a;
    int **ptr2,***ptr3,****ptr4;

    ptr2=&ptr1;
    ptr3=&ptr2;
    ptr4=&ptr3;

    cout<<" The value of a is  " << a << endl;
    cout<<"The address of  variable a is : " << &a <<endl;
    cout<<"The value  in the pointer ptr1 is : " << ptr1 << endl;
    cout<<"The value after derefrencing  ptr1 is : " << *ptr1 << endl;
    cout<<"The address of ptr1 is : "<<&ptr1<<endl;
    cout<<"The value of ptr2 is : "<<ptr2<<endl;
    cout<<"The value after derefrencing  ptr2 is: "<<**ptr2<<endl;
    cout<<"The address of ptr2 is : "<<&ptr2<<endl;
    cout<<"Value of ptr3 is : "<<ptr3<<endl;
    cout<<"Value after derefrencing ptr 3 ia  :"<< ***ptr3<<endl;
    cout<<"The address of ptr3 is : "<<&ptr3<<endl;
    cout<<"The value of ptr4 is : "<<ptr4;
    cout<<"value after derefrencing  ptr4 is:"<< ****ptr4<<endl;
    cout<<"The address of ptr4 is : "<<&ptr4;


}