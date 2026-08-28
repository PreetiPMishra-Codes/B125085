#include <iostream>
using namespace std;

int process(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

float process(float arr[], int n) {
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int process(int arr[], int n, int k) {
    int sum = 0;

    for (int i = 0; i < k && i < n; i++)
        sum += arr[i];

    return sum;
}

int main() {
    int n;

    cout << "Enter size of integer array: ";
    cin >> n;

    int iarr[1000];

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> iarr[i];

    cout << "Integer array sum = " << process(iarr, n) << endl;

    cout << "\nEnter size of floating-point array: ";
    cin >> n;

    float farr[1000];

    cout << "Enter floating-point elements: ";
    for (int i = 0; i < n; i++)
        cin >> farr[i];

    cout << "Floating-point array sum = " << process(farr, n) << endl;

    int k;
    cout << "\nEnter k: ";
    cin >> k;

    cout << "Sum of first " << k << " elements = "
         << process(iarr, n, k) << endl;

    return 0;
}
