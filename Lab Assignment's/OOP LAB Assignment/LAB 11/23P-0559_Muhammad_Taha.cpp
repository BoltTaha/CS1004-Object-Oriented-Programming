#include <iostream>
#include <cmath>

using namespace std;

// Abstract base class for shapes
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;
    // Virtual destructor
     ~Shape() {}
};

// Abstract class for 2D shapes
class Shape2D : public Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;
    // Virtual destructor
     ~Shape2D() {}
};

// Abstract class for 3D shapes
class Shape3D : public Shape {
public:
    // Pure virtual function for calculating area
    virtual double area() const = 0;
    // Pure virtual function for calculating volume
    virtual double volume() const = 0;
    // Virtual destructor
     ~Shape3D() {}
};

// Circle class derived from Shape2D
class Circle : public Shape2D {
private:
    double radius;
public:
    // Constructor
    Circle(double r) : radius(r) {}
    // Destructor
    ~Circle() {}
    // Override area function
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Square class derived from Shape2D
class Square : public Shape2D {
private:
    double side;
public:
    // Constructor
    Square(double s) : side(s) {}
    // Destructor
    ~Square() {}
    // Override area function
    double area() const override {
        return side * side;
    }
};

// Cube class derived from Shape3D
class Cube : public Shape3D {
private:
    double length, width, height;
public:
    // Constructor
    Cube(double l, double w, double h) : length(l), width(w), height(h) {}
    // Destructor
    ~Cube() {}
    // Override area function
    double area() const override {
        return 2 * (length * width + length * height + width * height);
    }
    // Override volume function
    double volume() const override {
        return length * width * height;
    }
};

// Pyramid class derived from Shape3D
class Pyramid : public Shape3D {
private:
    double base, height;
public:
    // Constructor
    Pyramid(double b, double h) : base(b), height(h) {}
    // Destructor
    ~Pyramid() {}
    // Override area function
    double area() const override {
        return base * base + 2 * base * sqrt((base / 2) * (base / 2) + height * height);
    }
    // Override volume function
    double volume() const override {
        return (1.0 / 3) * base * base * height;
    }
};

int main() {
    // Create an array of pointers to 2D shapes
    Shape2D *shapes2D[2];
    shapes2D[0] = new Circle(5);
    shapes2D[1] = new Square(4);

    // Create an array of pointers to 3D shapes
    Shape3D *shapes3D[2];
    shapes3D[0] = new Cube(3, 4, 5);
    shapes3D[1] = new Pyramid(4, 6);

    // Calculate and print areas for 2D shapes
    for (int i = 0; i < 2; ++i) {
        cout << "Area of 2D Shape " << i + 1 << ": " << shapes2D[i]->area() << endl;
        delete shapes2D[i]; // Free memory
    }

    // Calculate and print areas and volumes for 3D shapes
    for (int i = 0; i < 2; ++i) {
        cout << "Area of 3D Shape " << i + 1 << ": " << shapes3D[i]->area() << endl;
        cout << "Volume of 3D Shape " << i + 1 << ": " << shapes3D[i]->volume() << endl;
        delete shapes3D[i]; // Free memory
    }

    return 0;
}