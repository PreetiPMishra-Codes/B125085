
#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];  // A 2 x 2 matrix

public:
    // Input all four matrix elements
    void input() {
        cout << "Enter 4 matrix elements row-wise:\n";

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    // Overload + to add corresponding elements
    Matrix operator+(Matrix m) {
        Matrix result;

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.a[i][j] = a[i][j] + m.a[i][j];

        return result;  // Return the new matrix
    }

    // Display matrix row by row
    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }
};

int main() {
    Matrix a, b;

    cout << "Enter first matrix:\n";
    a.input();

    cout << "Enter second matrix:\n";
    b.input();

    // Add matrices and store result separately
    Matrix c = a + b;

    cout << "First matrix:\n";
    a.display();

    cout << "Second matrix:\n";
    b.display();

    cout << "Sum of matrices:\n";
    c.display();

    return 0;
}
