#include<iostream>
using namespace std;

class Student
{
 string Name;
 int marks;
 float gpa;
 
 public:
 	Student()     //Default
 	{
 		
	 }
	 
	 Student(string Name,int marks,float gpa)   //Parametrize COnstructor
 	{ 
 		this->Name=Name;
 		this->marks=marks;
 		this->gpa=gpa;       //With using this key board bcz the name are same 
	 }
	 
	 string getName(){return Name;
	 }
	 int getmarks(){return marks;
	}
	float getgpa(){ return gpa;
	}
 	
 	
};
   
   void dsiplay(Student some[])
   {
   	int i;
   	for(i=0;i<3;i++)
   	{
   		cout<<i+1<<"Name : "<<some[i].getName();
   			cout<<i+1<<"Marks : "<<some[i].getmarks();
   				cout<<i+1<<"Gpa : "<<some[i].getgpa();
	   }
   }
  int main(void)
  {
  	Student s[3];
  	
  	
  		string Name[3];int marks[3];float gpa[3];
        int i;
        for(i=0;i<3;i++)
        {
        	cout<<"Enter the Name of the "<<i+1<<"Student : "<<endl;
        	getline(cin,Name[i]);
        	cout<<endl;
        	cout<<"Enter the Marks of the "<<i+1<<"Student : "<<endl;
        	cin>>marks[i];
        	cout<<"Enter the Gpa of "<<i+1<<"Student"<<endl;
        	cin>>gpa[i];
        	
        	s[i]= Student (Name[i],marks[i],gpa[i]);  
			//this work without setter just by using parametrize constructor 
		}
		dsiplay(s);
		  		
	  
  }
