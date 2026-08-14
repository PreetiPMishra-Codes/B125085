#include <iostream>
using namespace std;
int main()
{
    // Variables for matrix dimensions: 'm' (rows) and 'n' (columns)
    int m, n;
    // Prompt user for rows and columns
    cout << "enter rows and cols:";
    cin >> m >> n;
    // Dynamically allocate memory for row pointer arrays for both matrices
    // Note: 'b' should ideally be allocated with size [m] instead of [n]
    int **a = new int*[m], **b = new int*[n];
    // Allocate columns for matrix 'a' and 'b', then input elements for matrix 'a'
    cout << "enter elements of first matrix:";
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        b[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    // Input elements for the second matrix 'b'
    cout << "enter elements of second matrix:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    }
    // Calculate and display the sum of matrix 'a' and matrix 'b' element-wise
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << "\n";
    }
    // Deallocate memory for each row array in both matrices
    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
        delete[] b[i];
    }
    // Deallocate the top-level pointer arrays to avoid memory leaks
    delete[] a;
    delete[] b;
    return 0;
}
