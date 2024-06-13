#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    double CGPA;
     Student(string,int,double);
     Student()
     {
	 }
    void showCGPA();
};

void Student::showCGPA()  //function to display the details of student.
{   cout<<"CGPA is : "<<CGPA;
}

class UGStudent : public Student
{
	public:
		string FYPtitle;
		string supervisorname;
	UGStudent(string n ="Ahmed" , int age =20 , double gpa =3.0, string fyptitle = "Managmnet",string supervisorname = "Khalid") :name (n),this->age(age),CGPA(gpa),FYPtitle(fyptitle),supervisorname(supervisorname);
	{
		
	}	
	void showFYPtitle{
	cout<<"FYP TITLE "<<FYPtitle<<endl;
	}	
};

class PGStudent : public Student
{
	public:
		string Thesistitle;
		string supervisorname;
		
	PGStudent(string n ="saleem" , int age =28 , double gpa =4.0, string thesistitle = "Plant",string supervisorname = "awais") :name(n)
	,this->age(age),CGPA(gpa),Thesistitle(thesistitle),supervisorname(supervisorname)
	{
		void Showthesistitle()
		{
			cout<<"Thesis Title "<<Thesistitle<<endl;
		}
	}
		
}int main(void)
{
	UGStudent pehla;
	PGStudent dusra;
	
	return 0;
}
