#include <iostream>
using namespace std;

int convert(int km) {
    return km * 1000;
}

int convert(double km) {
    return km * 1000;
}

double convert(float meters, char unit) {
    return meters * 100;
}

int main() {
    int km;
    double fkm;
    float meters;

    cout << "Enter distance in kilometers (integer): ";
    cin >> km;
    cout << "Meters = " << convert(km) << endl;

    cout << "Enter distance in kilometers (floating-point): ";
    cin >> fkm;
    cout << "Meters = " << convert(fkm) << endl;

    cout << "Enter distance in meters (floating-point): ";
    cin >> meters;
    cout << "Centimeters = " << convert(meters, 'm') << endl;

    return 0;
}
