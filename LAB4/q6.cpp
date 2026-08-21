#include <iostream>
using namespace std;

class PrinterManager;

class Printer {
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    void input() {
        cout << "Enter printer name: ";
        cin >> printerName;

        cout << "Enter number of pages printed: ";
        cin >> pagesPrinted;

        cout << "Enter ink level (%): ";
        cin >> inkLevel;

        cout << "Enter power status (1 = ON, 0 = OFF): ";
        cin >> powerStatus;
    }

    friend class PrinterManager;
};

class PrinterManager {
public:

    void displayInfo(Printer &p) {
        cout << "\n----- Printer Information -----" << endl;

        cout << "Printer Name: "
             << p.printerName << endl;

        cout << "Pages Printed: "
             << p.pagesPrinted << endl;

        cout << "Ink Level: "
             << p.inkLevel << "%" << endl;

        cout << "Power Status: "
             << (p.powerStatus ? "ON" : "OFF") << endl;
    }

    void turnOn(Printer &p) {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }

    void turnOff(Printer &p) {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInkLevel(Printer &p) {
        cout << "Ink Level: "
             << p.inkLevel << "%" << endl;
    }

    void resetPageCount(Printer &p) {
        p.pagesPrinted = 0;
        cout << "Page count reset successfully." << endl;
    }
};

int main() {

    Printer printer;
    PrinterManager manager;

    printer.input();

    int choice;

    do {
        cout << "\n===== Printer Manager =====" << endl;
        cout << "1. Display Printer Information" << endl;
        cout << "2. Turn Printer ON" << endl;
        cout << "3. Turn Printer OFF" << endl;
        cout << "4. Check Ink Level" << endl;
        cout << "5. Reset Page Count" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            manager.displayInfo(printer);
            break;

        case 2:
            manager.turnOn(printer);
            break;

        case 3:
            manager.turnOff(printer);
            break;

        case 4:
            manager.checkInkLevel(printer);
            break;

        case 5:
            manager.resetPageCount(printer);
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
