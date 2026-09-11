#include <iostream>
using namespace std;

class Instrument {
    int id;
    string name;
    int access;

public:
    Instrument() {
        cout << "Enter instrument ID: ";
        cin >> id;
        cout << "Enter instrument name: ";
        cin >> name;
        cout << "Enter access level: ";
        cin >> access;
    }

    friend class LabSupervisor;

    void display() {
        cout << "\nInstrument ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Access Level: " << access << endl;
    }
};

class LabSupervisor {
public:
    void check(Instrument *p) {
        cout << "Current access level: " << p->access << endl;
    }

    void modify(Instrument *p) {
        cout << "Enter new access level: ";
        cin >> p->access;
    }
};

int main() {
    Instrument *p = new Instrument;
    LabSupervisor s;

    cout << "\nSupervisor Checking:\n";
    s.check(p);

    cout << "\nSupervisor Modifying:\n";
    s.modify(p);

    p->display();

    delete p;
}
