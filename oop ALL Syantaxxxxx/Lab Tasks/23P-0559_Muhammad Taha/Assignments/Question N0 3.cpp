#include<iostream>
using namespace std;

int main(void)
{
	int **Array;int rows,cols,i,j;
	cout<<"Enter the number of Rows that you want to Declare for the 2D Array : ";
	cin>>rows;
	
	int *No_of_Element= new int [rows];         //Dynamically Alloacted memory to an 1DArray
	for(i=0;i<rows;i++)
	{   cout<<"Enter the NO of Elements for the Row "<<i+1<<endl;
		cin>>No_of_Element[i];
	}
	  Array=new int*[rows];               //Dynamically Alloacted memory to an 1DArray
	  int temp;
	for(i=0;i<rows;i++)
    {
    	temp=No_of_Element[i];
    	Array[i]= new int [temp];
	
	}
	
	for(i=0;i<rows;i++)                       //Input the Element foe tha Array
	{    temp=No_of_Element[i];
		for(j=0;j<temp;j++)
		{   cout<<"Enter the "<<j+1<<" Value  for ROW "<<i+1<<endl;
			cin>>Array[i][j];
		}
	}
	
	for(i=0;i<rows;i++)
	{    temp=No_of_Element[i];
		for(j=0;j<temp;j++)
		{   
		cout<<Array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	for(i=0;i<rows;i++)
	{
		delete [] Array[i];
	}
	
	delete [] Array;
	
	delete [] No_of_Element;
	
    return 0;	
}
