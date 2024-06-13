//Written By : Muhammad Taha
//Question NO : 1
//ALl Opeartion Related to Matrix
#include<iostream>
using namespace std;

   //Function Prototype/Declaration
 void input(int **&array1, int **&array2);
 int** creation_of_matrix(int row,int col);
 void mainscreen(int **array1,int **array2);
 void subtraction(int **array1,int **array2,int **answer,int row,int col);
 void addition(int **array1,int **array2,int **answer,int row,int col);
 void multiplication(int **arr1,int **arr2,int **mul,int row1,int col1,int col2);
 void transpose(int **arr,int **arr1,int row2,int col2);
 void printingTranspose(int **arr,int row1,int col1,int **arr1,int row2,int col2);	
 void printing(int **arr, int row1,int col1,int **arr1,int row2, int col2,int **arr2,int row3,int col3);
 void Dallocation(int **ptr,int row);
//Globally Declare

 int row[2],col[2];

//Main Body
 int main(void)
 {
	
	int **array1;          //Take Value for 2D Array/Matrix...
	                           
	int **array2; 
	
	input(array1,array2);         //Take Value for 2D Array/Matrix...
	
	mainscreen(array1,array2);    
	
   Dallocation(array1,row[0]);     //Dealloacted Dynamic Memory
   
    Dallocation(array2,row[1]);    //Dealloacted Dynamic Memory
	

	return 0;
}

 int** creation_of_matrix(int row,int col)          //Function for DYnamically Allocated 2D Array
{
	
    int ** twoDarray=new int*[row];
    int i,j;
    for(i=0;i<row;i++)
    {
    	twoDarray[i]= new int [col];
	}
	
	return twoDarray;
    
}

  void input(int **&array1, int **&array2) 
{
    cout<<"Enter the number of rows for matrix 1: ";
    cin>>row[0];
    cout<<"Enter the number of columns for matrix 1: ";
    cin>>col[0];
    array1=creation_of_matrix(row[0],col[0]);
    
    cout<<"Enter the elements of matrix 1:"<<endl;
    for (int i=0;i<row[0];i++) {
        for (int j=0;j<col[0];j++)
		 {   
            cin>>array1[i][j];
        }
    }
    
    cout<<"Enter the number of rows for matrix 2: ";
    cin>>row[1];
    cout<<"Enter the number of columns for matrix 2: ";
    cin>>col[1];
    array2=creation_of_matrix(row[1],col[1]);
    
    cout << "Enter the elements of matrix 2:" << endl;
    for (int i = 0; i < row[1]; i++) {
        for (int j = 0; j < col[1]; j++) {   
            cin >> array2[i][j];
        }
    }
}


  void mainscreen(int **array1, int **array2)             //Function to create a menu driven code 
{
    int n;
    int go;
    do
    {
        cout<<"Press 1 : Addition"<<endl;
        cout<<"Press 2 : Subtraction"<<endl;
        cout<<"Press 3 : Multiplication"<<endl;
        cout<<"Press 4 : Transpose"<<endl;
        cout<<"press 5 : Exit"<<endl;
		cin >> n;

    } while (n < 0 || n > 5);

    if (n == 1)
    {
        if (row[0] != row[1] || col[0] != col[1])
        {
            cout << "The Dimensions of the matrices are not correct so addition is not possible " << endl;
            cout << "press 1 : TO go on MAIN screen Again" << endl;
            cout << "Press 2 : To take input ad size again" << endl;
            cout << "press any key To Exit the program" << endl;

            cin>>go;
            if (go==1)
            {
                mainscreen(array1, array2);    //If the Dimensions are wrong so this recursion takes the user again to main page/Menue 
            }
            else if (go==2)
            {

               
                Dallocation(array1,row[0]);    
                Dallocation(array2,row[1]);
                 input(array1,array2);
            }
            else
            {
                cout << "You Entered the wrong Key";
                exit(0);                               
            }
        }
        int **addmatrix=creation_of_matrix(row[0],col[0]);    //Dynamically allocated the array for the sum
        
        addition(array1,array2,addmatrix,row[0],col[0]);     //Passing dynamically allocated array to an function to calculate the sum

        printing(array1,row[0],col[0],array2,row[1],col[1],addmatrix,row[0],col[0]);   //Printing the sum of the array

        Dallocation(addmatrix,row[0]);         //Dynamicallly DE Alloacted 2D Array
        cout<<endl<<endl;
         getchar();
        cout<<"Press any ket to continue..";
        cout<<endl<<endl;
         mainscreen(array1,array2);
    }
    if (n==2)
    {
        if (row[0]!=row[1] || col[0]!=col[1])
        {
            cout<<"The Dimensions of the matrices are not correct so subtraction is not possible "<<endl;
            cout<<"press 1 : TO go on MAin screen Again"<<endl;
            cout<<"Press 2 : To take input ad size again"<<endl;
            cout<<"press any key To Exit the program"<<endl;

            cin>>go;
            if (go==1)
            {
                mainscreen(array1,array2);
            }
            if (go==2)
            {

                 Dallocation(array1,row[0]);
                Dallocation(array2,row[1]);
                 input(array1,array2);
            }
            else
            {
                cout << "You Entered the wrong Key";
                exit(0);
            }
        }
        int **submatrix = creation_of_matrix(row[0], col[0]);    //Dynamically allocated the array for the subtraction

        subtraction(array1, array2, submatrix, row[0], col[0]);    //Passing dynamically allocated array to an function to calculate the subtraction

        printing(array1, row[0], col[0], array2, row[1], col[1], submatrix, row[0], col[0]);   //printing the Subtraction of the matrix
        cout<<endl<<endl;
        Dallocation(submatrix, row[0]);
        getchar();
        cout<<"Press any ket to continue..";
        cout<<endl<<endl;
         mainscreen(array1, array2);
    }
    if (n == 3)
    {
        if (col[0]!=row[1])    //Checking if the dimension of the matrix is valid for the Multiplication if not then again menu driven for entering valid dmension 
        {
            cout << "The Dimensions of the matrices are not correct so multiplication is not possible " << endl;
            cout << "press 1 : TO go on MAin screen Again" << endl;
            cout << "Press 2 : To take input ad size again" << endl;
            cout << "press any key To Exit the program" << endl;

            cin >> go;
            if (go == 1)
            {
                mainscreen(array1, array2);
            }
            if (go == 2)
            {

                Dallocation(array1,row[0]);
                Dallocation(array2,row[1]);
             input(array1,array2);
                 
            }
            else
            {
                cout << "You Entered the wrong Key";
                exit(0);
            }
        }
        int **multiplicationn = creation_of_matrix(row[0], col[1]);  //Dynamically allocated the array for the Multiplication
       multiplication(array1,array2,multiplicationn,row[0],col[0],col[1]);//Passing dynamically allocated array to an function to calculate the multiplication



        printing(array1, row[0], col[0], array2, row[1], col[1], multiplicationn, row[0], col[1]);  //Prinitng the Matrix Multiplication

        Dallocation(multiplicationn, row[0]);    //DeAllocated the multiplication array
        cout<<endl<<endl;
         getchar();
        cout<<"Press any ket to continue..";
        cout<<endl<<endl;
         mainscreen(array1, array2);
    }

    if (n == 4)
    {    //FIrst MAtrix Transpose
        int **transpose1 = creation_of_matrix(col[0], row[0]);          //Dynamically allocated the array for the Multiplication
        transpose(array1, transpose1, row[0], col[0]);      //Passing dynamically allocated array to an function to calculate the transpose
        printingTranspose(array1, row[0], col[0], transpose1, col[0], row[0]);   //printing the Transpose
        Dallocation(transpose1, col[0]);            //DeAllocated the memeory
        cout<<endl<<endl;
        
        //Second Matrix Transpose
        int **transpose2 = creation_of_matrix(col[1], row[1]);   //Dynamically allocated the array for the Multiplication
        transpose(array2, transpose2, row[1], col[1]);          //Passing dynamically allocated array to an function to calculate the transpose
        printingTranspose(array2, row[1], col[1], transpose2, col[1], row[1]);   //printing the Transpose
        Dallocation(transpose2, col[1]);   //DeAllocated the memeory
        
        
        cout<<endl<<endl;       
         getchar();
        cout<<"Press any key to continue..";
        cout<<endl<<endl;
         mainscreen(array1, array2);
    }
    
    if(n==5){            
    	cout<<"Exiting the Program...."<<endl;
    	exit(0);             //For exiting the program
    	
	}
}


