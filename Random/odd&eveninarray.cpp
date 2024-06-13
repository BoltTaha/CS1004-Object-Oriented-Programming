#include<iostream>
using namespace std;

int main(void)
{
	// int arr[] = { 4,7,2,8,4,19,22,67,89};
	 int n;
	 cout<<"Enter the size for the array"<<endl;
	 cin>>n;
	 int arr[n];
	 int i;
	 for(i=0;i<n;i++)
	 {
	 	cout<<"Enter the "<<i<<" Element for the array"<<endl;
	 	cin>>arr[i];
	 	cout<<endl;
	 }
	 int size0farray=sizeof(arr)/sizeof(arr[0]);
	 
	 cout<<"The size of the array is "<<size0farray<<endl;
	 
	// int i;
	 int ecount=0,ocount=0;
	 
	 for(i=0;i<size0farray;i++)
	 {
	 	if(arr[i]%2==0)
	 	{
	 		ecount++;
		 }
		 
		 if(arr[i]%2==1)
		 {
		 	ocount++;
		 }
	 }
	   
	int arro[ocount];
	int arre[ecount];
	
	for(i=0;i<size0farray;i++)
	 {
	 	if(arr[i]%2==0)
	 	{
	 		arre[i]=arr[i];
		 }
		 
		 if(arr[i]%2==1)
		 {
		 	arro[i]=arr[i];
		 }
	 }
	 int sizen=ecount+ocount;
	 
	 int arr2[sizen];
	 int count1=0;
	  for(i=0;i<size0farray;i++)
	 {
	 	if(arr[i]%2==0)
	 	{   
	 	    arr2[i]=arre[i];
	 		count1++;
		 }	
	 }
	 
	 for(i=count1;i<size0farray;i++)
	 {
	 	if(arr[i]%2==1)
	 	{   
	 	    arr2[i]=arro[i];
	 	//	count1++;
		 }	
	 }
	 
	 
	 
	 for(int num : arr2)     //New Approaching by using Enhanced For loop
	 {
	 	cout<<num<<",";
		  }	 
	 
	 
	 
	 
	 
	 
	 
	 return 0;
}
