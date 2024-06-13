// C++ program to demonstrate accessing of data members
#include <iostream>
using namespace std;

#include<iostream>
using namespace std;
class Rectangle
{
   private:
   int length;
   int width;
   	public:
   Rectangle()
   {
   		length=0;
   		width=0;
   }
   
   Rectangle(int l, int w)
   {
   		length=l;
   		width=w;
   }
   
   int getLength()
   {
   		return length;
   }
   
   int getWidth()
   {
   		return width;
   }
   
   void setLength(int l)
   {
   		length=l;
   }
   
   void setWidth(int w)
   {
   		width=w;
   }
   
	int calc_Area()
   {
   		int area=length*width;
   		return area;
   }
};
int main () {
	int length, width;
	cout<<"Enter length: "<<endl;
	cin>>length;
	cout<<"Enter width: "<<endl;
	cin>>width;
	Rectangle r;
	r.setLength(length);
	r.setWidth(width);
	cout<<"\nLength: "<<r.getLength();
	cout<<"\nWidth: "<<r.getWidth();
	cout<<"\nArea: "<<r.calc_Area();
   return 0;
}

