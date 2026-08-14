#include <iostream>
using namespace std;
// Class to represent a Product
class Product 
{
    // Private data members
    int id, qty;
    string name;
    float price;
public:
    // Member function to take product details as input from the user
    void get() 
    {
        cout << "Enter id(int), name(string), price(float), quantity(int) resp. \n";
        cin >> id >> name >> price >> qty;
    }
    // Member function to calculate the total cost for this product
    float cost() 
    {
        return price * qty;
    }
    // Member function to display product details and total cost
    void show() 
    {
        cout << name << "\n" << "Cost=" << cost() << "\n\n";
    }
};
int main() 
{
    int n;
    float total = 0;
    // Prompt user to enter the number of products
    cout << "enter size ";
    cin >> n;
    // Dynamically allocate memory on the heap for an array of 'n' Product objects
    Product *p = new Product[n];
    // Input details for each product
    for (int i = 0; i < n; i++)
        p[i].get();
    // Display each product's details and add its cost to the total inventory value
    for (int i = 0; i < n; i++)
        p[i].show(), total += p[i].cost();
    // Output the total value of all products combined
    cout << "Iventory Value=" << total;
    // Deallocate the dynamically allocated array to prevent memory leaks
    delete[] p;
    return 0;
}
