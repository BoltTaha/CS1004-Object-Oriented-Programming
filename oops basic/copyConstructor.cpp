#include<iostream>

using namespace std;

class sample{
	int id;
	public:
	void intid(int x)
	{
		id=x;
		}
	void display()
	{
		cout<<"ID ="<<id;
			}		
			
};
int main(void)

{
	sample obj1;
	obj1.intid(10);
	
	obj1.display();
	
	sample obj2=obj1;    //Default copy constructor this type//
	// of method is called shallow copy constructor in which
	//we initilaze the object with the another object means 
	//assigning all the value or data member to the new object
	//thisline no 26 show's that the shallow copying is done here 
	
	 
}
