#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int width;
	public:
	Rectangle(int l, int w) // Parameterized constructor
	{
		length=l;
		width=w;
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
	Rectangle r(2, 3); // Parameterized constructor automatically called.
	cout<<"\nLength: "<<r.getLength();
	cout<<"\nWidth: "<<r.getWidth();
}

