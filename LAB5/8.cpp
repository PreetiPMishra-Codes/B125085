#include <iostream>
using namespace std;

void update(int &x, int amount) {
    x += amount;
}

void update(float &x, float amount) {
    x += amount;
}

void update(int arr[], int n, int amount) {
    for (int i = 0; i < n; i++)
        arr[i] += amount;
}

int main() {
    int x, amount;

    cout << "Enter integer value: ";
    cin >> x;

    cout << "Before update: " << x << endl;

    cout << "Enter amount to increase: ";
    cin >> amount;

    update(x, amount);

    cout << "After update: " << x << endl;

    float f, famount;

    cout << "\nEnter floating-point value: ";
    cin >> f;

    cout << "Before update: " << f << endl;

    cout << "Enter amount to increase: ";
    cin >> famount;

    update(f, famount);

    cout << "After update: " << f << endl;

    int n;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    int arr[1000];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter amount to increase: ";
    cin >> amount;

    cout << "Before update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    update(arr, n, amount);

    cout << "\nAfter update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
