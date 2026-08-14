#include <iostream>
using namespace std;
int main()
{
    int n;
  // Prompt the user to enter the size of the array
    cout<<"enter the size of array ";
    cin>>n;
  // Dynamically allocate memory on the heap for an array of 'n' integers
    int *a=new int[n];
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
  // Print the array elements in reverse order
    for(int i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
  // Deallocate the dynamically allocated memory array to prevent memory leaks
    delete[] a;
    return 0;
}
