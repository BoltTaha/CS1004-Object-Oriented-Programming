#include<iostream>      //two classes they both access the same the friend function

using namespace std;
class ClassB;   //we do forward declaration bcz its tell the compiler that ClassB is also present here 
class ClassA{
	friend int Add(ClassA a , ClassB b);   //in this line we ahve Class A and CLassb both are present 
	private:
		int x;
		public:
			ClassA(int A):x(A){
			}
			
};

class ClassB{
	friend int Add(ClassA a , ClassB b);
	private:
	int y;
	public:
	ClassB(int B):y(B){
	}	
};

int Add(ClassA a , ClassB b)
{
	return(a.x+ b.y);	
}

int main(void)
{
	ClassA a(12);
     ClassB b(10);
	 cout<<Add(a,b);	
	
	return 0;
}
