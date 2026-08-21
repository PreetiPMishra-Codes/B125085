#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet {
private:
    string userName;
    double walletBalance;
    bool walletStatus;

public:
    void input() {
        cout << "Enter user name: ";
        cin >> userName;

        cout << "Enter wallet balance: ";
        cin >> walletBalance;

        cout << "Enter wallet status (1 = Active, 0 = Disabled): ";
        cin >> walletStatus;
    }

    friend class WalletManager;
};

class WalletManager {
public:

    void displayDetails(DigitalWallet &w) {
        cout << "\n----- Wallet Details -----" << endl;

        cout << "User Name: "
             << w.userName << endl;

        cout << "Wallet Balance: Rs. "
             << w.walletBalance << endl;

        cout << "Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled")
             << endl;
    }

    void addMoney(DigitalWallet &w) {
        double amount;

        cout << "Enter amount to add: ";
        cin >> amount;

        if (!w.walletStatus) {
            cout << "Wallet is disabled." << endl;
            return;
        }

        if (amount > 0) {
            w.walletBalance += amount;
            cout << "Money added successfully." << endl;
        }
        else {
            cout << "Invalid amount." << endl;
        }
    }

    void deductMoney(DigitalWallet &w) {
        double amount;

        cout << "Enter amount to deduct: ";
        cin >> amount;

        if (!w.walletStatus) {
            cout << "Wallet is disabled." << endl;
            return;
        }

        if (amount <= w.walletBalance && amount > 0) {
            w.walletBalance -= amount;
            cout << "Money deducted successfully." << endl;
        }
        else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void disableWallet(DigitalWallet &w) {
        w.walletStatus = false;
        cout << "Wallet disabled." << endl;
    }

    void displayStatus(DigitalWallet &w) {
        cout << "Current Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled")
             << endl;
    }
};

int main() {

    DigitalWallet wallet;
    WalletManager manager;

    wallet.input();

    int choice;

    do {
        cout << "\n===== Wallet Manager =====" << endl;
        cout << "1. Display Wallet Details" << endl;
        cout << "2. Add Money" << endl;
        cout << "3. Deduct Money" << endl;
        cout << "4. Disable Wallet" << endl;
        cout << "5. Display Wallet Status" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            manager.displayDetails(wallet);
            break;

        case 2:
            manager.addMoney(wallet);
            break;

        case 3:
            manager.deductMoney(wallet);
            break;

        case 4:
            manager.disableWallet(wallet);
            break;

        case 5:
            manager.displayStatus(wallet);
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
