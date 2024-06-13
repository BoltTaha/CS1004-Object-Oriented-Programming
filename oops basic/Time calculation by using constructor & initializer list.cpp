// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Time{
  private:
  int seconds,minutes,hours;
  public:
  void display();
  void input();
  
  Time(int s=0,int m=0,int h=0);
  ~Time();
  
    
};
void Time::display()
{
    cout<<" "<<seconds<<" "<<minutes<<" "<<hours;
}

void Time::input(){
    cout<<"Enter the Time in Seconds "<<endl;
    cin>>seconds;
      if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    
    cout<<"Enter the Time in Minutes "<<endl;
    cin>>minutes;
 if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }
    cout<<"Enter the Time in HOurs"<<endl;
    cin>>hours;
    if (hours >= 24) {
        hours %= 24;
    }
}
// Time::Time(int s=0,int min=0,int h=0)
// {
//     seconds=s;minutes=min;hours=h;
    
//     cout<<"Constructor is calling "<<endl;
// }
Time::Time(int s,int m,int h):seconds(s),minutes(m),hours(h)
{
     cout<<"Constructor is calling "<<endl;
}
Time::~Time()
{
    cout<<"Destructor is calling "<<endl;
}
int main() {
   
   Time noon,midnight;
   
   noon.input();
   noon.display();
   
   midnight.input();
   midnight.display();
   
       return 0;
}
