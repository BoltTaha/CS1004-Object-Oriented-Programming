#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int width;
	public:
	Rectangle() // Default constructor
	{
		length=0;
		width=0;
	}
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
	Rectangle r; // Non-Parameterized constructor automatically called.
	cout<<"\nR1 Length: "<<r.getLength();
	cout<<"\nR1 Width: "<<r.getWidth();
	Rectangle r2(2, 3); // Parameterized constructor called.
	cout<<"\n\mR2 Length: "<<r2.getLength();
	cout<<"\nR2 Width: "<<r2.getWidth();
}

