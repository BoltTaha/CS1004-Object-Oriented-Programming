#include<iostream>

using namespace std;

class abc{
	private:     
		int a;
		int b;
		int c;
		
	public:
	void getData()   //Gitter(which access the private member and manipulate it )
	{
		cout<<"Please enter the value for the a: "<<endl;
		cin>>a;
		
		cout<<"Please enter the value for the b: "<<endl;
		cin>>b;
		
		cout<<"Please enter the value for the c: "<<endl;
		cin>>c;
		
		}	
		
		void printData()   //Setter
		{
			
			cout<<"Value for a is : "<<a<<endl;
			cout<<"Value for b is : "<<b<<endl;
			cout<<"Value for c is : "<<c<<endl;
		}
};

int main(void)
{
	abc class1;
	
	class1.getData();
	class1.printData();
	
	return 0;
}
