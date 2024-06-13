#include<iostream>

using namespace std;

class Rectangle
{
	//data memeber
private:

 int length;
 int width;
 
 public:
 	//Default constuctor
 	Rectangle()
 	{
 		length = 0;
 		width = 0;
	 }
	 
	 //Parametrize constructor   
    Rectangle(int l,int w)    //12,13 from the main
	{
		length=l;
		width=w;
	 } 
    //Getters
    int getlength()
    {
    	return length;
	}
	
	
	int getwidth()
    {
    	return width;
	}
   
    //setters
    
    void setlength(int l)
    {
    	length=l;
	}
	
	 void setwidth(int w)
    {
    	width= w;
	}
	
	//area memeber fucntion
//	int calarea()
//	{
//		return length*width;
//	}
	
};
//passing an object to fucntion by value
int calarea(Rectangle r)
{
	return r.getlength()*r.getwidth();
}

int main(void)
{
//   Rectangle r1;
//   //Default constructor is automatically call in this case
//   cout<<"The value of length is : "<<r1.getlength();
//   cout<<"The value of width is : "<<r1.getwidth();

   //parametrize constructor
    //Rectangle r1(12,13);
    
//    r1.setwidth(25);    // calling setter function
    // printing the values using getter function
     cout<<"The value of length is : "<<r1.getlength()<<endl;
  cout<<"The value of width is : "<<r1.getwidth()<<endl 
  ;
  
  //calling area function
    cout<<"The area of the given rectangle is"<<r1.calarea()<<endl;
    Rectangle r1;
    r1.setlength(5);
    r1.setwidth(6);
    cout"The area of the is : "<<calarea(r1);
    
}

