//Written By : Muhammad Taha
//Question NO : 2


#include<iostream>
#include<time.h>
#include<stdlib.h>              
//HeaderFile for Random Number Function
using namespace std;

//Function Prototype/Declaration
void main_screen(int *ptr,int &size);																				 
void add_new_number(int *&ptr,int &size);
void delete_number(int *&ptr,int &size);
void print_array(int *ptr,int size);
int sum_array(int *ptr,int *size);
void re_size(int *&ptr, int &size, int Sizee);



int main (void)
{    srand(time(NULL));
     int i,size=5;
     int *ptr;
    
     ptr = new int [size];        //Dynamically Allocated memory with the size of 5
    
     for(i=0;i<size;i++)
     {
     	ptr[i]=rand()%11;
	 }
	 
	 main_screen(ptr,size);
	 
	 delete [] ptr;              //Dynamically DE-Allocated memory 
     
     
     
     
     
	   
	   return 0;
}

void add_new_number(int *&ptr,int &size)         //Function to add New Number
{   //(size)+=1;
   re_size(ptr,size,size+1);        //Function calling to increase the size of the array
//   int sizee=size;
	cout<<"Enter the number that you wan to Add "<<endl;
	int n;	
	cin>>n;
	int i;
    ptr[size-1]=n;
	cout<<n<<" is Successfully Added in the Array"<<endl;
}

void delete_number(int *&ptr,int &size)           //Function to delete the number from the array
{   //int sizee=size;
   
	int n;
	cout<<"Enter the number that you want to delete : "<<endl;
	cin>>n;
	int i;
	int k=-10;
	if(size==0)
	{
		cout<<"There is no element left in the array"<<endl;
		exit(0);
	}
	for(i=0;i<size;i++)
	{
		if(ptr[i]==n)
		{   k=i;
		 break;
			
		}
		
	}
	if(k==-10)
	{
		cout<<"Element Not Found in the Array "<<endl;
		cout<<endl<<endl;
		
		cout<<"Press any key to go on main menu....";
	 	 getchar();
	 	 cout<<endl<<endl;
	 	 main_screen(ptr,size);
		 
		
		
	}
	for(i=k;i<size;i++)
	{
		ptr[i]=ptr[i+1];
	}
	cout<<"The Element is Successfully Deleted"<<endl;
	
	re_size(ptr,size,size-1);      //Function calling to decrease the size of the array
}

void print_array(int *ptr,int size)                //Function to Print the Array
{   int i;
	for(i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
}
int sum_array(int *ptr,int size)                 //Function to add the elements of the array
{   int i;
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+ptr[i];
	}
	return sum;
}

void main_screen(int *ptr,int &size)                 //Function to Show the menu Driven
{   int n;
	do{ 
	
	   cout<<"1. Add new number\n"
           <<"2. Delete a number\n"
           <<"3. Print the array\n"
           <<"4. Print sum of array\n"
           <<"5. Exit Program\n";
             
             cout<<"Enter Your Choice : ";
             cin>>n;
	 
	 }
	 while(n<0 || n>5);
	 char ch;
	 
	 if(n==1)
	 {   
	 	 add_new_number(ptr,size);
	 	 cout<<"Press any key to go on main menu....";
	 	 getchar();
	 	 cout<<endl<<endl;
	 	 main_screen(ptr,size);
	 }
	 else if(n==2)
	 {
	 	delete_number(ptr,size);
	 cout<<"Press any key to go on main menu....";
	 	 getchar();
	 	 cout<<endl<<endl;
	 	 main_screen(ptr,size);
	 }
	 else if(n==3)
	 {
	 	cout<<"The Element of the Array are : "<<endl;
	 	print_array(ptr,size);
	 	cout<<"Press any key to go on main menu....";
	 	 getchar();
	 	 cout<<endl<<endl;
	 	 main_screen(ptr,size);
	 	
	 }
	 
	 else if(n==4)
	 {
	 	
	 int sum=sum_array(ptr,size);
	 cout<<"The Sum of the Element of the array is "<<sum<<endl;
	 cout<<"Press any key to go on main menu....";
	 	 getchar();
	 	 cout<<endl<<endl;
	 	 main_screen(ptr,size);
	 }
	 
	 else
	 {
	 	
	 	exit(0);           //use to Exit the Program
	 }
}
void re_size(int *&ptr, int &size, int Sizee) {
	//From the Slide NO 26 Of Dynamic Allocation
	
	/* Start Resizing the Array */
	// 1. we require a temporary pointer
    int *temp = NULL;
	temp = new int[Sizee];
    int row = (size<Sizee)?size:Sizee;

    // 3. copy over the old values
    for (int i=0;i<row;i++) {
        temp[i]=ptr[i];
    }
   // 4. delete the old array
    delete[] ptr;
   // 5. assign the temporary pointer to the original
    ptr = temp;
    // 6. set the temporary pointer to NULL
    temp = NULL;

    // 7. update the size of the array
    size = Sizee;
    /*Finish Resizing the Array */
}

