#include <iostream>
using namespace std;

int main()
{
    // Declare variables: 'n' for array size, 'x' for target element to search
    int n, x;
    // Prompt user to enter the size of the array
    cout << "enter the size of array ";
    cin >> n;
    // Dynamically allocate memory on the heap for an array of 'n' integers
    int *a = new int[n];
    // Read elements into the array
    cout << "enter the elements\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Read the target element to search for
    cout << "Enter the target ";
    cin >> x;
    // Flag variable to track whether the target element was found
    bool f = 0;
    // Linear search: Loop through the array to check for the target element
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            // Print 1-based index position where element is found and set flag to 1 (true)
            cout << "present at pos " << i + 1 << "\n", f = 1;
    }
    // If flag remains 0 (false), target was not found in the array
    if (!f) 
        cout << "not present";
    // Deallocate dynamically allocated memory to avoid memory leaks
    delete[] a;
    return 0;
}
