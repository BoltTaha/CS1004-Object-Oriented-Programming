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
void changeLength(Rectangle *r)
   {
   		r->setLength(5);
   }

int main () {
	Rectangle r;
	int length, width;
	cout<<"\n\nLength: "<<endl;
	cin>>length;
	r.setLength(length);
	cout<<"\n\nWidth: "<<endl;
	cin>>width;
	r.setWidth(width);
	changeLength(&r);
	cout<<"\n\nNew Length: "<<r.getLength();
   return 0;
}

