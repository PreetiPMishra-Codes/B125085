
#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    // Initialize date
    Date(int d, int m, int y)
        : day(d), month(m), year(y) {}

    // Return true if all date fields match
    bool operator==(Date x) {
        return day == x.day &&
               month == x.month &&
               year == x.year;
    }

    // Return the opposite of equality
    bool operator!=(Date x) {
        return !(*this == x);
    }
};

int main() {
    int d, m, y;

    cout << "Enter first date (day month year): ";
    cin >> d >> m >> y;
    Date a(d, m, y);

    cout << "Enter second date (day month year): ";
    cin >> d >> m >> y;
    Date b(d, m, y);

    cout << "Dates equal: " << (a == b) << endl;
    cout << "Dates unequal: " << (a != b) << endl;

    return 0;
}
