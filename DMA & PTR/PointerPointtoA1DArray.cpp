#include<iostream>
using namespace std;

int main(void)
{
	// Define an array of integers
	int arr[] = {10, 2, 39, 4, 5};
	
	// Define a pointer to an array of integers
	int (*ptr)[5];
	
	// Point the pointer to the base address of the array
	ptr = &arr;
	
	// Print the elements of the array
	cout << "Printing the Elements from the array" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "The value at the element " << i + 1 << " is " << arr[i] << endl;
	}
	
	// Print the elements of the 1D pointer which is pointing towards the base address of the array
	cout << endl << "Printing the Elements from the 1D Pointer which is pointing towards the base address of the array" << endl;
	cout << endl;
	for(int i = 0; i < 5; i++)
	{
		// Access each element using pointer arithmetic
		cout << "The value at the element " << i + 1 << " is " << *(*ptr + i) << endl;
	}
	cout << endl << endl;
	
	// Print the addresses of the array elements
	cout << "The addresses of the array elements are" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "The address of the element " << i + 1 << " is " << &arr[i] << endl;
	}
	cout << endl << endl;
	
	// Move the pointer to point to the next memory location
	cout << ++ptr << endl;
	ptr--; // Reset the pointer to its original position
	
	// Access and print the addresses of the array elements using pointer arithmetic
	cout << *ptr + 1 << endl; // Address of the 2nd element of the array
	cout << *ptr + 2 << endl; // Address of the 3rd element of the array
	cout << *(*ptr) << endl; // Value of the first element of the array
	*(*ptr) = *(*ptr) + *(*ptr + 1); // Add the values of the first two elements and assign the result to the first element
	cout << *(*ptr) << endl; // Print the updated value of the first element
	cout << arr[0] << endl; // Print the updated value of the first element of the array
//	*(ptr+3) = *(ptr + 3); // Move the pointer to point to the 4th element of the array
//	cout << **ptr << endl; // Print the value of the 4th element of the array
  *(ptr+1);
  cout<<ptr;	
	return 0;
}

