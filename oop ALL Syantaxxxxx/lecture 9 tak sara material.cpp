#include<iostream>

using namespace std;

class dayofyear{
    private:
    int day,month,year;
    
    public:
    
    int getday()const;int getmonth()const;int getyear()const;
    void setday(int);void setmonth(int);void setyear(int);
    void display();
	void displayone ()const;
    dayofyear()
    {
        day=0;
        month=0;
        year=0;
    }
    
    dayofyear(int d,int m, int y):day(d),month(m),year(y)
    {
        
    }
    
    
    
    
};
void dayofyear::setday(int d)
{
    this->day=d;
}

void dayofyear::setmonth(int m)
{
    this->month=m;
}

void dayofyear::setyear(int y)
{
    this->year=y;
}

int dayofyear::getday()const
{
    return day;
}

int dayofyear::getmonth()const{   return month;}

int dayofyear::getyear()const{   return year;}

void dayofyear::display()
{
    cout<<day<<" /"<<month<<" /"<<year<<endl;
}

void dayofyear::displayone ()const
{
    cout<<day<<" /"<<month<<" /"<<year<<endl;
}


int main(void)
{
   const dayofyear birthday(20,06,2004);
    dayofyear today;
    cout<<"Birthday....!"<<endl;
    birthday.displayone();
    cout<<endl;
    cout<<endl<<endl;
    
    int d,m,y;
    cout<<"Enter the Day "<<endl;
    cin>>d;
    cout<<"ENter the Month "<<endl;
    cin>>m;
    cout<<"ENter the year "<<endl;
    cin>>y;
    
    today.setday(d);today.setmonth(m);today.setyear(y);
    
    cout<<"Today's Date with the help of getteer function"<<endl;
    cout<<today.getday()<<" "<<today.getmonth()<<" "<<today.getyear()<<endl<<endl;
    
    cout<<"Today's Date with the help of Display FUnction "<<endl;
    today.display();
    
    
    
}

