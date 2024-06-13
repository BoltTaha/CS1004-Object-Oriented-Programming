#include<iostream>
#include<string.h>

using namespace std;

class Shape{
     public:
    string name;
   
    Shape(){
        name="SHAPE";
    }
    Shape(string name)
    
    {
        this->name=name;
    }
    
    void print();
};
void Shape::print()
{
    cout<<"The Name of the Shape is "<<endl;
}

class Circle : public Shape
{
    double radius;
    public:
    Circle(double radius,string name):radius(radius),Shape(name)
    {
        
    }
    void print()
    {
        cout<<"The NAme of the Shape is "<<name<<endl;
        cout<<"The Radius of the "<<name<<"Is "<<radius<<endl;
    }
};

class Rectangle:public Shape
{
  double length;
  double width;
  public:
  Rectangle(string name,double length,double width):Shape(name),length(length),width(width)
  {
      
  }
  void print()
  {
      cout<<"The name of the Shape is "<<name<<endl;
      cout<<"The Dmmension of the SHapes are "<<length<<"X"<<width<<endl;
  }
};

int main(void)
{    
    Shape obj0;
    obj0.print();
    Circle obj(6.0,"Circle");
    obj.print();
    Rectangle obj1("Reactanle",34,78);
    obj1.print();
}
