#include<iostream>
using namespace std;
int matrix_1row, matrix_1col , matrix_2row , matrix_2col;
int** creation_of_matrix(int row,int col);
int **input(int **array,int row,int col);
int main(void) 
{
     // Declare variables for the number of rows and columns in
    // the first matrix.
    
    cout << "Enter the number of rows in the first matrix: ";
    cin >> matrix_1row;
    cout<< "Enter the number of column in the first matrix ";
    cin>> matrix_1col;
    int **Array1=creation_of_matrix(matrix_1row,matrix_1col);
    cout<<"Enter the Element for the First MATRIX : "<<endl;
     Array1=input(Array1,matrix_1row,matrix_1col);
     
     
     cout << "Enter the number of rows in the Second matrix: ";
    cin >> matrix_2row;
    cout<< "Enter the number of column in the Second matrix ";
    cin>> matrix_2col;
    int **Array2=creation_of_matrix(matrix_2row,matrix_2col);
    cout<<"Enter the Element for the Second MATRIX : "<<endl;
     Array2=input(Array2,matrix_2row,matrix_2col);
     
     
    
     
     //Addition
     
    
    
    
    
    
    
    return 0;
}

int** creation_of_matrix(int row,int col)
{
	
    int ** twoDarray=new int*[row];
    int i,j;
    for(i=0;i<row;i++)
    {
    	twoDarray[i]= new int [col];
	}
	
	return twoDarray;
    
}

int **input(int **array,int row,int col)
{
	
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{   
		     
			cin<<array[i][j]<<" ";
			
		}
		cout<<endl;
	}
	return array;
}


void mainscreen()
{     int n;
    do{
	
	 cout<<"Press 1 : Addition"<<endl;
     cout<<"Press 2 : Subtraction"<<endl;
     cout<<"Press 3 : Multiplication"<<endl;
     cout<"Press 4 : Transpose"<<endl;
    
     cin>>n;
     
    }while(n<0||n>5)
}

