#include<iostream>
//#include<string>
//Use of parametrize constructor
using namespace std;

class Car
{
   private:
   string brand;
   string model;
   int launch;
   
   public:
   
   Car(string s,string b,int l)
   {
   	brand=s;
   	model=b;
   	launch=l;
   }

  void output();
   	
};


   void Car::output()
   {
   	cout<<"The Brand of the Car is "<<brand<<endl;
   	cout<<"The Model of the Car is "<<model<<endl;
   	cout<<"The Launch of the car is "<<launch<<endl;
   }
   
   	
int main(void)
{
	 Car 
	 pehli("BMW","M5 Competition",2024);
	 pehli.output();
	return 0;
}
