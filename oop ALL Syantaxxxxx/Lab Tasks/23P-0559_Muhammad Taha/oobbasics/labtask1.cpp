#include<iostream>
#include<string>

using namespace std;

class Employee
{
     int id;
	 string name;
	 string title;
	 int hours;
	 int rate;
	 
	 public:
	 	
	 	Employee(int id,string name,string title,int hours,int rate)
	 	{
	 		this->id=id;
	 		this->name=name;
	 		this->title=title;
	 		this->hours=hours;
	 		this->rate=rate;
		 }
	 	int getid()
	 	{
	 		return id;
		 }
		 
		 string getname(){ return name;
		 }
		 
		 string gettitle(){ return title;
		 }
		 
		 int gethours(){  return hours;
		 }
		 int getrate(){  return rate;
		 }
		 
	int cacl_Salary()
	{    int salary;
	     if(hours<=40)
	     {
	     	salary=hours*rate;
	     	
	     	return salary;
		 }
		  else 
		  {
		  	int overtime;
		  	overtime=hours-40;
		  	overtime=overtime*(2*rate);
		  	salary=(hours*rate)+overtime;
		  	
		  	return salary;
		  }
		 }	 
};
    void display(Employee workers[],int sizee)
    {
    	int i;
    	for(i=0;i<sizee;i++)
    	{
    		cout<<"The id of the "<<i+1<<" Employee is "<<workers[i].getid()<<endl;
      	cout<<"The Name of the "<<i+1<<" EMployee is "<<workers[i].getname()<<endl;
		cout<<"THe job title of the "<<i+1<<"EMployee is "<<workers[i].gettitle()<<endl;
		cout<<"The salary of the "<<i+1<<"EMployee is "<<workers[i].cacl_Salary()<<endl; 	
			  
			  
			  }
      		
	}
int main(void)
{
	int size;int id=1;
	
	cout<<"Enter the NO of EMployee "<<endl;
	cin>>size;
	cin.ignore();
	string name[size],title[size];int hours[size];
	int rate[size];
	Employee emp[size];
	cin.ignore();
	int i;
	for(i=0;i<size;i++)
	{
		   cout<<"Enter the Detail for the "<<id<<" :"<<endl;
        	//cout<<endl;
        	cout<<"Enter the Name of the "<<i+1<<"Employee : "<<endl;
        	getline(cin,name[i]);
        	cin.ignore();
        	cout<<"Enter the Job Title of the "<<i+1<<"Employee : "<<endl;
        	getline(cin,title[i]);
        	cout<<"Enter the NUmber of Hours for week for  "<<i+1<<"EMployee"<<endl;
        	cin>>hours[i];
        	cin.ignore();
        	cout<<"Enter the Rate of the Salary perhours"<<endl;
        	cin>>rate[i];
        	
        	emp[i]= Employee (id,name[i],title[i],hours[i],rate[i]); 
        	id++;
	}
	display(emp,size);
}
