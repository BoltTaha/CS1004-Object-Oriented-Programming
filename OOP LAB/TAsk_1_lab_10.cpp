#include<iostream>
#include<string>
using namespace std;

class dob {
private:
    int date, year, month;

public:
    dob(int d, int m, int y) : date(d), month(m), year(y) {}
    int getMonth() const { return month; }
};

class contact {
private:
    dob person_dob;
    string person_name;
    string email;
    long number;

public:
    // Constructor to initialize contact object
    contact(int d, int m, int y, string name, string email, long num)
        : person_dob(d, m, y), person_name(name), email(email), number(num) {}

    // Accessor function to get person name
    string getName() const { return person_name; }
};

class contactbook {
private:
    static const int max_size = 100; // Maximum size of the contact book
    contact book[max_size];
    int size;

public:
    // Constructor to initialize contactbook with array of contacts
    contactbook(contact arr[], int n) {
        size = n; // Set the size of the contact book
        for (int i = 0; i < size; i++) {
            book[i] = arr[i]; // Copy each contact from the array to the contact book
        }
    }

    // Function to print names of contacts with birthday in a specific month
    void printname(int month) {
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (month == book[i].getMonth()) {
                found = true;
                cout << "Name: " << book[i].getName() << endl;
            }
        }
        if (!found) {
            cout << "No contacts found with birthday in month " << month << endl;
        }
    }
};

int main(void) {
    int date, month, year;
    string email, person_name;
    long number;

    // Array to store contact objects
    contact contacts[2]; // Assuming a fixed size of 2 for simplicity

    // Input contact details for each contact
    for (int i = 0; i < 2; i++) {
        cout << "Enter Person name: ";
        getline(cin, person_name);

        cout << "Enter the person Email: ";
        getline(cin, email);

        cout << "Enter the Phone Number: ";
        cin >> number;

        cout << "Enter the Date in DD/MM/YY format: ";
        cin >> date >> month >> year;
        cin.ignore(); // consume newline character

        // Create contact object with input details and store in array
        contacts[i] = contact(date, month, year, person_name, email, number);
    }

    // Create contactbook object with the array of contacts
    contactbook one(contacts, 2); // Pass the array and size of the array

    // Input month to search for contacts
    cout << "Enter the Month you want to search for: ";
    int m;
    cin >> m;

    // Print names of contacts with birthday in the specified month
    one.printname(m);

    return 0;
}

