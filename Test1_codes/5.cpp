#include <iostream>
using namespace std;

class Wallet {
    int id;
    float balance;
    float *transactions;
    int count;

public:
    Wallet() {
        cout << "Enter wallet ID: ";
        cin >> id;
        cout << "Enter initial balance: ";
        cin >> balance;

        transactions = new float[10];
        count = 0;
    }

    void transaction(float amount) {
        balance += amount;
        transactions[count++] = amount;
    }

    void transaction(float amount, char type) {
        if (type == 'D' || type == 'd')
            transaction(amount);
        else if (type == 'W' || type == 'w')
            transaction(-amount);
    }

    friend void compare(Wallet, Wallet);

    void display() {
        cout << "Wallet ID: " << id << endl;
        cout << "Balance: " << balance << endl;
    }

    ~Wallet() {
        delete[] transactions;
    }
};

void compare(Wallet a, Wallet b) {
    if (a.balance > b.balance)
        cout << "Wallet 1 has larger balance.\n";
    else if (b.balance > a.balance)
        cout << "Wallet 2 has larger balance.\n";
    else
        cout << "Both wallets have equal balance.\n";
}

int main() {
    Wallet *w1 = new Wallet;
    Wallet *w2 = new Wallet;

    float amount;
    char type;

    cout << "\nWallet 1 Transaction:\n";
    cout << "Enter amount (+deposit / -withdrawal): ";
    cin >> amount;
    w1->transaction(amount);

    cout << "\nWallet 2 Transaction:\n";
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter type (D for Deposit, W for Withdrawal): ";
    cin >> type;
    w2->transaction(amount, type);

    cout << "\nWallet Details:\n";
    w1->display();
    w2->display();

    compare(*w1, *w2);

    delete w1;
    delete w2;
}
