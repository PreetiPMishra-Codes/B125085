
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    float price;

public:
    // Initialize book title and price
    Book(string t, float p) : title(t), price(p) {}

    // Return true if this book is smaller than the other
    bool operator<(Book b) {
        if (price != b.price)
            return price < b.price;

        // If prices match, compare titles alphabetically
        return title < b.title;
    }
};

int main() {
    string t1, t2;
    float p1, p2;

    cout << "Enter first book title: ";
    getline(cin, t1);

    cout << "Enter first book price: ";
    cin >> p1;
    cin.ignore();

    cout << "Enter second book title: ";
    getline(cin, t2);

    cout << "Enter second book price: ";
    cin >> p2;

    Book b1(t1, p1), b2(t2, p2);

    // Compare the two books
    if (b1 < b2)
        cout << "First book is smaller.\n";
    else
        cout << "First book is not smaller.\n";

    return 0;
}
