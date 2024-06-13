#include<iostream>
#include<string>
using namespace std;

struct student{
	//int id;
	string name;
	int marks[3];
};
void StoreStudentData(student &store);
void Display_data(student &dis);
float calAvgMarks(student &cal);
void ChangeMarks(student &cmarks);
void displayMainscreen(student &s1,student &s2);
int main(void)
{
  struct student s1,s2;
  StoreStudentData(s1);
  cout<<endl<<endl;
   StoreStudentData(s2);
   
   displayMainscreen(s1,s2);
   
   return 0;  
}

void StoreStudentData(student &store)
{
  cout<<"Enter Student Name : "<<endl;
  getline(cin,store.name);
  int i;
  for(i=0;i<3;i++)
  {
  	cout<<"Enter student marks for course : "<<i+1<<endl;
  	cin>>store.marks[i];
	  }	
	  
	  cin.ignore();
}

void Display_data(student &dis)
{
	cout<<"Student Name :  "<<dis.name;
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Student Marks for course : "<<i+1<<endl;
		cout<<dis.marks[i];
	}
}

float calAvgMarks(student &cal)
{
	int i;
	float avg;
	float sum;
	int count=0;
	for(i=0;i<3;i++)
	{
		sum+=cal.marks[i];
		count++;
	}
	avg=sum/count;
	return avg;
}

void ChangeMarks(student &cmarks){
	int courseid;
	
	int i,updatedMarks;
	
	do{
		cout<<"Enter the course no to change marks (1-3) : "<<endl;
	cin>>courseid;
	
	}
	while(courseid<=0 || courseid>=4);
	courseid--;
	for(i=0;i<3;i++)
	{
		if(courseid==i)
		{
			cout<<"Enter the Updated Marks "<<endl;
			cin>>updatedMarks;
			updatedMarks=cmarks.marks[i];
		}
		
	}
	
	
}
void displayMainscreen(student &s1,student &s2)
{
	cout<<"Menu:"<<endl;
   int n;int id;
  
   do{
   	cout<<"1. Display Student Data"<<endl<<"2. Calculate Average marks"<<endl<<"3. Change Marks"<<endl;
   	
   	 cin>>n;
   }
   while(n<=0 || n>=4);
   
  if(n=1)
  {
  	Display_data(s1);
  	cout<<endl<<endl;
  	Display_data(s2);
  	
  	cout<<endl<<endl;
  	
  	  displayMainscreen(s1,s2);
  	
  }
  if(n=2)
  {
  	cout<<"Enter the student id no : "<<endl;
  	
  	
  	do{
  			cout<<"Enter the student id no : "<<endl;
  			cin>>id;
	  }
	  while(id<=0 || id>=3);
	  
	  if(id==1)
	  {
	  	cout<<"Average Marks : "<<calAvgMarks(s1)<<endl;
	  }
	  if(id==2)
	  {
	  	cout<<"Average Marks : "<<calAvgMarks(s2)<<endl;
	  }
	  cout<<endl;
	    displayMainscreen(s1,s2);
  }
  
  if(n=3)
  {
  	cout<<"Enter the student id no : "<<endl;
  	//int id;
  	
  	do{
  			cout<<"Enter the student id no : "<<endl;
  			cin>>id;
	  }
	  while(id<=0 || id>=3);
	  
	  if(id==1)
	  {
	  	ChangeMarks(s1);
	  }
	  if(id==2)
	  {
	  	ChangeMarks(s2);
	  }
	  cout<<endl;
	    displayMainscreen(s1,s2);
  }
   
}
