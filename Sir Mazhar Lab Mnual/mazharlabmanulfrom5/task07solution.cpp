#include<iostream>
using namespace std;

class Account{
	public:
	int balance;
	static int remain;
	
void setBalance(int b)
{
	balance = b;
}
// declring a static member fucntion
static void setRemain(int r){
	remain = r;
	cout<<"the value:"<<r;
}	
		
};

// intilization of static member varibele
int Account:: remain= 3;

int main(){
// calling the function without the use of object
Account :: setRemain(4);
  
}


