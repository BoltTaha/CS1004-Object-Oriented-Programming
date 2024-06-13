#include <iostream>
#include <string>
using namespace std;

class dob {
private:
    int date;
    int month;
    int year;

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
    // Default constructor
    contact() : person_dob(0, 0, 0), person_name(""), email(""), number(0) {}

    // Constructor to initialize contact object
    contact(int d, int m, int y, string name, string email, long num)
        : person_dob(d, m, y), person_name(name), email(email), number(num) {}

    // Accessor function to get person name
    string getName() const { return person_name; }

    // Accessor function to get person's date of birth
    dob getDateOfBirth() const { return person_dob; }
};

class contactbook {
private:
    static const int max_size = 100; // Maximum size of the contact book
    contact book[max_size];
    int size;

public:
    // Constructor to initialize contactbook with size
    contactbook(int n) : size(n) {}

    // Function to add a contact to the contact book
    void addContact(contact c, int index) {
        if (index >= 0 && index < max_size) {
            book[index] = c;
        } else {
            cout << "Invalid index. Contact not added." << endl;
        }
    }

    // Function to print names of contacts with birthday in a specific month
    void printname(int month) {
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (month == book[i].getDateOfBirth().getMonth()) {
                found = true;
                cout << "Name: " << book[i].getName() << endl;
            }
        }
        if (!found) {
            cout << "No contacts found with birthday in month " << month << endl;
        }
    }
};

int main() {
    int size = 2; // Set the size of the contact book
    contactbook one(size); // Create a contactbook object

    // Input contact details for each contact and add them to the contact book
    for (int i = 0; i < size; i++) {
        int date, month, year;
        string email, person_name;
        long number;

        cout << "Enter Person name: ";
        getline(cin, person_name);

        cout << "Enter the person Email: ";
        getline(cin, email);

        cout << "Enter the Phone Number: ";
        cin >> number;

        cout << "Enter the Date in DD/MM/YY format: ";
        cin >> date >> month >> year;
        cin.ignore(); // consume newline character

        // Create contact object with input details
        contact c(date, month, year, person_name, email, number);

        // Add the contact to the contact book
        one.addContact(c, i);
    }

    // Input month to search for contacts
    cout << "Enter the Month you want to search for: ";
    int m;
    cin >> m;

    // Print names of contacts with birthday in the specified month
    one.printname(m);

    return 0;
}
