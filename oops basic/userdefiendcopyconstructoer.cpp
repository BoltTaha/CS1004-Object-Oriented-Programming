#include<iostream>

using namespace std;

//user defined copy constructor (deep copy)

class point{
	int x;
	int y;
	
	public:
	point(int x1,int y1)
	{
		x=x1;
		y=y1;
		}
	//user defined copy constructor
	point(const point p) //p is the old object
	{
		x=p.x;
		y=p.y;
			}
	int getx(){  return x;}			
	int gety(){  return y;}				//jab ham new object banyeingy toh ham p sy copy karky new objet main dalengy
			
};

int main(void)
{
	point p1(10,20);
	//object 1 values copy to object
	cout<<"The value for P1 "<<endl;
	cout<<"The value for x is : "<<p1.getx()<<endl;
	cout<<"The value of Y is : "<<p1.getx()<<endl;
	
	point p2=p1;    
	
		cout<<"The value for object p2 which is created with the helpog the copy constructor "<<endl;
	cout<<"The value for x is : "<<p2.getx()<<endl;
	cout<<"The value of Y is : "<<p2.getx()<<endl;  
	
}

