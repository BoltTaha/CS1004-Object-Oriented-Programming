#include<iostream>

using namespace std;

class Book
{
   string title, author,genre;
   bool availability_status;

   public:

   Book()
   {
    //cout<<"Default constructor called." << endl;
   }
  //getter and setter to get and set the data
   void setTitle(string t)
   {
    this->title=t;
   }
   void getTitle() const 
   {
    cout << "Title : " << title << endl ;
   }

   void setAuthor(string a)
   {
     author = a;
   }
   void getAuthor() const
   {
      cout << "Author : " << author << endl;
   }
   void setAvailability_status(bool a)
   {
    availability_status=a;
   }

   bool getAvailability_status()const
   {
    return  availability_status;
   }
   void setGenre(string);
   string getGenre()const;
};
void Book::setGenre(string g)
{
   genre = g;
}
string Book::getGenre() const
{
   return genre;
}
class Library
{   int size;
   Book *store;    //Book class
   static int  count; //Static variable to keep track of the number of objects created. & you can say number of total books
   public:
   Library()   //constrcutor
   {  size=1;
     store = new Book [size];   //dynamically allocated memeory
    // Book[0].Book(); //default constructor call for each object of class book in array.
    store[0].setTitle("No name"); // setting the default values to NULL
    store[0].setAuthor("Unknown Author");
    store[0].setGenre("None");
    store[0].setAvailability_status(0);//not available by default
    
   }
   
   ~Library()  //destructor to delte an object
   { 
    delete [] store;
   }//functio to add book
   void addBook(string t,string a,string g,bool s)
   {   
      Book temp;
      temp.setTitle(t);
      temp.setAuthor(a);
      temp.setGenre(g);
      temp.setAvailability_status(s);
    
      Book *newbook = new Book[size+1];  //New object with size plus one
      
      int i;
      for(i=0;i<size;i++)
      {
      	newbook[i]=store[i];    //copy the all data of old object to new object
      	
	  }
	  newbook[size]=temp;  //store the another object or we can say new object at the last index
	  
	  delete[] store;   //delete the old object which is pointed to old array
	  store = newbook;  //point the old array to the new array so that how the the zie of the array is increase
	  size++;

      count++;
   }
   //This member function is use to find the book that is present in the Array
   void Availablebooks(string gen)
   {
    
    for(int i=1;i<size;i++)        
    { if(store[i].getAvailability_status()==1 && store[i].getGenre()==gen)
      {
	    cout<<"Available Books in "<<gen<<" Genre"<<endl;
       break;}
       else
       {
	   
       cout<<"Not available"<<endl;
       break;}
   }
   }

};
int Library::count = 0;  

int main(void)
{   
    Library lib;   //Class libraray object
   
   string title;string author;string genre;bool status;char ch;
    do  //do while loop 
	{        
        cout << "Enter Book Title : ";
        
        getline(cin,title);
        cout << "Enter Book Author Name : ";
        
        getline(cin,author);
        cout << "Enter Book Genre : ";
      
        getline(cin,genre);
        
        cout<<"Is it available? (1 for yes / 0 for no):" ;
        cin>>status;
        
         lib.addBook(title,author,genre,status);
         cout<<"Book Successfully Added"<<endl;
        cout<<"\nDo you want to add more books?(y/n)"<<endl;
        cin>>ch;
        cin.ignore();
     }
     while(ch!='n');
     string gen;
    cout<<"ENter the Genre to display available books: "<<endl;
    getline(cin,gen);
   lib.Availablebooks(gen);      //check is that bood available in the Libraray or not
      
    return 0;
}
