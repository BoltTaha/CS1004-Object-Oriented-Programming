#include<iostream>
using namespace std;

int main(void)
{
  int arr[3][2]={{1,61},{1,45},{6,90}};
  
  int (*ptr)[2] = arr;
  int i;
  int temp=arr[0][0];
  for(i=0;i<2;i++)
  {
  	if(temp<*(*(ptr+0)+i))
  	{
  		temp=*(*(ptr+0)+i);
  		cout<<temp;
	  }
  }
   
}
