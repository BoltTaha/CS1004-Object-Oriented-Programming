#include<iostream>
using namespace std;

class Engine
{
	public:
	string type;
	Engine(string t):type(t){
	}
	void show()
	{
		cout<<"Starting..."<<type<<" engine"<<endl;
		}	
};

class car{
	public:
	string model;
	Engine e;
	
	car(string m,string t):model(m),e(t){
	}	
	void show()
	{   e.show();
		cout<<"Car of model"<<model;
	}
};

int main(void)
{
	car c("Audi","V8");
	
	c.show();
	
	return 0;
}
