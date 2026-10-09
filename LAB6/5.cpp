
#include <iostream>
using namespace std;

class Score {
    int s;

public:
    Score(int n = 0) : s(n) {}

    // Prefix: increment first, then return updated object
    Score operator++() {
        ++s;
        return *this;
    }

    // Postfix: dummy int distinguishes it from prefix
    Score operator++(int) {
        Score old = *this;  // Save old value
        s++;                // Increment current score
        return old;         // Return old value
    }

    void display() {
        cout << s << endl;
    }
};

int main() {
    int n;

    cout << "Enter initial score: ";
    cin >> n;

    // Use separate objects to demonstrate both operators
    Score a(n), b(n);

    Score prefix = ++a;
    Score postfix = b++;

    cout << "Prefix result: ";
    prefix.display();

    cout << "Postfix result: ";
    postfix.display();

    cout << "Score after prefix: ";
    a.display();

    cout << "Score after postfix: ";
    b.display();

    return 0;
}
