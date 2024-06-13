#include<iostream>
using namespace std;

int main(void)
{
	char arr[4][4]={{'Q','W','E','R'},{'T','Y','U','I'},{'O','P','A','S'},{'D','F','G','H'}};
	
	int i,j;
	//char (*ptr)[4];
	char *ptr;
	ptr=arr;
	for(i=3;i>=0;i--)
	{
		for(j=3;j>=0;j--)
		{
			//cout<<" "<<arr[i][j];
		cout<<" "<<*(*(ptr+i)+j);
		
		}
		cout<<endl;
		
	}
	return 0;
}
