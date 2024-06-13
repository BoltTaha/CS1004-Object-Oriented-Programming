#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int width;
	public:
	Rectangle() // default constructor
	{
		length=0;
		width=0;
	}
	public:
	int getLength()
	{
		return length;
	}
	int getWidth()
	{
		return width;
	}
};
int main()
{
	Rectangle r;  // default constructor implicitly called.
	cout<<"\nLength: "<<r.getLength();
	cout<<"\nWidth: "<<r.getWidth();
}

