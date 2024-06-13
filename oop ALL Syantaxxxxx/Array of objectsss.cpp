#include<iostream>

using namespace std;

class Point {
private:
int x, y; // Private data members

public:
Point(int  , int); // Constructor with default arguments
int getX() const; // Getter
void setX(int x); // Setter
int getY() const;
void setY(int y);
void setXY(int x, int y);
void print() const;
};


// Constructor - The default values are specified in the declaration
Point::Point(int x=0, int y=0) : x(x), y(y) { }

int Point::getX() const { return x; }
int Point::getY() const { return y; }

// void Point::setX(int x_) { x = x_; }
// void Point::setY(int y_) { y = y_; }

void Point::setXY(int x_, int y_) { x = x_; y = y_; }

void Point::print() const {
cout << "Point @ (" << x << "," << y << ")";
}

int main(void)
{

   Point ptsArray1[2]; // Array of Point objects

ptsArray1[0].print(); // Point @ (0,0)
ptsArray1[1].setXY(11, 11);
ptsArray1[1].print(); // Point @ (11,11)

Point ptsArray2[3] = { Point(21, 21), Point(22, 22), Point() };

ptsArray2[0].print(); // Point @ (21,21)
cout << endl;
ptsArray2[0].print(); // Point @ (0,0)


Point * ptrPtsArray3 = new Point[2];//objects created using default constructor
ptrPtsArray3[0].setXY(31, 31);
ptrPtsArray3[0].print(); // Point @ (31,31)

cout << endl;
ptrPtsArray3[1].setXY(32, 32);
ptrPtsArray3[1].print(); // Point @ (32,32)
cout << endl;











}
