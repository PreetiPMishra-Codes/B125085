
#include <iostream>
using namespace std;

class Temperature {
    float c;  // Temperature in Celsius

public:
    Temperature(float t) : c(t) {}

    // Compare whether this temperature is greater
    bool operator>(Temperature x) {
        return c > x.c;
    }

    // Compare whether this temperature is smaller
    bool operator<(Temperature x) {
        return c < x.c;
    }

    // Return a new object with the opposite value
    Temperature operator-() {
        return Temperature(-c);
    }

    void display() {
        cout << c << " C\n";
    }
};

int main() {
    float t;

    cout << "Enter first temperature: ";
    cin >> t;
    Temperature a(t);

    cout << "Enter second temperature: ";
    cin >> t;
    Temperature b(t);

    cout << "First > second: " << (a > b) << endl;
    cout << "First < second: " << (a < b) << endl;

    // Negate the first temperature
    Temperature neg = -a;

    cout << "Negated first temperature: ";
    neg.display();

    return 0;
}
