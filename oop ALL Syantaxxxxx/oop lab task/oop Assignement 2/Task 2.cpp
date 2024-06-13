	#include<iostream>
	#include<stdio.h>
	using namespace std;
	class angle{             
		private:       //Private Memebers
		int *degrees;
		float *minutes;
		char *direction;
		public:   
		angle(int degrees , float minutes , char direction)    // user Define Constructor
		{   //Dynamically Allocation of Data memebers
			this->degrees = new int;
			this->minutes = new float;
			this->direction = new char;
			// Assigining Value to data Member
			*this->degrees=degrees;
			*this->minutes=minutes;
			*this->direction=direction;	
		}
		
		angle(const angle & obj)      //Copy Constructor to make a copy of object
		{   
		//Dynamically Allocation of Data memebers for copy Constructor
			this->degrees = new int;
			this->minutes = new float;
			this->direction = new char;
		// Assigining Value to data Member	
			*this->degrees=*obj.degrees;
			*this->minutes=*obj.minutes;
			*this->direction=*obj.direction;
		}
		
		void angleValue(int degrees , float minutes , char direction)  //Setter to set a Value 
		{  //(Method)
		// Assigining Value to data Member with the help of setter function
			*this->degrees=degrees;
			*this->minutes=minutes;
			*this->direction=direction;
		}
		
		void display()   //Display Function to Display a Values(Method)
		
		{       cout<<"The Angle You Entered is "<<endl;
		        cout<<*degrees<<"\xF8";printf("%.1f",*minutes);cout<<"'"<<*direction;
		 if(*degrees>=0 && *degrees<=90)
		{    
		     cout<<" Latitude"<<endl;
			 }
			else
			{
					cout<<" Longitude"<<endl;
			}
		}
		
		~angle()    //Destrcutor to destroy and delete Data memebers of the class
		{
		  delete degrees;
		  delete minutes;
		  delete direction;	
		}		
	};
	
	angle *dynamic_object(int degrees,float minutes,char direction)  //Function to create a Dyinamically Allocated Object
	{
		angle *obj = new angle(degrees,minutes,direction);
	//	cout<<"Object Is Succesfully Dynamically Allocated "<<endl;
		return obj;
	}
	
	int main(void)
	{
		angle*obj = dynamic_object(149,34.8,'W');   //Set a default Value by using User-Defined Constructor
		
		cout<<"The Default Value which is Set By the User is : "<<endl<<endl;
		obj->display();  //Use to display the Default value 
		cout<<endl<<endl;
		
		int deg;float min;char dir;
		//Do while loop to take values again 
		do{ 
		  //Take the values for the Deg,min,Direction
			cout<<"Please Enter the Angle Value again "<<endl;
			cout<<"ENter value for Degree"<<endl;
			cin>>deg;
			cin.ignore();
			if(deg<0 || deg>180)       //when the degree is in valid
			{
				cout<<"Please Enter the Degree Valid (0 - 180)"<<endl;
				cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				
				continue;
			}
			
			cout<<"Enter value for Minute "<<endl;
			cin>>min;
			cin.ignore();
			if(min<0 || min>=60)   //when the minue is invalid
			{
				cout<<"please Enter the Minute Valid (0 - 59.9)"<<endl;
				cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				continue;
			}
			
			cout<<"Enter Character for Direction  eg.(N,E,W,S) "<<endl;
			cin>>dir;
			cin.ignore();
			if(dir!='N' && dir!='E' && dir!='W' && dir!='S' )  //when the direction is invalid
			{
				cout<<"Please Enter the Valid Direction "<<endl;
				cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
				continue;
			}
			if(dir=='N' || dir=='S')
			{
				if(deg>90)
				{
					cout<<"Please Enter a Valid Direction (E,W) for Longitude."<<endl;
					cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
					continue;
					
				}
			}
			else if(dir=='E' || dir=='W')
			{
				if(deg<=90)
				{
					cout<<"Please Enter a Valid Direction (N,S) for Latitude."<<endl;
					cout<<"Press any key to continue"<<endl;
				getchar();
				system("cls");
					continue;
					
				}
			}
			
			obj->angleValue(deg,min,dir);   //Set new value to data member of class by setter fuction
			obj->display();  //use to display the new set values
			break;
			}while(1);
	

		delete obj;  //use to delete the dynamically Allocated Object
		
		return 0;
}
