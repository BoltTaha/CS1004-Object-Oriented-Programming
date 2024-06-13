#include<iostream>

using namespace std;

class Square;   // forward declaration
class Rectangle
{
int width, height;

public:
Rectangle(int w=1, int h=1):
width(w),height(h){}
friend void display(Rectangle &, Square &);
};
class Square {
int side;
public:
Square(int s = 1):side(s){}
friend void display(Rectangle &, Square &);
};
void display(Rectangle &r, Square &s) {
cout << "Rectangle: " << r.width * r.height
<< endl;
cout << "Square: " << s.side * s.side <<
endl;
}

int main () {
Rectangle rec(5,10);
Square sq(5);
display(rec,sq);
return 0;
}