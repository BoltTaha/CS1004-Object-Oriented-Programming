#include <iostream>
using namespace std;
class Student
{
	string name;
	float gpa;
	int marks;
	public:
	string getStudentName()
	{
		return name;	
	}
	float getGPA()
	{
		return gpa;	
	}	
	int getMarks()
	{
		return marks;
	}
	void setStudentName(string name)
	{
		this->name=name;
	}
	void setStudentGPA(float gpa)
	{
		this->gpa=gpa;
	}
	void setStudentMarks(int marks)
	{
		this->marks=marks;
	}
};
void displayAllStudents(Student s[])
{
	for(int i=0; i<3; i++)
	{
		cout<<"name: "<<endl;
		cout<<s[i].getStudentName()<<endl;
		cout<<"gpa: "<<endl;
		cout<<s[i].getGPA()<<endl;;
		cout<<"marks: "<<endl;
		cout<<s[i].getMarks()<<endl;
		cout<<"\n\n";
	}
}

int main()
{
	Student s[3];
	int marks;
	string name;
	float gpa;
	for(int i=0; i<3; i++)
	{
		cout<<"Enter name: "<<endl;
		cin>>name;
		s[i].setStudentName(name);	
		cout<<"Enter marks: "<<endl;
		cin>>marks;
		s[i].setStudentMarks(marks);
		cout<<"Enter gpa: "<<endl;
		cin>>gpa;
		s[i].setStudentGPA(gpa);
		cout<<"\n\n";
	}
	displayAllStudents(s);
	
}

