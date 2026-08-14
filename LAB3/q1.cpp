#include <iostream>
using namespace std;
int main()
{
  // Dynamically allocate memory on the heap for two integers
    int *a=new int, *b=new int;
    cout<<"enter the numbers";
    cin>>*a>>*b;
  // Output arithmetic operations: Sum, Difference, Product, and Quotient
    // Note: Casts 'b' to double to allow floating-point division instead of integer truncation
    cout<<"Sum="<<*a+*b<<"\nDifference="<<*a-*b<<"\nProduct="<<*a**b<<"\nQuotient="<<*a/(double)*b;
  // Deallocate the memory assigned to pointer 'a' and 'b' to prevent memory leaks
    delete a;
    delete b;
    return 0;
}
