#include<iostream>
using namespace std;

class rectangle
{
	private:
		int length, width; 
	public:
		static int count;
		rectangle()
		{
			cout<<"Default constructor is call "<<endl;
			cout<<"Enter the vlaue for length "<<endl;
			cin>>length;
			cout<<"Enter the value for the Width "<<endl;
			cin>>width;
		}
	rectangle(int length,int width)
	{    cout<<"Parametrize contructor is call "<<endl;
		this->length=length;
		this->width=width;
		count++;
		}
		
	int calArea();	
	

		
		
};

int rectangle::count=0;         //Static variable initializaton
int rectangle::calArea()
{
	return width*length;
}
int main(void)
{
	
	rectangle r1(69,1);   //parametrize construtor;
	//rectangle r2;    //default;
	
	cout<<"The are of the r1 is "<<r1.calArea()<<endl;
	cout<<"The Number of Object till now created are "<<r1.count<<endl;
	
	
	
	
	
	return 0;
}
