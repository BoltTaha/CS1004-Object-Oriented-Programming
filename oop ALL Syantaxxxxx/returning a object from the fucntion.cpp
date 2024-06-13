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
Rectangle create_Rect()
{
	int length, width;
	cout<<"Enter length: "<<endl;
	cin>>length;
	cout<<"Enter width: "<<endl;
	cin>>width;
	Rectangle r(length, width); // calling the parameterized constructor
	return r;
}
int main () {
	Rectangle r=create_Rect();
	cout<<"\n\nLength: "<<r.getLength();
	cout<<"\nWidth: "<<r.getWidth();
   return 0;
}

