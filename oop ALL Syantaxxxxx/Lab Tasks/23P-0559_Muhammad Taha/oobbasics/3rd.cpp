#include<iostream>
//#include<string>
//prpoper use of getter and setter
using namespace std;

class Car
{
   private:
   string brand;
   string model;
   int launch;
   
   public:
   //Getter function
//    string getbrand()
//    {
//    	return brand;
//	}
//	string getmodel()
//	{
//		return model;
//	}
//	int getlaunch()
//	{
//		return launch;
//	}

//Setter Function
   
    void setbrand(string s)
	{
		brand=s;
		   }   	
	void setmodel(string m)
	{
		model=m;
		
	}
	void setlaunch(int l)
	{
		launch=l;
	}
	
	void display()
	{
			cout<<"The Brand of the Car is "<<brand<<endl;
   	cout<<"The Model of the Car is "<<model<<endl;
   	cout<<"The Launch of the car is "<<launch<<endl;
	}
};


   
   	
int main(void)
{
	 Car pehli;
	 string brand,model;
	 int launch;
	 	cout<<"Enter the Brand name of the Car "<<endl;
   	getline(cin,brand);
   	cout<<endl;
   	cout<<"Enter the Model of the Car "<<endl;
   	getline(cin,model);
   	cout<<endl;
   	cout<<"Enter the Launch of the Car "<<endl;
   	cin>>launch;
   	//This use to set the value to privte data memeber of the class
   	pehli.setbrand(brand);
   	pehli.setmodel(model);
    pehli.setlaunch(launch); 
    pehli.display();
//	//this is use to print the data of the private member of the class
//		cout<<"The Brand of the Car is "<<pehli.getbrand()<<endl;
//   	cout<<"The Model of the Car is "<<pehli.getmodel()<<endl;
//   	cout<<"The Launch of the car is "<<pehli.getlaunch()<<endl;
	  	
	return 0;
}
