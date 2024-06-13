#include<iostream>
using namespace std;

struct num
{
   int x;
   int y;	
};

int main(void)
{
	struct num one,*two;
	two=&one;
//num one;one;	
	one.x=10;
	one.y=20;
	cout<<two->x<<" "<<two->y;
	return 0;
}
