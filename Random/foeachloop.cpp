#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    for (int a : arr)
    {
        cout << a << " "; // Add space as a separator
    }
    
    cout << endl; // Add newline at the end
}

