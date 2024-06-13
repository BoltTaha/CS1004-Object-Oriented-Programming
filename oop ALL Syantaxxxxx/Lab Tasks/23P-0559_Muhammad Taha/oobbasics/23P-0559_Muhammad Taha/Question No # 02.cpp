#include<iostream>
using namespace std;

class complex
{
   private:
   	float real;
   	float imaginary;
   	public:
   	complex(){
	   }    //Default constructor
	   
	   
	  void set(float real,float imaginary) 	
	  {
	  	this->real=real;
	  	this->imaginary=imaginary;
	  }
	  
	  void display()
	  {
	  	if(imaginary>=0)
	  	{
	  		cout<<real<<"+"<<imaginary<<endl;
		  }
		  else
		  {
		  	cout<<real<<""<<imaginary<<endl;
		  }
	  }
	  
	  complex sum(complex num)
	  {
	  	complex returnnum;
	  	returnnum.real=real+num.real;
	  	returnnum.imaginary=imaginary+num.imaginary;
	  	
	  	return returnnum;
	  	
	}
   
   
   };
   
   int main(void)
   {
   	complex obj1,obj2,obj3;
   		float real1,real2,imaginary1,imaginary2;
   	cout<<"Enter the real value for first object "<<endl;
   	cin>>real1;
   	cout<<"Enter the imaginary value for First object "<<endl;
   	cin>>imaginary1;
   	
   cout<<"Enter the real value for second object "<<endl;
   	cin>>real2;
   	cout<<"Enter the imaginary value for second object "<<endl;
   	cin>>imaginary2;
   	obj1.set(real1,imaginary1);
   	obj2.set(real2,imaginary2);
   	obj3=obj1.sum(obj2);
   	obj1.display();obj2.display();obj3.display();
   }
