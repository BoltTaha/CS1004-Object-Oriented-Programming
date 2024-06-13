#include<iostream>
#include<string.h>

using namespace std;
class base{
	int x = 10;
	public:
		int y = 9 ;
		//void display(){
		//	cout<<x;
	//	}
		
};
class derived : private base{
	public:
//	void show()
//	{
//		cout<<y;
//		}	
};
int main(void)
{
	derived x;
	cout<<x.y;
}
