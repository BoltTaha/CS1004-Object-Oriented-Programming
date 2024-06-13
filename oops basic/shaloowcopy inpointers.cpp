//Program to check the concept of the shallow copy in terms of pointers
#include<iostream>
using namespace std;

class circle
{
       int *radius;
	   public:
	   void setradius(int r)
	   {
	   	*radius =r;
		   }	
		 void display()
		 {
		 	cout<<"Radius is : "<<*radius<<endl;
		   }
		//get
		circle()
		{    //you have to be clear about dynamic array + simple dym=namic
			radius = new int ;
		}
//		int getradius()
//		{
//			return radius;
//			 }
			      
};
int main(void)
{
	circle c1;
	c1.setradius(4);
	cout<<"R1 Radius "<<endl;
	c1.display();
	
	circle c2;
	c2=c1;
	cout<<"R2 radius is : "<<endl;  //Shalow copy
	
	c2.display();
	
	//pointer probelm in shallow copy
	
	c2.setradius(5);
	
	cout<<"R1 Radius "<<endl;
	c1.display();
	
		cout<<"R2 radius is : "<<endl;  //shallow copy
	
	c2.display();
	
}
