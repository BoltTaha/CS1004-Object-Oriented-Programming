#include<iostream>
using namespace std;

class TestScores
{  private:
   int score1;
   int score2;
   int score3;
   
   public:
   	//Parametrized constructor
   	TestScores()
   	{
   		score1=0;
   		score2=0;
   		score3=0;
	   }
	   
	   void setScore1(int s)
	   {
	   	score1=s;
	   }
	   void setScore2(int s)
	   {
	   	score2=s;
	   }
	   void setScore3(int s)
	   {
	   	score3=s;
	   }
	   
	   int getScore1()
	   {
	   	return score1;
	   }
	   
	   int getScore2()
	   {
	   	return score2;
	   }
	   
	   int getScore3()
	   {
	   	return score3;
	   }
	   
	   float average()
	   {
	   	return (score1+score2+score3)/3.0;
	   }
   	
};
int main(void)
{
	 int one,two,three;
	 
	 
	 cout<<"Enter the score of first Testscore : "<<endl;
	 cin>>one;
	 
	 cout<<"Enter the score of first Testscore : "<<endl;
	 cin>>two;
	 cout<<"Enter the score of first Testscore : "<<endl;
	 cin>>three;
	 
	TestScores t;
	
	t.setScore1(one);
	t.setScore2(two);
	t.setScore3(three);
	
	cout<<"The score of the FIrst Test score is "<<t.getScore1()<<endl;
    cout<<"The score of the Second Test score is "<<t.getScore2()<<endl;
	cout<<"The score of the Third Test score is "<<t.getScore3()<<endl;	
	cout<<"The average of the Test scores is "<<t.average()<<endl;
	
	return 0;
}
