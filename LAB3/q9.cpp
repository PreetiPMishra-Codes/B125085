#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float sal;

    // Member function 1: Takes employee details as input
    void get() {
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> sal;
    }

    // Member function 2: Displays employee details
    void show() {
        cout << id << " " << name << " " << sal << "\n";
    }

    // Member function 3: Calculates and returns the average salary of an array of employees
    static float average(Employee e[], int n) {
        float sum = 0;
        for (int i = 0; i < n; i++) {
            sum += e[i].sal;
        }
        return sum / n;
    }

    // Member function 4: Finds and returns the index of the employee with the highest salary
    static int highest(Employee e[], int n) {
        int m = 0;
        for (int i = 1; i < n; i++) {
            if (e[i].sal > e[m].sal) {
                m = i;
            }
        }
        return m;
    }
};

int main() {
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    // Dynamically allocate memory on the heap for an array of 'n' Employee objects
    Employee *e = new Employee[n];

    // Input details for all employees
    for (int i = 0; i < n; i++) {
        e[i].get();
    }

    // Display all employee details
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        e[i].show();
    }

    // Call the static member function to find the highest salary employee index
    int maxIdx = Employee::highest(e, n);
    cout << "\nhighest salary: ";
    e[maxIdx].show();

    // Call the static member function to calculate average salary
    cout << "average salary: " << Employee::average(e, n) << "\n";

    // Deallocate the dynamic array to prevent memory leaks
    delete[] e;

    return 0;
}
