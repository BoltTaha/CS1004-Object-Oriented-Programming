#include <iostream>

using namespace std;

int main() {
    cout << "Hello" << endl;
    
    int n;
    cin >> n;
    
    // Check if input is within the range of int
    if (n >= INT_MIN && n <= INT_MAX) {
        cout << "Valid input: " << n << endl;
    } else {
        cout << "Invalid input. Please enter a valid integer." << endl;
        cin>>n;
    }
    
    return 0;
}
