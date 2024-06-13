#include<iostream>
using namespace std;

int main(void)
{
    int *ptr;
    ptr = new int[5]; // dynamically allocate memory for 5 integers.
    cout << "Enter the elements of array: \n";
    int i;
    for(i=0;i<5;i++)
    {
        cin>>ptr[i];
        cout<<endl;
    }
    cout << "\nElements in the array are :\n";
    for(i=0;i<5;i++)
    {
        cout<<ptr[i];
    }
    delete [] ptr; // deallocate the memory allocated by 'new'

}