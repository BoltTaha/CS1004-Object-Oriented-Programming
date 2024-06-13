#include<stdio.h>
int main(void)
{
	int arr[5]={1,2,3,4,5};
	int (*ptr)[5];
	ptr=&arr;
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("The address of Element %d is : %u\n",i,&arr[i]);
	}
	
	printf("\n");
	printf("The address which is shown by pointer varaible\n");
	for(i=0;i<5;i++)
	{
		printf("The address of Element %d is : %u\n",i,(*ptr+i));
	}
	
	printf("The address of pointer is \n");
	for(i=0;i<5;i++)
	{
		printf("The address of Element %d is : %u\n",i,(ptr+i));
	}
	for(i=0;i<5;i++)
	{
		printf("The value at Element %d is : %u\n",i,*(*ptr+i));
	}
	printf("\n\n");
	printf("Now its 2D array");
	printf("\n");
 int arr2[3][7] = {
        {4, 18, 9, 3, 4, 6, 0},
        {12, 45, 74, 15, 0, 98, 0},
        {84, 87, 75, 67, 81, 85, 79}
    };
	int (*ptr1)[7]=arr2;    //Note: in this case we always declare the size of pointer which is pointing to an array according to the size of arrays's col
	int j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<7;j++)
		{
		 printf("%d ", *(*(ptr1 + i) + j));
		}
	}
	return 0;
}
