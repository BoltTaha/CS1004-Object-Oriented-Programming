#include<iostream>

using namespace std;

class circle{
	int *radius;
	
	public:
		void setRadius(int r)
		{
			*radius  = r;
		}
		
		void display()
		{
			cout<<"Radius is : "<<*radius<<endl;
		}
		
	circle()
	{
		radius = new int;
		}	
};
int main(void)
{
	circle c1;
	
	c1.setRadius(12);
	c1.display();
	
	//object 2//Default copy constrcutor
	
	circle c2=c1;
	
}



