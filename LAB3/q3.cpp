#include <iostream>
using namespace std;

int main()
{
    // Declare variables: 'n' for array size, 'e' for even count, 'o' for odd count
    int n, e = 0, o = 0;
    // Prompt user to enter the size of the array
    cout << "enter the size of array ";
    cin >> n;
    // Dynamically allocate memory on the heap for an array of 'n' integers
    int *a = new int[n];
    // Read elements into the array and check if each is even or odd
    cout << "enter the elements\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        // Ternary condition: if a[i] % 2 is non-zero (odd), increment 'o', else increment 'e'
        a[i] % 2 ? o++ : e++;
    }
    // Display the count of even and odd numbers
    cout << "even=" << e << "\nodd=" << o;
    // Deallocate the dynamically allocated array to prevent memory leaks
    delete[] a;

    return 0;
}
