#include<iostream>
#include<string>
using namespace std;

struct employe
{
	string name;
	int hours;
	long int salary;
};
int main(void)
{
   employe a,b;
   
   a.name="Awais";
   a.hours=30;
   a.salary=a.hours*50;
   b.name="saleem";
   b.hours=90;
   b.salary=b.hours*50;   
   	
   cout<<"Employee Name "<<a.name<<endl;
   cout<<"Employee total worked hours "<<a.hours<<endl;
   cout<<"Employee total salary"<<a.salary<<endl;
      cout<<"Employee Name "<<b.name<<endl;
   cout<<"Employee total worked hours "<<b.hours<<endl;
   cout<<"Employee total salary"<<b.salary<<endl;
   
   
   
   
   
   
   
   
   
   
return 0;
}
