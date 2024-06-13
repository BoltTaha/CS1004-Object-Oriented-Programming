#include<iostream>
#include<cmath>

using namespace std;

int main (void)
{
	int x1,x2,y1,y2;
	
	cout<<"Enter the Coordinates for X1 : ";
	cin>>x1;
    
    cout<<"Enter the Coordinates for X2 : ";
	cin>>x2;	
	
	cout<<"Enter the Coordinates for y1 : ";
	cin>>y1;
    
	cout<<"Enter the Coordinates for y2 : ";
	cin>>y2;	
	
	int X , Y ;
	
	X=(x2-x1);
	Y=(y2-y1);
	
	X=X*X;
	Y=Y*Y;
	
	int sum= X+Y;
	
	float result;
	
	result=sqrt(sum);
	
	cout<<"The distance between two points is :"<<result;
	
	
	
	
	return 0;
}
