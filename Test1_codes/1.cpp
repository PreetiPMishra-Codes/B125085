#include <iostream>
#include <cstring>
using namespace std;

class Locker {
    int number;
    bool occupied;
    char *code;

public:
    Locker() {
        cout << "Enter locker number: ";
        cin >> number;

        code = new char[20];

        cout << "Enter access code: ";
        cin >> code;

        occupied = false;
    }

    void setCode(char newCode[]) {
        strcpy(code, newCode);
    }

    void setCode(int pos, char ch) {
        code[pos] = ch;
    }

    void display() {
        cout << "Locker Number: " << number << endl;
        cout << "Access Code: " << code << endl;
        cout << "Status: " << (occupied ? "Occupied" : "Empty") << endl;
    }

    ~Locker() {
        delete[] code;
    }
};

int main() {
    int n;
    cout << "Enter number of lockers: ";
    cin >> n;

    Locker *l = new Locker[n];

    int choice;
    cout << "\nFor Locker 1:\n";
    cout << "1. Change complete code\n";
    cout << "2. Change one character\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        char newCode[20];
        cout << "Enter new complete code: ";
        cin >> newCode;
        l[0].setCode(newCode);
    }
    else {
        int pos;
        char ch;
        cout << "Enter position (0-based): ";
        cin >> pos;
        cout << "Enter new character: ";
        cin >> ch;
        l[0].setCode(pos, ch);
    }

    cout << "\nLocker Details:\n";
    for (int i = 0; i < n; i++)
        l[i].display();

    delete[] l;
}
