#include<iostream>
#include<string>
using namespace std;

class FoodItem
{   friend double calculateCalories(FoodItem f);
  	string name;
  	double cal;
  	double gram_of_fat;
  	double gram_of_carbs;
	double gram_of_protien;  
	public:
	FoodItem()   //default constuctor
	{
     name="";
	 cal=0;
	 gram_of_fat=0;
	 gram_of_carbs=0;
	 gram_of_protien=0;
	 cout<<"Default constructor"<<endl;
	}
	FoodItem(string n )  //parametrize constructor
	{
		this->name=n;
		cout<<"Parametrized constrcutor is called"<<endl;
		cal=0;
	 gram_of_fat=0;
	 gram_of_carbs=0;
	 gram_of_protien=0;
		
	}
	FoodItem(string n , double c  ):name(n),cal(c){ //parametrize constructor
		gram_of_fat=0;
	 gram_of_carbs=0;
	 gram_of_protien=0;
	}
	FoodItem(string n ,double c ,double f ,double carbs ,double p) //parametrize constructor
	{
		this->name=n;
		this->gram_of_fat=f;
		this->cal=c;
		this->gram_of_carbs=carbs;
		this->gram_of_protien=p;
		}
		//geteer and setter to set and get the values
	void setname(string s)
	{
		this->name=s;
	}
	string getname()const{ return name;}
	
	void setcal(double c)
	{
		this->cal=c;
	}
	
	double getcal()const{ return cal;}
	
	void setfat(double f)
	{
		this->gram_of_fat=f;
		
	}
	double getfat()const{ return gram_of_fat;}
	
	void setcarbs(double c)
	{
		this->gram_of_carbs=c;
	}
	double getcarbs()const{ return gram_of_carbs;}
	
	void setprotein(double p)
	{
		this->gram_of_protien=p;
	}
	double getprotein()const { return gram_of_protien;}
					
};
//memeber function to calculate the value
double calculateCalories(FoodItem f)
{    
	f.cal=(4*f.gram_of_carbs);
	f.cal+=(4*f.gram_of_protien);
    f.cal+=(f.gram_of_fat*9);  //Also calculate the Calories of Fat
	return f.cal;
}

int main(void)
{
	 FoodItem item;   //fooditem class object and assign the values to the object data member by proper inout handling
	 do{
	 string n;double p,c,f;
		cout<<"Enter name of Food item (or type 'exit' to quit): ";
		getline(cin,n);
		if(n=="exit")
		{
			exit(0);
		}
		item.setname(n);

	    cout<<"Enter Protiens (in grams):  ";
        cin>>p;
		if(cin.fail())  //input handling
		{
		cout<<"Please Input the Valid INPUT"<<endl;
		cout<<"Input the All Values AGian"<<endl;
		cin.clear();
		continue;
		}
		if(p<0) //input handling
		{
			cout<<"Protein cannot be Negative "<<endl;
			cout<<"Input the All Values AGian"<<endl;
		continue;
		}
        item.setprotein(p);

		cout<<"Enter carbs (in grams):  ";
		cin>>c;
		if(cin.fail())//input handling
		{
		cout<<"Please Input the Valid INPUT"<<endl;
		cout<<"Input the All Values AGian"<<endl;
		cin.clear();
		continue;
		}
		if(c<0)//input handling
		{
			cout<<"CarboHydrates cannot be Negative "<<endl;
			cout<<"Input the All Values AGian"<<endl;
		continue;
		}

		item.setcarbs(c);

		cout<<"Enter Fat (in grams): ";
		cin>>f;

		if(cin.fail())//input handling
		{
		cout<<"Please Input the Valid INPUT"<<endl;
		cout<<"Input the All Values AGian"<<endl;
		cin.clear();
		continue;
		}
		if(f<0)//input handling
		{
			cout<<"FAT cannot be Negative "<<endl;
			cout<<"Input the All Values AGian"<<endl;

		continue;
		}

		item.setfat(f);
        //display
		cout<<endl;
		cout<<"Detailed Item:"<<endl;
		cout<<"Name: "<<item.getname()<<endl;
		cout<<"Proteins: "<<item.getprotein()<<endl;
		cout<<"Carbs: "<<item.getcarbs()<<endl;
		cout<<"Fats: "<<item.getfat()<<endl;

		cout<<"Calories: "<<calculateCalories(item)<<endl;
      cin.ignore();
      }while(1);
	
	 return 0;
}
