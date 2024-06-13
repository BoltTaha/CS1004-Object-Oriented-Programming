#include <iostream>
using namespace std;

class add { // Define add class before distance class
public:
     void addfive(distance d);
};

class distance {
private:
    int meter;
    friend void add::addfive(distance e); // Friend declaration
public:
    distance(int m) : meter(m) {}
    int getMeter() { return meter; }
};

void add::addfive(distance d) {
    d.meter += 5;
    cout << "Meter after addition: " << d.meter << endl;
}

int main() {
    distance d1(10);
    add a;

    cout << "Before addition: " << d1.getMeter() << endl;

    a.addfive(d1);

    return 0;
}

