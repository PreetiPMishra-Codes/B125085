
#include <iostream>
using namespace std;

class InventoryItem {
    int id, quantity;
    double price;
    bool valid;  // Indicates whether combination succeeded

public:
    // Initialize item details
    InventoryItem(int i, double p, int q)
        : id(i), price(p), quantity(q), valid(true) {}

    // Overload + to combine compatible items
    InventoryItem operator+(InventoryItem x) {
        if (id == x.id && price == x.price) {
            return InventoryItem(id, price, quantity + x.quantity);
        }

        // Return an invalid result if items do not match
        InventoryItem result(0, 0, 0);
        result.valid = false;
        return result;
    }

    // Display item or incompatibility message
    void display() {
        if (!valid) {
            cout << "Incompatible items!\n";
            return;
        }

        cout << "ID: " << id
             << ", Price: " << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    int id, q;
    double p;

    cout << "Enter item 1 (ID price quantity): ";
    cin >> id >> p >> q;
    InventoryItem a(id, p, q);

    cout << "Enter item 2 (ID price quantity): ";
    cin >> id >> p >> q;
    InventoryItem b(id, p, q);

    // Combine items into a new object
    InventoryItem c = a + b;

    cout << "Combined item: ";
    c.display();

    // Original objects remain unchanged
    cout << "Original item 1: ";
    a.display();

    cout << "Original item 2: ";
    b.display();

    return 0;
}
