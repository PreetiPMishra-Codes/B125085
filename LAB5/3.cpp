#include <iostream>
#include <cctype>
using namespace std;

void check(int n) {
    if (n > 0)
        cout << "Positive" << endl;
    else if (n < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}

void check(char ch) {
    if (isupper(ch))
        cout << "Uppercase letter" << endl;
    else if (islower(ch))
        cout << "Lowercase letter" << endl;
    else
        cout << "Not an alphabet" << endl;
}

void check(char arr[], int n, char target) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Character found" << endl;
    else
        cout << "Character not found" << endl;
}

int main() {
    int n;
    char ch;

    cout << "Enter an integer: ";
    cin >> n;
    check(n);

    cout << "Enter a character: ";
    cin >> ch;
    check(ch);

    int size;
    cout << "Enter size of character array: ";
    cin >> size;

    char arr[1000];

    cout << "Enter characters: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter character to search: ";
    cin >> ch;

    check(arr, size, ch);

    return 0;
}
