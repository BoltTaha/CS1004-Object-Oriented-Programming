#include<iostream>
#include<time.h>
#include<stdlib.h>              

using namespace std;

// Function prototypes
void main_screen(int *ptr, int &size);
void add_new_number(int *&ptr, int &size);
void delete_number(int *&ptr, int &size);
void print_array(int *ptr, int size);
int sum_array(int *ptr, int size);
void re_size(int *&ptr, int &size, int Sizee);

int main() {
    srand(time(NULL));
    int size = 5;
    int *ptr = new int[size];
    
    // Initialize the array with random values
    for (int i = 0; i < size; i++) {
        ptr[i] = rand() % 11;
    }
    
    // Display the main menu
    main_screen(ptr, size);
    
    // Deallocate memory
    delete [] ptr;
    
    return 0;
}

void add_new_number(int *&ptr, int &size) {
    int num;
    cout << "Enter the number to add: ";
    cin >> num;

    // Increase the size of the array by 1
    ResizeArray(ptr, size, size + 1);

    // Add the new number at the end
    ptr[size - 1] = num;

    cout << num << " added successfully." << endl;
}

void delete_number(int *&ptr, int &size) {
    if (size == 0) {
        cout << "Array is empty. Cannot delete." << endl;
        return;
    }

    int num;
    cout << "Enter the number to delete: ";
    cin >> num;

    int index = -1;
    for (int i = 0; i < size; i++) {
        if (ptr[i] == num) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Number not found in the array." << endl;
    } else {
        // Shift elements to the left to remove the number
        for (int i = index; i < size - 1; i++) {
            ptr[i] = ptr[i + 1];
        }

        // Decrease the size of the array by 1
        ResizeArray(ptr, size, size - 1);

        cout << num << " deleted successfully." << endl;
    }
}

void print_array(int *ptr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int sum_array(int *ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ptr[i];
    }
    return sum;
}

void main_screen(int *ptr, int &size) {
    int choice;
    do {
        cout << "\nMenu:\n"
             << "1. Add new number\n"
             << "2. Delete a number\n"
             << "3. Print the array\n"
             << "4. Print sum of array\n"
             << "5. Exit Program\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                add_new_number(ptr, size);
                break;
            case 2:
                delete_number(ptr, size);
                break;
            case 3:
                print_array(ptr, size);
                break;
            case 4:
                cout << "Sum of array: " << sum_array(ptr, size) << endl;
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
}

void re_size(int *&ptr, int &size, int Sizee) {
	//From the Slide NO 26 Of Dynamic Allocation
	
	/* Start Resizing the Array */
	// 1. we require a temporary pointer
    int *temp = NULL;
	temp = new int[Sizee];
    int row = (size<Sizee)?size:Sizee;

    // 3. copy over the old values
    for (int i=0;i<row;i++) {
        temp[i]=ptr[i];
    }
   // 4. delete the old array
    delete[] ptr;
   // 5. assign the temporary pointer to the original
    ptr = temp;
    // 6. set the temporary pointer to NULL
    temp = NULL;

    // 7. update the size of the array
    size = Sizee;
    /*Finish Resizing the Array */
}

