#include<iostream>
using namespace std;
class Rectangle
{
   private:
   int length;
   int width;
   public:
   	Rectangle() // default constructor
   {
   		length=0;
   		width=0;
   }
   Rectangle(int l, int w) //parametarized constructor
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
};
int calc_Area(Rectangle r)
{
  	int area=r.getLength()*r.getWidth();
   	return area;
}
int main () {
	int length, width;
	cout<<"Enter length: "<<endl;
	cin>>length;
	cout<<"Enter width: "<<endl;
	cin>>width;
	Rectangle r1(length, width); // calling the parameterized constructor
	cout<<"\n\nLength of R1: "<<r1.getLength();
	cout<<"\nWidth of R1: "<<r1.getWidth();
	cout<<"\nArea of R1: "<<calc_Area(r1);
   	return 0;
}

