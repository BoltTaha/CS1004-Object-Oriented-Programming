#include<iostream>

using namespace std;

class student
{
   private: 
   double x,y;
   
   string name;int id;
   public:
   const int LIMIT=1;
   static int count;	
    
    student(string s , int id)
    {
    	this->name=s;
    	this->id=id;
	}
     
     void enroll()
     {
     	count++;
     	cout<<"The student count limit Exceed "<<endl;
	 }
	
};

student ::  int count = 0;

int main(void)
{   
	student s1("Muhammad",20);
	s1.enroll();
	student s2("Muhammad",20);
	s2.enroll();
	student s3("Muhammad",20);
	s3.enroll();
	student s4("Muhammad",20);
	s4.enroll();
	
	return 0;
}
