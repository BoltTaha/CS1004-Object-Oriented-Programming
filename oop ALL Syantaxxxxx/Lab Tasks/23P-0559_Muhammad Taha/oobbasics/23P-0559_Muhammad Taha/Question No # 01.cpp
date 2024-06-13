#include<iostream>
using namespace std;

class Rectangle
{
	private:
		float length,width;
	public:
		Rectangle(){	}
	void setlength(float length){
		this->length=length;
		
	}	
	void setwidth(float width)
	{
		this->width=width;
	}
	
	float perimeter()
	{
		return (2*length)+(2*width);
	}
	float area(){
		return length*width;
		
	}
	void show()
	{
		cout<<"The Length of the Reactangle is "<<length<<endl;
		cout<<"The width of the Reactangle is "<<width<<endl;
	}
	int sameArea(Rectangle r)
	{
		if (area() == r.area())
		{
			cout<<"The Reactangle have same area"<<endl;
			return 1;
			
		}
		else {
			cout<<"The Reactangle dont have same Area "<<endl;
			return 0;
		}
	}
	
	
	
	
};
int main(void)
{
	Rectangle r1,r2;

	
	r1.setlength(5);r1.setwidth(2.5);
     r2.setlength(5);r2.setwidth(18.9);
     cout<<"First Reactangle "<<endl;
     
     r1.show();
     
     cout<<"Area: "<<r1.area()<<endl;
     cout<<"Perimeter: "<<r1.perimeter()<<endl;
     
     cout<<"Second Reactangle "<<endl;
     
     r2.show();
     cout<<"Area: "<<r2.area()<<endl;
     cout<<"Perimeter: "<<r2.perimeter()<<endl;
     cout<<endl;
	int k = r1.sameArea(r2);
	if(k==0)
	{
		r1.setlength(15);r1.setwidth(6.3);
		cout<<"First Reactangle "<<endl;
     
     r1.show();
     cout<<"Area: "<<r1.area()<<endl;
     cout<<"Perimeter: "<<r1.perimeter()<<endl;
     cout<<endl;
     
     cout<<"Second Reactangle "<<endl;
     
     r2.show();
      cout<<"Area: "<<r2.area()<<endl;
     cout<<"Perimeter: "<<r2.perimeter()<<endl;
     cout<<endl;	
     
    k =  r1.sameArea(r2);
		
	}
	 	
	
		
	
	
	return 0;
}
