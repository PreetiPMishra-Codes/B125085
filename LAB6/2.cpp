
#include <iostream>
using namespace std;

class Duration {
    int h, m;  // Hours and minutes

public:
    // Constructor converts extra minutes into hours
    Duration(int hours = 0, int minutes = 0) {
        h = hours + minutes / 60;
        m = minutes % 60;
    }

    // Overload + to add two durations
    Duration operator+(Duration d) {
        return Duration(h + d.h, m + d.m);
    }

    // Display duration
    void display() {
        cout << h << " hours " << m << " minutes\n";
    }
};

int main() {
    int h, m;

    cout << "Enter first duration (hours minutes): ";
    cin >> h >> m;
    Duration d1(h, m);

    cout << "Enter second duration (hours minutes): ";
    cin >> h >> m;
    Duration d2(h, m);

    cout << "First duration: ";
    d1.display();

    cout << "Second duration: ";
    d2.display();

    // Add durations without changing the originals
    Duration total = d1 + d2;

    cout << "Total duration: ";
    total.display();

    return 0;
}
