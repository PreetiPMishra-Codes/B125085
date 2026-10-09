
#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    // Initialize number of items and total bill amount
    Bill(int i = 0, double a = 0)
        : items(i), amount(a) {}

    // Overload + to combine two bills
    Bill operator+(Bill b) {
        return Bill(items + b.items, amount + b.amount);
    }

    // Overload > to compare total bill amounts
    bool operator>(Bill b) {
        return amount > b.amount;
    }

    // Display bill details
    void display() {
        cout << "Items: " << items
             << ", Total amount: " << amount << endl;
    }
};

int main() {
    int items;
    double amount;

    cout << "Enter first bill (items amount): ";
    cin >> items >> amount;
    Bill a(items, amount);

    cout << "Enter second bill (items amount): ";
    cin >> items >> amount;
    Bill b(items, amount);

    // Combine both bills into a new object
    Bill total = a + b;

    cout << "Combined bill: ";
    total.display();

    cout << "First bill: ";
    a.display();

    cout << "Second bill: ";
    b.display();

    // Compare the two original bills
    cout << "First bill is greater: " << (a > b) << endl;

    return 0;
}
