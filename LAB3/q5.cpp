#include <iostream>
using namespace std;
// Class definition to represent a Book
class Book
{
    // Private data members to store book details
    int id;
    string title, author;
    float price;
public:
    // Member function to take book details as input from the user
    void get()
    {
        cout << "Enter id(int), title(string), author(string), price(float) resp.\n";
        cin >> id >> title >> author >> price;
    }
    // Member function to display the stored book details
    void show()
    {
        cout << id << " " << title << " " << author << " " << price;
    }
};
int main()
{
    // Dynamically allocate memory on the heap for a 'Book' object
    Book *b = new Book;
    // Call member functions using the arrow operator (->) for the pointer object
    b->get();
    b->show();
    // Deallocate the dynamically allocated memory to avoid memory leaks
    delete b;
    return 0;
}
