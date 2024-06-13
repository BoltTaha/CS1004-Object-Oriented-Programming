#include<iostream>
#include<string>

using namespace std;

class dayType
{
   private:
   
   string *day;
   string *weekdays;
   
   public:
   	dayType()
   	{
   		day = new string("Sun");        //Dynamically Allocated String in which our Day is Store
   		weekdays = new string [7];    //The size is  beacuse there are 7 Days in the week
   		weekdays[0]="Sun";
   		weekdays[1]="Mon";           
   		weekdays[2]="Tue";     //Dynamically Allocated our weeks Days
   		weekdays[3]="Wed";
   		weekdays[4]="Thu";
   		weekdays[5]="Fri";
   		weekdays[6]="Sat";
   		
	}
	dayType(const dayType & obj)
	{
			day = new string("Sun");        //Dynamically Allocated String in which our Day is Store
   		weekdays = new string [7];    //The size is  beacuse there are 7 Days in the week
   		weekdays[0]="Mon";           
   		weekdays[1]="Tue";     //Dynamically Allocated our weeks Days
   		weekdays[2]="Wed";
   		weekdays[3]="Thu";
   		weekdays[4]="Fri";
   		weekdays[5]="Sat";
   		weekdays[6]="Sun";
   		this->day = obj.day;
   		this->weekdays[0]=obj.weekdays[0];
   		this->weekdays[1]=obj.weekdays[1];
   		this->weekdays[2]=obj.weekdays[2];
   		this->weekdays[3]=obj.weekdays[3];
   		this->weekdays[4]=obj.weekdays[4];
   		this->weekdays[5]=obj.weekdays[5];
   		this->weekdays[6]=obj.weekdays[6];
   		
	}
	
	void setdata(string set)  //Memeber Function is use to set the value ofr the string
	{
		*this->day=set;
	}
	void printday()const   //Memeber FUnction to print the Day
	{
		cout<<"The Current Day is "<<*day<<endl;
	}
	string returnday()       
	{  
// 	int i;
//		for(i=0;i<7;i++)
//		{
//			if(*day == weekdays[i])
//			{
//				break;
//			}
//		
//		}
//			if(i==7){
//				cout<<"The Formate of Day is Invalid..Please write a correct format "<<endl;
//				exit(0);
//			}
		
		return *day;
	}
	string returnnextday()    //member FUnction  to return the Next Day
	{   
		int i;
		for(i=0;i<7;i++)
		{
			if(*day == weekdays[i])
			{
				break;
			}
		
		}
			if(i==7){
				cout<<"The Formate of Day is Invalid..Please writ a correct format "<<endl;
				exit(0);   //use to exit the value
			}
		
		if(i==6)
		{
			i=-1;
		}
		return weekdays[i+1];   //use to return the next day
	}
	
	string returnpreviousday()   //Memeber function is use to Return the Previous Day
	{   
		int i;
		for(i=0;i<7;i++)
		{
			if(*day==weekdays[i])
			{
				break;
			}
		
		}
		if(i==7){
				cout<<"The Formate of Day is Invalid..Please writ a correct format "<<endl;
				exit(0);
			}
		
		if(i==0	)
		{
			i=7;
		}
		return weekdays[i-1];     //use to return the previous day
	}
	string returnsum(int n)   //use to return the the day after adding int in it
	{    
	if(n>6)
	{
		int add;
		add = n % 7 ;  //beacuse 7 is the total days of week take modul to decrease the number by 7
		int check = 7;
		
		int i;
		for(i=0;i<7;i++)
		{
			if(*day==weekdays[i])
			{   check=i;
				break;
			}	
		}
		if(check==7){
				cout<<"The Formate of Day is Invalid..Please writ a correct format "<<endl;
				exit(0);
			}
		
		if(i==6)
		{
			i=-1;
		}
		check=(check+add)%7;    // take module to make check less than 7
		return weekdays[check];  //Return the day by Adding some int in it if the int is greater than 7
		
	}
	else
	{
		int i;
		for(i=0;i<7;i++)
		{
			if(*day==weekdays[i])
			{
				break;
			}
			
		}
		if(i==7){
				cout<<"The Formate of Day is Invalid..Please writ a correct format "<<endl;
				exit(0);
			}
		
		if(i==6)
		{
			i=-1;
		}
		return weekdays[i+n];   // return day if the int is less than 7
	}
	}
	
   	~dayType()    //Destuctor to dynmicaaly De alloacte the memeber of the object
   	{
   		delete day;
   		delete [] weekdays;
	   }
};

dayType *dynamic_object()   //Function to dynamically Allocate the Object and return it
{
	dayType *obj = new dayType;
//	cout<<"Object Is Succesfully Dynamically Allocated "<<endl;
	return obj;
}


void menu_driven(dayType & obj , dayType & obj1)  //function for the menu driven
{   
	int n;
	do{
	
	cout<<"Press 1 to Set the day "<<endl;
	cout<<"Press 2 to Print the Day "<<endl;
	cout<<"Press 3 to Return the Day "<<endl;
	cout<<"Press 4 to Return the Next Day "<<endl;
	cout<<"Press 5 to Return the Previous Day "<<endl;
	cout<<"Press 6 to find the day by Adding  any Number "<<endl;
	//f. Calculate and return the day by adding certain days //to the current day.
	cout<<"Press 7 to Copy the Data of one object to another "<<endl;
	cout<<"Press 8 to Show the Data of the New object which is created By Copy constructor"<<endl;
	cout<<"Press 9 to Exit the Program..."<<endl;
	cin>>n;
}while(n<1 || n>10);
	cin.ignore();
	if(n==1)
	{
	//	cout<<"Set Day is call "<<endl;
		cout<<"Enter the Day that you want to Set (Format eg. Mon)"<<endl;
		string set;
		getline(cin,set);
		obj.setdata(set);
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	
	else if(n==2)
	{
		cout<<"Print Day is call "<<endl;
		obj.printday();
		
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	else if(n==3)
	{
		cout<<"Return day is call "<<endl;
		string retunrndayy = obj.returnday();
		cout<<"The Day after return is "<<retunrndayy<<endl;
		
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	
	else if(n==4)
	{
		cout<<"Return Next Day is call "<<endl;
		string returnnextdayy = obj.returnnextday();
		cout<<"The Next Day is "<<returnnextdayy;
		
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	
	else if(n==5)
	{
		cout<<"Return Previous Day is call "<<endl;
		string returnpreviousdayy = obj.returnpreviousday();
		cout<<"The Previous Day is "<<returnpreviousdayy;
		
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	else if(n==6)
	{
		cout<<"Enter the Number that you want to add in the Day "<<endl;
		int k;
		cin>>k;
		cin.ignore();
		string returnsum = obj.returnsum(k);
		cout<<"The Day After Adding "<<k<<" is "<<returnsum<<endl;
		
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	else if(n==7){
		
		obj1=obj;              //Shallow Copy is Done here
		cout<<"Copy is Succesfully Done "<<endl;
		
			cout<<endl<<endl;
			cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	else if(n==8){
		cout<<"The data which is stored in new object is "<<endl;
		obj1.printday();
		
		cout<<endl<<endl;
		cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
		menu_driven(obj,obj1);
	}
	else{
		cout<<"Exiting the Program..."<<endl;
	}
}

int main(void)
{
	dayType*obj = dynamic_object();   //function call for dynamically alloated objects
	dayType*obj1 = dynamic_object();  //function call for dynamically alloated objects
	
	
	menu_driven(*obj,*obj1);   //function call for menu driven
	//delte dynamically Allocated object
	delete obj;
	delete obj1;
	
	
	return 0;
}
