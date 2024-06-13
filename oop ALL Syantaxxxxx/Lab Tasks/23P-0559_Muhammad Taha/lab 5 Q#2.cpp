#include<iostream>
using namespace std;

class Population
{
  private :
  	 int Totalpopulation;
  	int numofDeaths;
  	int numofBirth;
  	
  	public: 
  	 void setpopulation(int p)
  	 {
  	 	Totalpopulation=p;
	   }
	   
	   void setnumofDeaths(int d)
  	 {
  	 	numofDeaths=d;
	   }
	   
	   void setnumofBirth(int b)
  	 {
  	 	numofBirth=b;
	   }
	   
	   int getTotalpopulation()
	   {
	   	return Totalpopulation;
	   }
	   
	    int getTnumofDeaths()
	   {
	   	return numofDeaths;
	   }
	   
	    int getnumofBirth()
	   {
	   	return numofBirth;
	   }
	   
  	   float numofDeaths1()
  	   {    float deathss = float(numofDeaths)/float(Totalpopulation);
  	   	  return deathss;
		 }
		 
		 float numofBirth1()
		 {
		 	return float(numofBirth)/float(Totalpopulation);
		 }
      
	
};

int main (void)
{
	int b,d;
	int p;
	Population p1;
	cout<<"Enter the total number of Population in this year"<<endl;
	cin>>p;
	cout<<"Enter the total number of Deaths in this year"<<endl;
	cin>>d;
	cout<<"Ener the total Number of Deaths in this year"<<endl;
	cin>>b;
   p1.setnumofBirth(b);
   p1.setnumofDeaths(d);
   p1.setpopulation(p);
   
   cout<<"The Ratio of Total number of deaths this year is  "<<p1.numofDeaths1()<<endl;
   cout<<"The ratio of total number of birth this year is "<<p1.numofBirth1()<<endl;
	
	
	
	
	
	
	
	

	
}
