#include<iostream>
using namespace std;

class Account
{
  public:
  
  int accno;
  string name;
  //Stattic data memeber
  static float rateofintreset;
  
  Account(int accno,string name)
  {
  	this->accno=accno;
  	this->name=name;
	  }	
	  
	  void display()
	  {
	  	cout<<accno<<" "<<name<<" "<<rateofintreset<<endl;
	  }
};
//end of class

float Account::rateofintreset=6.5;            //initialziation of the stataic data memeber

int main(void)
{   
     Account a1(112,"Imran");
     Account a2(10000000000,"Nawaz");
     a1.display();
     a2.display();
     
	
	
	return 0;
}
