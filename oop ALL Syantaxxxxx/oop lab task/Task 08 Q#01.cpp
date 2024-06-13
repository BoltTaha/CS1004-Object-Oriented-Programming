#include<iostream>

using namespace std;

class Triangle
{
    private:
	int x[3];
	int *y;
	public:
	
	Triangle(int x[],int y[])
	{    cout<<"COnstructor is called "<<endl;
	    int i;
	    this->y=new int[3];
	    for(i=0;i<3;i++)
	    {
	    	this->x[i]=x[i];
	    	    
	    	
	    	this->y[i]=y[i];	
		}
	}
	
	Triangle(const Triangle & obj)
	{
		y = new int [3];
		int i;
		for(i=0;i<3;i++)
		{
			x[i]=obj.x[i];
			y[i]=obj.y[i];
		}
	}
	
	void display();
	
	~Triangle()
	{   
	    cout<<"The Destructor is Call"<<endl;
	    delete [] y;
	}
				
};

void Triangle::display()
{
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"The Points for the side"<<i+1<<"are  "<<x[i]<<" "<<y[i]<<endl;
	}
}
int main(void)
{
	int x[3];int y[3];

	
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"ENter the points for side"<<i+1<<" X"<<i+1<<" & Y"<<i+1<<":"<<endl;
		cin>>x[i];
		cin>>y[i];
	}
	
		Triangle p1(x,y);
	
	
	Triangle p2=p1;
	cout<<"Points of the Object P1"<<endl<<endl;
	p1.display();
	cout<<"Points of the Object P2"<<endl<<endl;
	p2.display();
	
}
