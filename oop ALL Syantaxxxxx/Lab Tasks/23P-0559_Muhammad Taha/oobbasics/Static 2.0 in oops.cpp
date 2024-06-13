#include<iostream>
using namespace std;

class count{
	public:
	static int counter;
	count()
	{
		counter++;
		}
	int getcount()
	{
		return counter;
			}		
};

int count::counter=0;
int main(void)
{  
    count obj1,obj2,obj3;
    
    cout<<"The value of the static keyword is "<<obj1.getcount();
    //this should be print 3 because our total number of instances are 3 so the constuctor is call three times and it incremenet it values always wehn the function is call
	
	
	
	return 0;
}
