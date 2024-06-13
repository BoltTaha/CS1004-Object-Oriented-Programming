#include<iostream>
//#include<string>
using namespace std;
//simple class program
class Car
{
   private:
   string brand;
   string model;
   int launch;
   
   public:
   
   void input()
   {
   	cout<<"Enter the Brand name of the Car "<<endl;
   	getline(cin,brand);
   	cout<<endl;
   	cout<<"Enter the Model of the Car "<<endl;
   	getline(cin,model);
   	cout<<endl;
   	cout<<"Enter the Launch of the Car "<<endl;
   	cin>>launch;
   	
   }
   
   void output()
   {
   	cout<<"The Brand of the Car is "<<brand<<endl;
   	cout<<"The Model of the Car is "<<model<<endl;
   	cout<<"The Launch of the car is "<<launch<<endl;
   }
   
   	
};

int main(void)
{
	 Car pehli;
	 pehli.input();
	 pehli.output();
	return 0;
}
