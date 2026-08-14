#include <iostream>
using namespace std;
// Function to take array input from the user using a pointer
void input(int *a, int n) 
{
    cout << "enter the elements ";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
}
// Function to calculate and return the sum of all elements in the array
int sum(int *a, int n) 
{
    int s = 0;
    for (int i = 0; i < n; i++) 
        s += a[i];
    return s;
}
// Function to find and return the smallest element in the array
int smallest(int *a, int n) 
{
    int mn = a[0];
    for (int i = 0; i < n; i++) 
    {
        if (a[i] < mn) 
            mn = a[i];
    }
    return mn;
}
// Function to find and return the largest element in the array
int greatest(int *a, int n) 
{
    int mx = a[0];
    for (int i = 0; i < n; i++) 
    {
        if (a[i] > mx) 
            mx = a[i];
    }
    return mx;
}
int main() 
{
    int n;
    // Prompt the user to enter the number of elements
    cout << "enter the value of n ";
    cin >> n;
    // Dynamically allocate memory on the heap for an array of 'n' integers
    int *a = new int[n];
    // Read input elements into the array
    input(a, n);
    // Call functions to compute and display the sum, smallest, and largest values
    cout << "Sum=" << sum(a, n) 
         << "\nSmallest=" << smallest(a, n) 
         << "\nLargest=" << greatest(a, n);
    // Deallocate the dynamically allocated memory array to prevent memory leaks
    delete[] a;
    return 0;
}
