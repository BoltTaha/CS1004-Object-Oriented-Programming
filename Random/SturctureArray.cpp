#include<iostream>
#include<string>
using namespace std;

struct player
{
   string name;
   int runs;
   int innings;
   int times_not_out;
   float avg;
};

int main(void)
{
	player p[5];
	
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter the Name for the player "<<i+1<<" "<<endl;
		getline(cin,p[i].name);
		cout<<endl;
		cout<<"Enter the total runs for player "<<i+1<<" "<<endl;
		cin>>p[i].runs;
		cout<<endl;
		cout<<"Enter the total number of innings for player "<<i+1<<" "<<endl;
		cin>>p[i].innings;
		cout<<endl;
		cout<<"Enter the total times of not out for player "<<i+1<<" "<<endl;
		cin>>p[i].times_not_out;
		
		p[i].avg=(p[i].runs/p[i].innings);
	}
		cout<<"Name\t\t"<<"Runs\t\t"<<"innings\t\t"<<"times_not_out\t\t"<<"average"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<p[i].name<<"\t\t"<<p[i].runs<<"\t\t"<<p[i].innings<<"\t\t"<<p[i].times_not_out<<"\t\t"<<p[i].avg<<endl;
	}
	
	return 0;
}
