	#include<iostream>
	using namespace std;
	
	int main(void)
	{
		int arr[5]={1,2,3,4,5},i;
		
		int *ptr=arr;
	
		int (*ptr1)[5]=&arr;
		
		for(i=0;i<5;i++)
		
		cout<<"The value stored at Element "<<i<<" is : "<<arr[i]<<endl;
		
		for(i=0;i<5;i++)
		{
			cout<<"The address of the "<<i<<" Element of the array is "<<&arr[i]<<endl;
		}
		cout<<endl<<endl;
			for(i=0;i<5;i++)
		{
			cout<<"The address of the "<<i<<" Element of the pointer array is "<<&ptr1+i<<endl;
		} 
    //cout<<&ptr1;
		cout<<endl;
		
		cout<<"Printing all values by using POinter which name is ptr"<<endl;   //Note: PTR pointer only points to the first element of the array 
		
		for(i=0;i<5;i++)
		{
			cout<<"The values is printing by using PTR are "<<*(ptr+i)<<endl;
		}
		cout<<endl;
		
		cout<<"Printing all values by using Pointer which name is PTR1"<<endl;  //Note: PTR1 is the pointer which is pointing the element of the whole array
		
		for(i=0;i<5;i++)
		{
			cout<<"The value is printing by using the PTR1 are : "<<*(*ptr1+i)<<endl;
		}
		
		cout<<"Now we have to verify the address of the array by using pointer which name is ptr"<<endl;
		 for(i=0;i<5;i++)
		 {
		 	cout<<"The address of the "<<i<<" Element of the array is "<<(*ptr1+i)<<endl;
		 }
		 
		 for(i=0;i<5;i++)
		 {
		 	if((*ptr1+i)==&arr[i])
		 	{
		 		cout<<"The address of the "<<i<<" Element of the array is same as this is is sotred in array"<<endl;
			 }
		 }
		return 0;
	    
	    
	}
