#include<iostream>
using namespace std;

struct Employe
{
	int id;
	char name[25];
	int age;
	long salary;
	
};

void Display(const Employe &data2);

int main(void)
{
	struct Employe data={1,"Taha",19,2000000};
	
	Display(data);
	
	return 0;
}

void Display(const Employe &data2)   //Probably the questio has been arise in your mind that why we have Employee in the function argument the answer is on above in main function we pass our stucture as a parameter so we need to catch this in the new functon argument so the type must be same;
{
   cout<<"Employe ID NO : "<<data2.id<<endl;
   cout<<"Employe Name is : "<<data2.name<<endl;
   cout<<"Employe age is : "<<data2.age<<endl;
   cout<<"Employe salary is : "<<data2.salary;	
}

