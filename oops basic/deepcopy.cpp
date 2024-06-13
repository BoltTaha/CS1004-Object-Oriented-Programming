#include<iostream>
using namespace std;

class Circle {
    int *radius; // Pointer to dynamically allocated memory for radius

public:
    // Constructor to initialize radius to 0
    Circle() {
        radius = new int(0);
    }

    // Copy constructor for shallow copying
    Circle(const Circle &c) {
        cout << "Copy constructor is called" << endl;
        radius = new int(*(c.radius)); // Perform shallow copy of radius
    }
// Copy constructor definition
//Circle(const Circle &c) {        //same thing
//    // Allocate memory dynamically for radius
//    radius = new int;
//    // Perform shallow copy of radius value
//    *radius = *(c.radius);
//}

    // Setter function to set the radius value
    void setRadius(int r) {
        *radius = r;
    }

    // Function to display the radius value
    void display() {
        cout << "Radius is: " << *radius << endl;
    }

    // Destructor to deallocate the dynamically allocated memory
    ~Circle() {
        cout << "Destructor is called" << endl;
        delete radius;
    }
};

int main() {
    // Create the first circle object
    Circle c1;
    c1.setRadius(4);
    cout << "R1 Radius" << endl;
    c1.display();

    // Create the second circle object and perform shallow copy from c1
    Circle c2 = c1; // Shallow copy happens here
    cout << "R2 Radius" << endl;
    c2.display();

    // Modify the radius of the second circle, affecting the first circle due to shallow copy
    c2.setRadius(5);
    cout << "R1 Radius after modifying R2" << endl;
    c1.display();
    cout << "R2 Radius after modifying R2" << endl;
    c2.display();

    return 0;
}

