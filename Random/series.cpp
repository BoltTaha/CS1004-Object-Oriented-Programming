#include<iostream>
 
 void series(int n);
using namespace std;

int main(void)
{    
   cout<<"100";
   series(100);
}
void series(int n){
	
	n=n+10;
	cout<<n;

	n=n-5;
	cout<<n;
	
	if(n==125)
	{
		//return;
		exit(0);
	}
	
	series(n);
	//cout<<n;
      
     
	
}
