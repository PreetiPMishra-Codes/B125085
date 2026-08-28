#include <iostream>
using namespace std;

void inspect(int x) {
    cout << "Value = " << x << endl;
}

void inspect(int *p) {
    cout << "Value pointed to = " << *p << endl;
}

void inspect(int *arr, int n) {
    cout << "Array elements: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    inspect(x);
    inspect(&x);

    int n;

    cout << "\nEnter size of array: ";
    cin >> n;

    int arr[1000];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    inspect(arr, n);

    return 0;
}
