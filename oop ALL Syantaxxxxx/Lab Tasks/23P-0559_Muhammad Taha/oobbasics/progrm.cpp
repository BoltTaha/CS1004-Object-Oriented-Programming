#include<iostream>
using namespace std;
void nullit(int* &ptr)
{
	*ptr=NULL;
}
int main()
{
	int x=5;
	int *ptr=&x;
	cout<<"ptr is"<<(ptr ?"non-null\n":"null\n");
	nullit(ptr);
	cout<<"ptr is"<<(ptr ?"non-null\n":"null\n");
	return 0;
}
