#include <iostream>
using namespace std;

class Drone {
    int id;
    float battery, hours;

public:
    Drone() {
        cout << "Enter drone ID: ";
        cin >> id;
        cout << "Enter battery percentage: ";
        cin >> battery;
        cout << "Enter flight hours: ";
        cin >> hours;
    }

    void update(float b) {
        battery = b;
    }

    void update(float b, float h) {
        battery = b;
        hours = h;
    }

    friend void compareBattery(Drone, Drone);

    void display() {
        cout << "Drone ID: " << id << endl;
        cout << "Battery: " << battery << "%" << endl;
        cout << "Flight Hours: " << hours << endl;
    }
};

void compareBattery(Drone a, Drone b) {
    if (a.battery > b.battery)
        cout << "Drone 1 has higher battery.\n";
    else if (b.battery > a.battery)
        cout << "Drone 2 has higher battery.\n";
    else
        cout << "Both have equal battery.\n";
}

int main() {
    Drone *d1 = new Drone;
    Drone *d2 = new Drone;

    float b, h;

    cout << "\nEnter new battery for Drone 1: ";
    cin >> b;
    d1->update(b);

    cout << "Enter new battery for Drone 2: ";
    cin >> b;
    cout << "Enter new flight hours for Drone 2: ";
    cin >> h;
    d2->update(b, h);

    cout << "\nDrone 1:\n";
    d1->display();

    cout << "\nDrone 2:\n";
    d2->display();

    compareBattery(*d1, *d2);

    delete d1;
    delete d2;
}
