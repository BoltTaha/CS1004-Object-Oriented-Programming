#include<iostream>
#include<string>
using namespace std;

class dob{
   private:
   int date,year,month;
    public: 
    dob(int d,int m,int y) {date=d; month =m ; year =y;}
     //void display() const {cout << "Date :"<< date << "/" << month << "/" << year << endl;}
     int getMonth() const { return month; }
};

class Contact
{
   private:
   	dob person_dob;
   	 string person_name;
    string email;
    long number;
    public:
    Contact(int d,int m,int y,string name,string email,long num):person_dob(d,m,y),person_name(name),email(email),number(num)
    {}	
   	string getName() const { return person_name; }
};
class contactbook
{   private:
    int size;
     Contact* book1; // Dynamic array of contacts
    public:
  contactbook(int size) : size(size) {
        book1 = new Contact[size];
    }
    ~contactbook() {
        delete[] book1;
    }
   void adddetail(int index, int d, int m, int y, string name, string email, long num) {
        book1[index] = Contact(d, m, y, name, email, num);
    }
   void printname(int month)
   {
       for (int i = 0; i < size; i++)
       {
        if(month==book1[i].getMonth()) 
        {
            cout<<"Name:"<<book1[i].getName()<<endl;
        }
        else {
            cout<<"Name not Found"<<endl;
        }
       }
       
   } 
};

int main(void)
{
    int date,month,year;
    int size;
    string email;
    long number;
    string person_name;
   
    
    
cout<<"Enter the Size of Array"<<endl;

cin>>size;
contactbook one(size);
cin.ignore();
for(int i = 0; i<size; i++)
{
cout<<"Enter Person name: "<<endl;
getline(cin,person_name);

cout<<"Enter the person Email "<<endl;
getline(cin,email);

cout<<"Enter the Phone Number"<<endl;
cin>>number;

cout<<"Enter the Date  in DD/MM/YY format"<<endl;
cin >> date >> month >> year;

one.adddetail(i, date, month, year, person_name, email, number);
}
cout<<endl;
cout<<"Enter the Month  you want to search for : ";
int m;
cin>>m;
one.printname(m);
return 0;
}
