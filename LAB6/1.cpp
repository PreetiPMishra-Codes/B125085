
#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction {
    int n, d;

    int gcd(int a, int b) {
        a = abs(a);
        b = abs(b);

        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    void simplify() {
        int g = gcd(n, d);
        n /= g;
        d /= g;

        if (d < 0) {
            n = -n;
            d = -d;
        }
    }

public:
    Fraction(int a = 0, int b = 1) : n(a), d(b) {
        if (d == 0) {
            n = 0;
            d = 1;
        }
        simplify();
    }

    Fraction operator+(Fraction f) {
        return Fraction(n * f.d + f.n * d, d * f.d);
    }

    Fraction operator-(Fraction f) {
        return Fraction(n * f.d - f.n * d, d * f.d);
    }

    void display() {
        cout << n << "/" << d << endl;
    }
};

int main() {
    int a, b, c, d;

    cout << "Enter first fraction (numerator denominator): ";
    cin >> a >> b;

    cout << "Enter second fraction (numerator denominator): ";
    cin >> c >> d;

    if (b == 0 || d == 0) {
        cout << "Invalid denominator!\n";
        return 0;
    }

    Fraction f1(a, b), f2(c, d);

    cout << "First fraction: ";
    f1.display();

    cout << "Second fraction: ";
    f2.display();

    cout << "Sum: ";
    (f1 + f2).display();

    cout << "Difference: ";
    (f1 - f2).display();

    return 0;
}
