#include <iostream>
using namespace std;

void swapData(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapData(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void swapData(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    float x, y;
    int p, q;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swap: " << a << " " << b << endl;
    swapData(a, b);
    cout << "After swap: " << a << " " << b << endl;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Before swap: " << x << " " << y << endl;
    swapData(x, y);
    cout << "After swap: " << x << " " << y << endl;

    cout << "\nEnter two integers for pointer swap: ";
    cin >> p >> q;

    cout << "Before swap: " << p << " " << q << endl;
    swapData(&p, &q);
    cout << "After swap: " << p << " " << q << endl;

    return 0;
}
