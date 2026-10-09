
#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    // Initialize account balance
    AccountBalance(double b) : balance(b) {}

    // Overload unary minus
    AccountBalance operator-() {
        return AccountBalance(-balance);
    }

    // Display balance
    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    double b;

    cout << "Enter account balance: ";
    cin >> b;

    AccountBalance a(b);

    // Create a new object with the negated balance
    AccountBalance negative = -a;

    cout << "Original account: ";
    a.display();

    cout << "Negated account: ";
    negative.display();

    return 0;
}