//FUnction for addition the matrices
  void addition(int **array1,int **array2,int **answer,int row,int col)

{
        int i,j;
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				answer[i][j]=array1[i][j]+array2[i][j];
			}
			}	
}
//Function for Subtracting the MAtrices
  void subtraction(int **array1,int **array2,int **answer,int row,int col)

{
        int i,j;
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				answer[i][j]=array1[i][j]-array2[i][j];
			}
			}	
}
//FUnction for taking Transpose of the Matrix
 void transpose(int **arr,int **arr1,int row,int col)
{
 int i,j;
 for(i=0;i<row;i++)
 {
 	for(j=0;j<col;j++)
 	{
 		arr1[i][j]=arr[j][i];
	 }
	 }	
}
  //Function for Multiplication
 void multiplication(int **arr1,int **arr2,int **mul,int row1,int col1,int col2)
{
	for (int i=0;i<row1;i++) {
        for (int j=0;j<col2;j++) {
            int sum=0;
            for (int k=0;k<col1;k++) {
                sum+=arr1[i][k]*arr2[k][j];
            }
            mul[i][j]=sum;
        }
    }
}
//FUnction for Prinintg the Matrices
 void printing(int **arr ,int row1,int col1,int **arr1,int row2, int col2,int **arr2,int row3,int col3)
{
	int i,j;
	cout<<"First Matrix"<<endl;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Second Matrix"<<endl;
	
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"The solution is : "<<endl;
	for(i=0;i<row3;i++)
	{
		for(j=0;j<col3;j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
//FUnction for prinitng the transpose
  void printingTranspose(int **arr,int row1,int col1,int **arr1,int row2,int col2)
{   cout<<"The original matrix is : "<<endl;
	int i,j;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The matrix after Transpose is : "<<endl;
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)	
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
//Function to DeAlloacted the memory Dynamically
 void Dallocation(int **ptr,int row)
{
		int i,j;
	for(i=0;i<row;i++)
	{
		delete [] ptr[i];
	}
	delete [] ptr;
	ptr=NULL;
	
}
